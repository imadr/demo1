// check all @release

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
// #include <stdio.h> //@release remove

// @release check which define/gl func to remove
// @release run upx/squishy see whats best
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_1D 0x8B5D
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_CUBE 0x8B60
#define GL_SAMPLER_1D_SHADOW 0x8B61
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_DELETE_STATUS 0x8B80
#define GL_VALIDATE_STATUS 0x8B83
#define GL_VERTEX_SHADER 0x8B31
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_COMPILE_STATUS 0x8B81
#define GL_LINK_STATUS 0x8B82
#define GL_ARRAY_BUFFER 0x8892
#define GL_STATIC_DRAW 0x88E4
#define GL_FLOAT 0x1406
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_DEPTH_TEST 0x0B71
#define GL_CULL_FACE 0x0B44
#define GL_BLEND 0x0BE2
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_EXTENSIONS 0x1F03
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_FRONT_AND_BACK 0x0408
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02
#define GL_TRIANGLES 0x0004
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_BLEND 0x0BE2
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_REPEAT 0x2901
#define GL_MIRRORED_REPEAT 0x8370
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_TEXTURE_2D 0x0DE1
#define GL_FRAMEBUFFER 0x8D40
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_LINEAR 0x2601
#define GL_RGB 0x1907
#define GL_UNSIGNED_BYTE 0x1401
#define GL_COLOR_ATTACHMENT0 0x8CE0

typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;
typedef long GLintptr;
typedef long GLsizeiptr;
typedef void* GLeglClientBufferEXT;
typedef void* GLeglImageOES;
typedef char GLchar;
typedef char GLcharARB;

typedef GLuint(APIENTRY* glCreateShader_TYPE)(GLenum);
typedef void(APIENTRY* glShaderSource_TYPE)(GLuint, GLsizei, const GLchar**, const GLint*);
typedef void(APIENTRY* glCompileShader_TYPE)(GLuint);
typedef void(APIENTRY* glGetShaderiv_TYPE)(GLuint, GLenum, GLint*);
typedef void(APIENTRY* glGetShaderInfoLog_TYPE)(GLuint, GLsizei, GLsizei*, GLchar*);
typedef GLuint(APIENTRY* glCreateProgram_TYPE)(void);
typedef void(APIENTRY* glAttachShader_TYPE)(GLuint, GLuint);
typedef void(APIENTRY* glLinkProgram_TYPE)(GLuint);
typedef void(APIENTRY* glGetProgramiv_TYPE)(GLuint, GLenum, GLint*);
typedef void(APIENTRY* glGetProgramInfoLog_TYPE)(GLuint, GLsizei, GLsizei*, GLchar*);
typedef void(APIENTRY* glDeleteProgram_TYPE)(GLuint);
typedef void(APIENTRY* glGenBuffers_TYPE)(GLsizei, GLuint*);
typedef void(APIENTRY* glBindBuffer_TYPE)(GLenum, GLuint);
typedef void(APIENTRY* glBufferData_TYPE)(GLenum, GLsizeiptr, const void*, GLenum);
typedef void(APIENTRY* glVertexAttribPointer_TYPE)(GLuint, GLint, GLenum, GLboolean, GLsizei,
                                                   const void*);
typedef void(APIENTRY* glEnableVertexAttribArray_TYPE)(GLuint);
typedef void(APIENTRY* glUseProgram_TYPE)(GLuint);
typedef void(APIENTRY* glGenVertexArrays_TYPE)(GLsizei, GLuint*);
typedef void(APIENTRY* glBindVertexArray_TYPE)(GLuint);
typedef void(APIENTRY* glUniformMatrix4fv_TYPE)(GLint, GLsizei, GLboolean, const GLfloat*);
typedef void(APIENTRY* glUniform3fv_TYPE)(GLint, GLsizei, GLfloat*);
typedef void(APIENTRY* glUniform2f_TYPE)(GLint, GLfloat, GLfloat);
typedef void(APIENTRY* glUniform1f_TYPE)(GLint, GLfloat);
typedef void(APIENTRY* glUniform1i_TYPE)(GLint, GLint);
typedef GLint(APIENTRY* glGetUniformLocation_TYPE)(GLuint, const GLchar*);
typedef const GLubyte*(APIENTRY* glGetStringi_TYPE)(GLenum, GLuint);
typedef void(APIENTRY* glGetActiveUniform_TYPE)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*,
                                                GLchar*);
typedef void(APIENTRY* glDeleteProgram_TYPE)(GLuint);
typedef void(APIENTRY* glGenerateMipmap_TYPE)(GLenum);
typedef void(APIENTRY* glGetBufferSubData_TYPE)(GLenum, size_t, GLsizeiptr, void*);
typedef void(APIENTRY* glDeleteVertexArrays_TYPE)(GLsizei, const GLuint*);
typedef void(APIENTRY* glDeleteBuffers_TYPE)(GLsizei, const GLuint*);
typedef void(APIENTRY* glGenFramebuffers_TYPE)(GLsizei, GLuint*);
typedef void(APIENTRY* glBindFramebuffer_TYPE)(GLenum, GLuint);
typedef void(APIENTRY* glGenTextures_TYPE)(GLsizei, GLuint*);
typedef void(APIENTRY* glBindTexture_TYPE)(GLenum, GLuint);
typedef void(APIENTRY* glFramebufferTexture2D_TYPE)(GLenum target,
    GLenum attachment,
    GLenum textarget,
    GLuint texture,
    GLint level);

#define WGL_SAMPLES_ARB 0x2042
#define WGL_DRAW_TO_WINDOW_ARB 0x2001
#define WGL_SUPPORT_OPENGL_ARB 0x2010
#define WGL_DOUBLE_BUFFER_ARB 0x2011
#define WGL_TYPE_RGBA_ARB 0x202B
#define WGL_PIXEL_TYPE_ARB 0x2013
#define WGL_COLOR_BITS_ARB 0x2014
#define WGL_DEPTH_BITS_ARB 0x2022
#define WGL_STENCIL_BITS_ARB 0x2023
#define WGL_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB 0x2092
#define WGL_CONTEXT_PROFILE_MASK_ARB 0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define ERROR_INVALID_VERSION_ARB 0x2095
#define ERROR_INVALID_PROFILE_ARB 0x2096

typedef const char*(APIENTRY* wglGetExtensionsStringARB_TYPE)(HDC);
typedef HGLRC(APIENTRY* wglCreateContextAttribsARB_TYPE)(HDC, HGLRC, const int*);
typedef BOOL(APIENTRY* wglChoosePixelFormatARB_TYPE)(HDC, const int*, const FLOAT*, UINT, int*,
                                                     UINT*);
typedef BOOL(APIENTRY* wglSwapIntervalEXT_TYPE)(int);

void APIENTRY glClear(GLbitfield);
void APIENTRY glClearColor(GLfloat, GLfloat, GLfloat, GLfloat);
void APIENTRY glViewport(GLint, GLint, GLsizei, GLsizei);
void APIENTRY glGetIntegerv(GLenum, GLint*);
void APIENTRY glDrawElements(GLenum, GLsizei, GLenum, const void*);
void APIENTRY glEnable(GLenum);
void APIENTRY glDisable(GLenum);
void APIENTRY glTexImage2D(GLenum target, GLint level, GLint internalFormat,
                GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type,
                const GLvoid* data);
void APIENTRY glTexParameteri(GLenum, GLenum, GLint);

glCreateShader_TYPE glCreateShader;
glShaderSource_TYPE glShaderSource;
glCompileShader_TYPE glCompileShader;
glGetShaderiv_TYPE glGetShaderiv;
glGetShaderInfoLog_TYPE glGetShaderInfoLog;
glCreateProgram_TYPE glCreateProgram;
glAttachShader_TYPE glAttachShader;
glLinkProgram_TYPE glLinkProgram;
glGetProgramiv_TYPE glGetProgramiv;
glGetProgramInfoLog_TYPE glGetProgramInfoLog;
glDeleteProgram_TYPE glDeleteProgram;
glGenBuffers_TYPE glGenBuffers;
glBindBuffer_TYPE glBindBuffer;
glBufferData_TYPE glBufferData;
glVertexAttribPointer_TYPE glVertexAttribPointer;
glEnableVertexAttribArray_TYPE glEnableVertexAttribArray;
glUseProgram_TYPE glUseProgram;
glGenVertexArrays_TYPE glGenVertexArrays;
glBindVertexArray_TYPE glBindVertexArray;
glUniformMatrix4fv_TYPE glUniformMatrix4fv;
glUniform3fv_TYPE glUniform3fv;
glUniform2f_TYPE glUniform2f;
glUniform1f_TYPE glUniform1f;
glUniform1i_TYPE glUniform1i;
glGetUniformLocation_TYPE glGetUniformLocation;
glGetStringi_TYPE glGetStringi;
glGetActiveUniform_TYPE glGetActiveUniform;
glGenerateMipmap_TYPE glGenerateMipmap;
glGetBufferSubData_TYPE glGetBufferSubData;
glDeleteVertexArrays_TYPE glDeleteVertexArrays;
glDeleteBuffers_TYPE glDeleteBuffers;
glGenFramebuffers_TYPE glGenFramebuffers;
glBindFramebuffer_TYPE glBindFramebuffer;
glGenTextures_TYPE glGenTextures;
glBindTexture_TYPE glBindTexture;
glFramebufferTexture2D_TYPE glFramebufferTexture2D;

wglCreateContextAttribsARB_TYPE wglCreateContextAttribsARB;
wglChoosePixelFormatARB_TYPE wglChoosePixelFormatARB;
wglSwapIntervalEXT_TYPE wglSwapIntervalEXT;

int opengl_init(HDC device_context) {
    WNDCLASS dummy_class = {0};
    dummy_class.style = CS_OWNDC;
    dummy_class.lpfnWndProc = DefWindowProc;
    dummy_class.hInstance = GetModuleHandle(0);
    dummy_class.lpszClassName = L"dummy_window_class";

    if (!RegisterClass(&dummy_class)) {
        return 1;
    }

    HWND dummy_window_handle = CreateWindowEx(0, L"dummy_window_class", L"", WS_OVERLAPPEDWINDOW, 0,
                                              0, 0, 0, NULL, NULL, dummy_class.hInstance, NULL);

    if (!dummy_window_handle) {
        return 1;
    }

    HDC dummy_device_context = GetDC(dummy_window_handle);

    PIXELFORMATDESCRIPTOR dummy_pixel_format = {0};
    dummy_pixel_format.nSize = sizeof(PIXELFORMATDESCRIPTOR);
    dummy_pixel_format.nVersion = 1;
    dummy_pixel_format.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    dummy_pixel_format.iPixelType = PFD_TYPE_RGBA;
    dummy_pixel_format.cColorBits = 32;
    dummy_pixel_format.cDepthBits = 24;
    dummy_pixel_format.cStencilBits = 8;
    int dummy_pixel_format_id = ChoosePixelFormat(dummy_device_context, &dummy_pixel_format);

    if (dummy_pixel_format_id == 0) {
        return 1;
    }

    PIXELFORMATDESCRIPTOR good_dummy_pixel_format;
    if (!DescribePixelFormat(dummy_device_context, dummy_pixel_format_id,
                             sizeof(PIXELFORMATDESCRIPTOR), &good_dummy_pixel_format)) {
        return 1;
    }

    if (!SetPixelFormat(dummy_device_context, dummy_pixel_format_id, &good_dummy_pixel_format)) {
        return 1;
    }

    HGLRC dummy_opengl_context = wglCreateContext(dummy_device_context);
    if (dummy_opengl_context == NULL) {
        return 1;
    }

    if (!wglMakeCurrent(dummy_device_context, dummy_opengl_context)) {
        return 1;
    }

    int err = 0;
    wglCreateContextAttribsARB =
        (wglCreateContextAttribsARB_TYPE)wglGetProcAddress("wglCreateContextAttribsARB");
    if (wglCreateContextAttribsARB == NULL) {
        err = 1;
    }

    wglChoosePixelFormatARB =
        (wglChoosePixelFormatARB_TYPE)wglGetProcAddress("wglChoosePixelFormatARB");
    if (wglChoosePixelFormatARB == NULL) {
        err = 1;
    }

    if (!wglDeleteContext(dummy_opengl_context)) {
        err = 1;
    }
    if (!ReleaseDC(dummy_window_handle, dummy_device_context)) {
        err = 1;
    }
    if (!DestroyWindow(dummy_window_handle)) {
        err = 1;
    }
    if (!UnregisterClass(L"dummy_window_class", dummy_class.hInstance)) {
        err = 1;
    }

    if (err) return err;

    int pixel_format_attributes[] = {
        WGL_DRAW_TO_WINDOW_ARB,
        GL_TRUE,
        WGL_SUPPORT_OPENGL_ARB,
        GL_TRUE,
        WGL_DOUBLE_BUFFER_ARB,
        GL_TRUE,
        WGL_PIXEL_TYPE_ARB,
        WGL_TYPE_RGBA_ARB,
        WGL_COLOR_BITS_ARB,
        32,
        WGL_DEPTH_BITS_ARB,
        24,
        WGL_STENCIL_BITS_ARB,
        8,
        WGL_SAMPLES_ARB,
        4,
        0,
    };

    int pixel_format;
    int num_formats;
    wglChoosePixelFormatARB(device_context, pixel_format_attributes, NULL, 1, &pixel_format,
                            &num_formats);

    PIXELFORMATDESCRIPTOR good_pixel_format;
    if (!DescribePixelFormat(device_context, pixel_format, sizeof(PIXELFORMATDESCRIPTOR),
                             &good_pixel_format)) {
        return 1;
    }

    if (!SetPixelFormat(device_context, pixel_format, &good_pixel_format)) {
        return 1;
    }

    int context_attributes[] = {
        WGL_CONTEXT_MAJOR_VERSION_ARB,
        3,
        WGL_CONTEXT_MINOR_VERSION_ARB,
        3,
        WGL_CONTEXT_PROFILE_MASK_ARB,
        WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
        0,
    };

    HGLRC opengl_context = wglCreateContextAttribsARB(device_context, 0, context_attributes);

    if (opengl_context == NULL) {
        return 1;
    }

    if (!wglMakeCurrent(device_context, opengl_context)) {
        return 1;
    }

    wglSwapIntervalEXT = (wglSwapIntervalEXT_TYPE)wglGetProcAddress("wglSwapIntervalEXT");

    glCreateShader = (glCreateShader_TYPE)wglGetProcAddress("glCreateShader");
    glCompileShader = (glCompileShader_TYPE)wglGetProcAddress("glCompileShader");
    glShaderSource = (glShaderSource_TYPE)wglGetProcAddress("glShaderSource");
    glGetShaderiv = (glGetShaderiv_TYPE)wglGetProcAddress("glGetShaderiv");
    glGetShaderInfoLog = (glGetShaderInfoLog_TYPE)wglGetProcAddress("glGetShaderInfoLog");
    glCreateProgram = (glCreateProgram_TYPE)wglGetProcAddress("glCreateProgram");
    glAttachShader = (glAttachShader_TYPE)wglGetProcAddress("glAttachShader");
    glLinkProgram = (glLinkProgram_TYPE)wglGetProcAddress("glLinkProgram");
    glGetProgramiv = (glGetProgramiv_TYPE)wglGetProcAddress("glGetProgramiv");
    glGetProgramInfoLog = (glGetProgramInfoLog_TYPE)wglGetProcAddress("glGetProgramInfoLog");
    glDeleteProgram = (glDeleteProgram_TYPE)wglGetProcAddress("glDeleteProgram");
    glGenBuffers = (glGenBuffers_TYPE)wglGetProcAddress("glGenBuffers");
    glBindBuffer = (glBindBuffer_TYPE)wglGetProcAddress("glBindBuffer");
    glBufferData = (glBufferData_TYPE)wglGetProcAddress("glBufferData");
    glVertexAttribPointer = (glVertexAttribPointer_TYPE)wglGetProcAddress("glVertexAttribPointer");
    glEnableVertexAttribArray = (glEnableVertexAttribArray_TYPE)wglGetProcAddress("glEnableVertexAttribArray");
    glUseProgram = (glUseProgram_TYPE)wglGetProcAddress("glUseProgram");
    glGenVertexArrays = (glGenVertexArrays_TYPE)wglGetProcAddress("glGenVertexArrays");
    glBindVertexArray = (glBindVertexArray_TYPE)wglGetProcAddress("glBindVertexArray");
    glUniformMatrix4fv = (glUniformMatrix4fv_TYPE)wglGetProcAddress("glUniformMatrix4fv");
    glUniform3fv = (glUniform3fv_TYPE)wglGetProcAddress("glUniform3fv");
    glUniform2f = (glUniform2f_TYPE)wglGetProcAddress("glUniform2f");
    glUniform1f = (glUniform1f_TYPE)wglGetProcAddress("glUniform1f");
    glUniform1i = (glUniform1i_TYPE)wglGetProcAddress("glUniform1i");
    glGetUniformLocation = (glGetUniformLocation_TYPE)wglGetProcAddress("glGetUniformLocation");
    glGetStringi = (glGetStringi_TYPE)wglGetProcAddress("glGetStringi");
    glGetActiveUniform = (glGetActiveUniform_TYPE)wglGetProcAddress("glGetActiveUniform");
    glDeleteProgram = (glDeleteProgram_TYPE)wglGetProcAddress("glDeleteProgram");
    glGenerateMipmap = (glGenerateMipmap_TYPE)wglGetProcAddress("glGenerateMipmap");
    glGetBufferSubData = (glGetBufferSubData_TYPE)wglGetProcAddress("glGetBufferSubData");
    glDeleteVertexArrays = (glDeleteVertexArrays_TYPE)wglGetProcAddress("glDeleteVertexArrays");
    glDeleteBuffers = (glDeleteBuffers_TYPE)wglGetProcAddress("glDeleteBuffers");
    glGenFramebuffers = (glGenFramebuffers_TYPE)wglGetProcAddress("glGenFramebuffers");
    glBindFramebuffer = (glBindFramebuffer_TYPE)wglGetProcAddress("glBindFramebuffer");
    glGenTextures = (glGenTextures_TYPE)wglGetProcAddress("glGenTextures");
    glBindTexture = (glBindTexture_TYPE)wglGetProcAddress("glBindTexture");
    glFramebufferTexture2D = (glFramebufferTexture2D_TYPE)wglGetProcAddress("glFramebufferTexture2D");

    if (err) {
        return 1;
    }

    return 0;
}

int opengl_load_shader(const char* vertex_shader_text, const char* fragment_shader_text) {
    int success;
    char info[512];

    int vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex_shader, 1, &vertex_shader_text, NULL);
    glCompileShader(vertex_shader);

    glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertex_shader, 512, NULL, info);
        // printf("%s\n", info); //@release remove this and stdio
        return 0;
    }

    int fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment_shader, 1, &fragment_shader_text, NULL);
    glCompileShader(fragment_shader);

    glGetShaderiv(fragment_shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(fragment_shader, 512, NULL, info);
        // printf("%s\n", info); //@release remove this and stdio
        return 0;
    }

    int program = glCreateProgram();
    glAttachShader(program, vertex_shader);
    glAttachShader(program, fragment_shader);
    glLinkProgram(program);

    glGetProgramiv(program, GL_LINK_STATUS, &success);
    if (!success) {
        // printf("%s\n", info);  //@release remove this and stdio
        return 0;
    }

    return program;
}

// @release run https://ctrl-alt-test.fr/minifier/
const char* vert_shader =
    "#version 330 core\n"
    "layout (location = 0) in vec3 a_position; out vec2 frag_coord; void "
    "main(){ "
    "gl_Position = vec4(a_position, 1.0); frag_coord = a_position.xy; }";

const char* frag_shader1 =
    "#version 330 core\n"
    "uniform float iTime;uniform vec2 iResolution;in vec2 frag_coord; out vec4 frag_color;\n"
    "#define SATURN 1.0\n"
    "#define RINGS 2.0\n"
    "#define SUN 3.0\n"
    "#define PI 3.14159265359\n"
    "struct Transform{vec3 pos;vec3 rot;};float v(float v){v=fract(v*.1031);v*=v+33.33;v*=v+v;return fract(v);}float x(vec3 l){vec3 m=floor(l),f=fract(l);f=f*f*(3.-2.*f);float x=m.x+m.y*157.+113.*m.z;return mix(mix(mix(v(x),v(x+1.),f.x),mix(v(x+157.),v(x+158.),f.x),f.y),mix(mix(v(x+113.),v(x+114.),f.x),mix(v(x+270.),v(x+271.),f.x),f.y),f.z);}float h(vec3 v){float f;f=.5*x(v);v*=2.1;f+=.25*x(v);v*=2.2;f+=.125*x(v);v*=2.3;f+=.0625*x(v);return f;}mat3 h(vec3 v,vec3 l){vec3 f=normalize(l-v),m=normalize(cross(f,vec3(sin(0.),cos(0.),0)));return mat3(m,normalize(cross(m,f)),f);}mat3 m(float v){float f=sin(v),y=cos(v);return mat3(1.,0.,0.,0.,y,-f,0.,f,y);}mat3 f(float v){float f=sin(v),l=cos(v);return mat3(l,0.,f,0.,1.,0.,-f,0.,l);}mat3 w(float v){float f=sin(v),l=cos(v);return mat3(l,-f,0.,f,l,0.,0.,0.,1.);}vec3 f(vec3 v,vec3 l){mat3 x=m(l.x)*f(l.y)*w(l.z);return v*x;}vec3 m(vec3 v,Transform m){return f(v-m.pos,m.rot);}vec3 v(vec2 v,vec2 f){vec2 l=v*length(v),x=mix(v,l,-.5);float m=max(.01-pow(length(x+.4*f),2.4),0.)*6.,y=max(.01-pow(length(x+.45*f),2.4),0.)*5.,z=max(.01-pow(length(x+.5*f),2.4),0.)*3.;x=mix(v,l,-.4);float r=max(.01-pow(length(x+.2*f),5.5),0.)*2.,S=max(.01-pow(length(x+.4*f),5.5),0.)*2.,N=max(.01-pow(length(x+.6*f),5.5),0.)*2.;x=mix(v,l,-.5);float s=max(.01-pow(length(x-.3*f),1.6),0.)*6.,k=max(.01-pow(length(x-.325*f),1.6),0.)*3.,d=max(.01-pow(length(x-.35*f),1.6),0.)*5.;vec3 i=vec3(0);i.x+=max(1./(1.+32.*pow(length(l+.8*f),2.)),0.)*.25+m+r+s;i.y+=max(1./(1.+32.*pow(length(l+.85*f),2.)),0.)*.23+y+S+k;i.z+=max(1./(1.+32.*pow(length(l+.9*f),2.)),0.)*.21+z+N+d;return 2./(length(v-f)*20.+1.)+i*7.5-vec3(length(l)*.1);}float w(vec2 v,vec2 f){vec2 main=v-f;return.5/(length(v-f)*10.)*(sin(atan(main.y,main.x)*6.)*.5+2.5);}float f(vec3 v,float f,float l){vec2 m=abs(vec2(length(v.xz),v.y))-vec2(l,f);return min(max(m.x,m.y),0.)+length(max(m,0.));}float x(vec3 v,float f){return length(v)-f;}vec2 l(vec2 f,vec2 v){return f.x>v.x?v:f;}vec3 r=vec3(0),s=vec3(1,.957,.878),y=vec3(7,1.5,7);const vec3 i=vec3(0),z=vec3(-.18,.4,.1);Transform S=Transform(i,z),N=Transform(i,z);struct Scene{vec2 s_;};struct MarchOut{float depth;float col;};Scene l(vec3 v){vec2 z=vec2(x(m(v,S),2.),SATURN);vec3 i=m(v,N);float s=f(i,1e-5,4.4);s=max(-f(i,1.,3.),s);vec2 n=vec2(x(v-y,.1),SUN);r+=1e-4/(.001+n.x*n.x*n.x*n.x)*n.y;float p=f(i,2.,3.55),d=f(i,1.,3.6),k=f(i,2.,4.07),R=f(i,1.,4.1),T=f(i,2.,3.1),c=f(i,1.,3.15);s=max(-max(-p,d),s);s=max(-max(-k,R),s);s=max(-max(-T,c),s);vec2 h=vec2(s,RINGS);return Scene(l(n,l(h,z)));}MarchOut n(vec3 v,vec3 f){vec3 x=v;float i=0.,s;for(int r=0;r<4000;r++){x=v+f*i;Scene m=l(x);s=m.s_.y;float n=m.s_.x;i+=n;if(n<1e-5)break;if(i>1e3){s=0.;break;}}return MarchOut(i,s);}vec3 n(vec3 v){if(v.z>1e3)return vec3(0);float f=l(v).s_.x;vec2 m=vec2(.001,0);float i=l(v+m.xyy).s_.x-f,s=l(v+m.yxy).s_.x-f,x=l(v+m.yyx).s_.x-f;return normalize(vec3(i,s,x));}float h(vec3 v,vec3 l,vec3 f){vec3 m=normalize(f);MarchOut i=n(v+l*.001,m);return i.col!=SUN&&i.depth<length(f-v)?0.:max(0.,dot(l,m));}void mainImage(out vec4 f,vec2 l){vec2 _=l.xy/iResolution.xy-.5;_.x*=iResolution.x/iResolution.y;vec3 z,d,p;const float c[2]=float[2](7.,5.);float R=0.;for(int M=0;M<2;M++)R+=c[M];float M=mod(iTime,R),k=0.;int T=0;for(int b=0;b<2;b++){k+=c[b];if(M<k){T=b;break;}}if(T==1)p.x=M*-.05+1.5,p.z=M*.05,z=vec3(20,-10,80),d=i-p;else if(T==0)p.x=M*.3-3.,p.y=M*-.1+.5,z=vec3(0,0,-150),d=i-p;mat3 b=h(z,d),a=inverse(b);vec3 t=b*normalize(vec3(_/20.,1)),A=b*vec3(0,0,1);MarchOut o=n(z,t);vec3 e=vec3(0),B;bool C=false;if(o.col<.9){float D=pow(h(1500.*t)+.15,50.);if(y.z<z.z)r=vec3(0);B=vec3(D)+r*s;C=true;}vec3 D=z+t*o.depth,E=n(D),F=y;float G=h(D,E,F)*1.4;vec3 H=vec3(0),I=vec3(0);if(o.col==SATURN){vec3 J=m(D,S);float K=dot(E,-t);H+=I+G+dot(normalize(F+2.*(F-dot(F,A)*A)),t)*smoothstep(0.,.1,K)*pow(1.-K,3.)*vec3(1.7,2.3,5)/10.;float L=sin((x(vec3(0,J.y,0)*3.)+x(J*2.)/10.+x(J*5.)/20.+x(J*10.)/20.)*20.);e=vec3(mix(vec3(.82,.678,.451),vec3(.773,.624,.38),L));}else if(o.col==RINGS){vec3 K=m(D,N);H+=I+G;e=vec3(mix(vec3(.357,.325,.275)*1.1,vec3(.494,.443,.376)*.94,sin(distance(vec3(0),K)*10.)*4.+sin(distance(vec3(0),K)*80.)));}else if(o.col==SUN)H=vec3(10),e=s;e*=H;if(C)e=B;vec2 K=(a*((y-z)/distance(z,y))).xy*20.;if(y.z>z.z)e+=v(_,K)/10.,e+=w(_,K)/10.;f=vec4(e,1);}"
    "void main(){mainImage(frag_color, gl_FragCoord.xy);}";

const char* frag_shader2 =
    "#version 330 core\n"
    "uniform float iTime;uniform vec2 iResolution;in vec2 frag_coord; out vec4 frag_color;uniform sampler2D tex0;\n"
    "void mainImage(out vec4 i,vec2 v){vec2 n=v/iResolution.xy;vec3 e=texture(tex0,n).xyz;if(n.y>.9)e=vec3(.01);if(n.y<.1)e=vec3(.01);e=vec3(1)-exp(-e*2.);n.x*=iResolution.x/iResolution.y;n*=2.;i=vec4(e,1);}"
    "void main(){mainImage(frag_color, gl_FragCoord.xy);}";

long get_time(LARGE_INTEGER frequency) {
    LARGE_INTEGER time;
    QueryPerformanceCounter(&time);
    time.QuadPart *= 1000000;
    time.QuadPart /= frequency.QuadPart;
    return time.QuadPart;
}

static LRESULT CALLBACK window_procedure(HWND window_handle, UINT message, WPARAM w_param,
                                         LPARAM l_param) {
    switch (message) {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(window_handle, message, w_param, l_param);
    }
    return 0;
}

int main() {
    LARGE_INTEGER frequency;
    QueryPerformanceFrequency(&frequency);

    LPCWSTR window_class_name = L"window_class";
    WNDCLASS window_class = {0};
    window_class.style = CS_OWNDC;
    window_class.lpfnWndProc = window_procedure;
    window_class.hInstance = GetModuleHandle(0);
    window_class.lpszClassName = window_class_name;

    if (!RegisterClass(&window_class)) {
        return 1;
    }

    // int width = 1920/2.0;
    // int height = 1080/2.0;

    // DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_VISIBLE;
    DWORD style = WS_POPUP | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE; // @release fullscreen
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);

    RECT window_rect = {0, 0, width, height};
    if(!AdjustWindowRect(&window_rect, style, 0)){
        return 1;
    }
    int adjusted_width = window_rect.right-window_rect.left;
    int adjusted_height = window_rect.bottom-window_rect.top;

    HWND window_handle = CreateWindowEx(0, window_class_name, NULL, style, 0, 0,
                                        adjusted_width, adjusted_height, NULL, NULL, window_class.hInstance, NULL);

    if (!window_handle) {
        return 1;
    }

    HDC device_context = GetDC(window_handle);
    if (device_context == NULL) {
        return 1;
    }

    int err = opengl_init(device_context);
    wglSwapIntervalEXT(1);
    glViewport(0, 0, width, height);

    float vertices[] = {-1, 1, 0, 1, 1, 0, 1, -1, 0, -1, -1, 0};

    unsigned int indices[] = {0, 1, 2, 2, 3, 0};

    unsigned int vao, vbo, ebo;
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glGenBuffers(1, &ebo);
    glBindVertexArray(vao);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    glDisable(GL_CULL_FACE);
    glDisable(GL_DEPTH_TEST);

    int program1 = opengl_load_shader(vert_shader, frag_shader1);
    int program2 = opengl_load_shader(vert_shader, frag_shader2);

    ShowWindow(window_handle, 5);

    glBindVertexArray(vao);

    unsigned int fbo;
    glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    unsigned int texture;
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, texture, 0);

    glBindFramebuffer(GL_FRAMEBUFFER, 0);

    unsigned int iTime = glGetUniformLocation(program1, "iTime");
    unsigned int iResolution = glGetUniformLocation(program1, "iResolution");

    ShowCursor(0); //@release hide mouse

    int running = 1;
    long start_time = get_time(frequency);
    while (running) {
        MSG message;
        while (PeekMessage(&message, NULL, 0, 0, PM_REMOVE)) {
            if (message.message != WM_QUIT) {
                TranslateMessage(&message);
                DispatchMessage(&message);
            } else {
                running = 0;
                break;
            }
        }

        glClearColor(0, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glUseProgram(program1);
        glUniform1f(iTime, ((float)get_time(frequency) - start_time) / 1000000);
        glUniform2f(iResolution, (float)width, (float)height);
        glBindFramebuffer(GL_FRAMEBUFFER, fbo);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        glUseProgram(program2);
        glUniform1f(iTime, ((float)get_time(frequency) - start_time) / 1000000);
        glUniform2f(iResolution, (float)width, (float)height);
        glBindTexture(GL_TEXTURE_2D, texture);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        SwapBuffers(device_context);
    }
    return 0;
}
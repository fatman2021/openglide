//**************************************************************
//*            OpenGLide - Glide to OpenGL Wrapper
//*             http://openglide.sourceforge.net
//*
//*     SDL specific functions for handling OpenGL extensions
//*
//*         OpenGLide is OpenSource under LGPL license
//*              Originaly made by Fabio Barros
//*      Modified by Paul for Glidos (http://www.glidos.net)
//*               Linux version by Simon White
//**************************************************************

#include "SDL.h"

#include "platform/openglext.h"

ExtFn OGLGetProcAddress(const char *x)
{
    return (ExtFn)SDL_GL_GetProcAddress(x);
}


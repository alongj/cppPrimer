//
// Created by 邵军 on 2019/3/5.
//

#ifndef CPPPRIMER_LOADSHADERS_H
#define CPPPRIMER_LOADSHADERS_H

//#include <OpenGL/OpenGL.h>
#include <GL/glew.h>
#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus


typedef struct {
    GLenum  type;
    const char* filename;
    GLuint shader;
} ShaderInfo;

GLuint LoadShaders(ShaderInfo*);

#ifdef __cplusplus
};
#endif // __cplusplus

#endif //CPPPRIMER_LOADSHADERS_H

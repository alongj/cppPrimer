//
// Created by 邵军 on 2019/3/5.
//

#include <iostream>

//#include <GL/glew.h>

//#include <GLFW/glfw3.h>

#include "LoadShaders.h"

#include <GLUT/GLUT.h>
#include <zconf.h>

using namespace std;

enum VAO_IDs {
    Triangles, NumVAOs
};

enum Buffer_IDs {
    ArrayBuffer, NumBuffers
};

enum Attrib_IDs {
    vPosition = 0
};

GLuint VAOs[NumVAOs];
GLuint Buffers[NumBuffers];

const GLuint NumVertices = 6;

GLuint program;

void init() {
    glGenVertexArrays(NumVAOs, VAOs);
    glBindVertexArray(VAOs[Triangles]);

    GLfloat vertices[NumVertices][2] = {
            {-0.90f, -0.90f},
            {0.85f,  -0.90f},
            {-0.90f, 0.85f},
            {0.90f,  -0.85f},
            {0.90f,  0.90f},
            {-0.85f, 0.90f}
    };

    glGenBuffers(NumBuffers, Buffers);
    glBindBuffer(GL_ARRAY_BUFFER, Buffers[ArrayBuffer]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    ShaderInfo shaders[] = {
            {GL_VERTEX_SHADER,   "triangles.vert"},
            {GL_FRAGMENT_SHADER, "triangles.frag"},
            {GL_NONE, NULL}
    };

    program = LoadShaders(shaders);
    glUseProgram(program);

    #define  BUFFER_OFFSET(offset) ((void *)(offset))

    glVertexAttribPointer(vPosition, 2, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(0));z

    glEnableVertexAttribArray(vPosition);

}

void display() {
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glBindVertexArray(VAOs[Triangles]);
    glDrawArrays(GL_TRIANGLES, 0, NumVertices);
    glFlush();
}


int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_3_2_CORE_PROFILE | GLUT_RGBA);
    glutInitWindowSize(512, 512);

    glutCreateWindow("openglTest");

    cout<<glGetString(GL_VERSION)<<endl;
    cout<<glGetString(GL_RENDERER)<<endl;

    printf("Supported GLSL version is %s.\n", (char *)glGetString(GL_SHADING_LANGUAGE_VERSION));


    glewExperimental = GL_TRUE;
    GLenum err = glewInit();
    if (GLEW_OK != err) {
        fprintf(stderr, "Error:%s\n", glewGetErrorString(err));
        return -1;
    }
    fprintf(stdout, "Status:Using GLEW %s\n", glewGetErrorString(err));

    if (GLEW_VERSION_4_1) {
        cout << "Yay! OpenGL4.1 is supported !" << endl;
    }

    init();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
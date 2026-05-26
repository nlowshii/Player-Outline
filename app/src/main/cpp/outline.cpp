#include "outline.h"

#include <GLES3/gl3.h>

void EnableOutline() {

    glDisable(GL_DEPTH_TEST);

    glLineWidth(4.0f);
}

void DisableOutline() {

    glEnable(GL_DEPTH_TEST);
}

#include <GL/gl.h>
#include <GL/glut.h>

void display() {
  // Set the background color to black.
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  // Clear the color buffer.
  glClear(GL_COLOR_BUFFER_BIT);

  // Draw the colorful roof of the unique hut (triangle).
  glBegin(GL_TRIANGLES);

    // Vertex 1 (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.0f);

    // Vertex 2 (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.8f, 0.0f);

    // Vertex 3 (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.8f);

  glEnd();

  // Draw the  colored body of the hut (rectangle).
  glBegin(GL_QUADS);

    // Bottom-left (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.65f, 0.0f);

    // Top-left (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.65f, -0.85f);

    // Top-right (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.85f);

    // Bottom-right (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.65f, 0.0f);

  glEnd();

  // Draw the distinctive outline of the body (lines).
  glLineWidth(2.0f);
  glBegin(GL_LINES);

    // Left line (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.7f, -0.9f);

    // Bottom line (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.7f, -0.9f);
    glVertex2f(0.7f, -0.9f);

    // Right line (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.7f, -0.9f);

  glEnd();

  // Swap the buffers to display the unique drawing on the screen.
  glutSwapBuffers();
}

int main(int argc, char** argv) {
  // Initialize GLUT for the one-of-a-kind hut.
  glutInit(&argc, argv);

  // Create a window with a single color buffer and no depth buffer.
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(500, 500);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("My Hut");

  // Set the display callback function for the distinctive hut.
  glutDisplayFunc(display);

  // Enter the unique GLUT main loop for the uniquely created hut.
  glutMainLoop();

  return 0;
}


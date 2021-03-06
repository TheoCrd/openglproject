#ifndef CONSTANTS_H
#define CONSTANTS_H


const double dt = 0.001;
const double g = 80.0;


/* Espace fenetre virtuelle */
static const float GL_VIEW_SIZE = 100.;  

/* Dimensions initiales et titre de la fenetre */
static const unsigned int WINDOW_WIDTH = 1920;
static const unsigned int WINDOW_HEIGHT = 1080;
static const char WINDOW_TITLE[] = "OPENGL";

/* Nombre minimal de millisecondes separant le rendu de deux images */
static const Uint32 FRAMERATE_MILLISECONDS = 1000 / 60;     // En ms
static const float delta_t = FRAMERATE_MILLISECONDS/1000.0; // En s

#endif

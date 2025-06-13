#ifndef TEXTURE_H
#define TEXTURE_H

// Prevents multiple inclusions of this header file
#pragma once

// Include SDL2 graphics library header
#include <SDL2/SDL.h>

// Update texture definitions for clarity
#define NUM_WALL_TEXTURES 4
#define NUM_TEXTURES NUM_WALL_TEXTURES  // For backwards compatibility
#define TEX_WIDTH 64
#define TEX_HEIGHT 64

typedef struct {
    SDL_Texture* texture;
    Uint32* pixels;
    int width;
    int height;
} TextureInfo;

// Array to store wall texture pointers, accessible from other source files
// SDL_Texture is SDL's structure for storing texture data
extern TextureInfo wall_textures[NUM_WALL_TEXTURES];
extern TextureInfo floor_texture;
extern TextureInfo ceiling_texture;

// Function to load and initialize all wall textures
// Takes an SDL_Renderer pointer as parameter to create textures
// Returns 0 on success, non-zero on failure
int init_textures(SDL_Renderer* renderer);

// Function to properly free all allocated texture memory
// Should be called before program termination
void destroy_textures(void);

// Add texture validation function
int validate_texture(const TextureInfo* tex);

#endif


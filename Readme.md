# Raycaster

A simple raycasting engine implemented in C. This project demonstrates the fundamentals of 2D raycasting, similar to early 3D games.

## Features

- 2D grid-based map rendering
- Real-time player movement and rotation
- Wall collision detection
- Texture support

## Roadmap

- A working gun system
- Better texture rendering
- Windows combatibility

## Getting Started

### Prerequisites for editing

- C compiler (e.g., gcc or clang)
  Note: clang is not tested
- `SDL2` library

Install dependencies (on Ubuntu/Debian):

```bash
sudo apt-get install libsdl2-dev
```

### Building and Running the Project
In Terminal:
```bash
gcc -o raycaster main.c raycaster.c -lSDL2
./raycaster
```
In the VSCode Terminal:
```bash
make clean     # to remove previous .o and exec files
make           # compiling for linux
./raycaster    # run the game
```


- **main.c**: Entry point, handles game loop and input.
- **raycaster.c**: Core raycasting logic.
- **map.c**: Stores the map

## Controls

- ↑ - Walk forward
- ↓ - Walk backward
- ← - Look left
- → - Look right

## Documentation

### Main Functions

̀̀̀```bash
void cast_rays(Player *player, int **map_data, Ray *rays)

/* Casts rays from the player's position and fills an array of wall hit distances. */

void move_player(Player *player, int direction, int **map_data)

/* Moves the player in the specified direction, handling collision. */

void draw_scene(SDL_Renderer *renderer, Ray *rays, Texture *textures)

/* Renders the "3D" scene based on raycasting results. */
```

### Map Format

Maps are defined as 2D arrays, where `1` represents a wall and `0` is empty space.
"MAP_HEIGHT" and "MAP_WIDTH" are defined in map.h. Here's an example with 16x16:

```c
int map[MAP_HEIGHT][MAP_WIDTH] = {
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};
```

## License

![Static Badge](https://img.shields.io/badge/MIT-%20green?label=LICENSE&link=https%3A%2F%2Fgithub.com%2Faarcticc%2FMy-Scripts%2Fblob%2Fmain%2FLICENSE)

## Credits

- Inspired by https://www.youtube.com/@jdh
- Parts of this code are made with AI

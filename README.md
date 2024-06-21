# Sokoban - Epitech project

## Introduction

`my_sokoban` is a personal project that recreates the classic Sokoban game. This project is part of my Epitech curriculum and aims to deepen my understanding of game development, file handling, and C programming.

## Features

- Implement the classic Sokoban game mechanics.
- Read game levels from a file.
- Handle player movements and game state updates.
- Display the game board in the terminal.

## Installation

Follow these steps to set up `my_sokoban`:

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/jeremyarmijo/my_sokoban.git
    ```

2. **Navigate to the Project Directory:**

    ```bash
    cd my_sokoban
    ```

3. **Compile the Project:**

    ```bash
    make
    ```

## Usage

Run the `my_sokoban` command from the terminal with a game level file as an argument:

```bash
./my_sokoban <level_file>
```

### Example

1. **Playing a Level:**

    ```bash
    ./my_sokoban map
    ```

    Example content of `map`:

    ```
    ############
    #      X  O#
    #P      ##########
    #          #     #
    #######    #######
    #O   ##    #
    #    ##    #
    #   X      #
    #          #
    #  X   O # #
    ############
    ```

### Controls

- **Arrow Keys**: Move the player.
- **Space**: Reset map.
- **Q**: Quit the game.

#include <stdio.h>

/*
Struct
    - A struct can hold multiple pieces of a data within one object
    - A struct creates a new data type with the struct's name
*/

// struct rectangle type
// add typedef to remove the requirement of placing struct everytime
    // a new rectangle object is created
// typedef creates a new data type
struct rectangle {
    int length;
    int width;
} rectangle;

typedef struct position {
    int x;
    int y;
} position;

// struct of structs
typedef struct buildingPlan {
    char owner[30];
    struct rectangle rect;
    position pos;
} buildingPlan;

int main() {
    // declare and initialize a struct
    struct rectangle rect1 = {5, 10};
    // . operator is used to access the data within the struct
    printf("Length: %d, Width: %d\n", rect1.length, rect1.width);

    // declare and initialize a struct of structs
    buildingPlan house = {"David Max", {5, 10}, {32, 48}};
    printf("The house at %d %d (size %d %d) is owned by %s\n",
        house.pos.x,
        house.pos.y,
        house.rect.length,
        house.rect.width,
        house.owner
    );

    // array of structs
    position path[] = {{48, 52}, {5, 10}, {10, 20}};
    for (int i = 0; i < 3; i++) {
        printf("%d %d\n", path[i].x, path[i].y);
    }

    // struct pointer
    buildingPlan *structPointer = &house;
    // for struct pointers, use -> instead of *
    printf("Position x: %d\n", structPointer->pos.x);
    return 0;
}
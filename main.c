#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  int points_length = 5;
  Point current_location[] = {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}};
  Point closest_food_location = {0, 0};

  DO_FIVE_TIMES
  {
    get_closest_food(food_points, points_length, current_location[i], &closest_food_location);
    printf("Food location: [%d %d] is closest to organism location: [%d %d]\n", closest_food_location.x, closest_food_location.y, current_location[i].x, current_location[i].y);
  }
  return 0;
}
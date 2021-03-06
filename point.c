#include <math.h>
#include "point.h"

double get_distance(Point point_A, Point point_B)
{
  return sqrt(pow(point_A.x - point_B.x, 2) + pow(point_A.y - point_B.y, 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double distance, closest_distance = MAX_VALUE;

  DO_LENGTH_TIMES
  {
    distance = get_distance(food_points[i], current_location);
    if (closest_distance > distance)
    {
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
      closest_distance = distance;
    }
  }
}
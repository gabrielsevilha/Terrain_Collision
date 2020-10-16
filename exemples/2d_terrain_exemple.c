#include"terrain_collision.h"

#include<stdio.h>

int main(){

	float object_x = 400, object_y = 300;
	float terrain[] = {0,300, 100,400, 200,400, 200,500, 400,500, 450,450, 500,425, 550,375, 600,350, 650,375, 700,425, 750,500, 800,500};
	
	float height = getHeight2D(object_x,object_y,terrain,sizeof(terrain));
	
	printf("%f\n",height);
	return 0;
}

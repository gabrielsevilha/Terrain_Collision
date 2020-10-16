#include"terrain_collision.h"

#include<stdio.h>

int main(){

	float x = 200, y = 400;
	
	float terrain[] = {0,300, 100,400, 200,400, 200,500, 400,500, 450,450, 500,425, 550,375, 600,350, 650,375, 700,425, 750,500, 800,500};

	float height = getHeight2D(x,y,terrain,sizeof(terrain));
	
	printf("%f\n",height);

	return 0;
}

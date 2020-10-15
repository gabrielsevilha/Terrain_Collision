//by Gabriel Sevilha <3

#include<math.h>

float getHeight2D(float x, float y, float* vertex, int sizeof_vertex){
	float min = vertex[0], max = vertex[(int)(sizeof_vertex/sizeof(float))-2];
	int vec_min = 0, vec_max = 0;
	for(int i = 0; i < (int)(sizeof_vertex/sizeof(float)); i+=2){
		if(vertex[i] >= min && vertex[i] < x){ min = vertex[i]; vec_min = i; }
		if(vertex[i] <= max && vertex[i] > x){ max = vertex[i]; vec_max = i; }
	}
	return vertex[vec_min+1]+(x-vertex[vec_min]) * (vertex[vec_max+1]-vertex[vec_min+1])/(vertex[vec_max]-vertex[vec_min]);
}
float getHeight3D(float x, float z, float* vertex, int sizeof_vertex){
	int vec_a = 0, vec_b = 0, vec_c = 0;
	for(int i = 0; i < (int)sizeof_vertex/sizeof(float); i+=9){
		float d1 = (x - vertex[i+3]) * (vertex[i+2] - vertex[i+5]) - (vertex[i+0] - vertex[i+3]) * (z - vertex[i+5]);
		float d2 = (x - vertex[i+6]) * (vertex[i+5] - vertex[i+8]) - (vertex[i+3] - vertex[i+6]) * (z - vertex[i+8]);
		float d3 = (x - vertex[i+0]) * (vertex[i+8] - vertex[i+2]) - (vertex[i+6] - vertex[i+0]) * (z - vertex[i+2]);
		float negative = (d1 < 0) || (d2 < 0) || (d3 < 0);
		float positive = (d1 > 0) || (d2 > 0) || (d3 > 0);
		int collided = !(negative && positive);
		if(collided){
			vec_a = i;
			vec_b = i+3;
			vec_c = i+6;
			break;
		}
	}
	float a = (vertex[vec_b+1] - vertex[vec_a+1]) * (vertex[vec_c+2] - vertex[vec_a+2]) - (vertex[vec_c+1] - vertex[vec_a+1]) * (vertex[vec_b+2] - vertex[vec_a+2]);
	float b = (vertex[vec_b+2] - vertex[vec_a+2]) * (vertex[vec_c+0] - vertex[vec_a+0]) - (vertex[vec_c+2] - vertex[vec_a+2]) * (vertex[vec_b+0] - vertex[vec_a+0]);
	float c = (vertex[vec_b+0] - vertex[vec_a+0]) * (vertex[vec_c+1] - vertex[vec_a+1]) - (vertex[vec_c+0] - vertex[vec_a+0]) * (vertex[vec_b+1] - vertex[vec_a+1]);
	float d = (a * vertex[vec_a] + b * vertex[vec_a+1] + c * vertex[vec_a+2]);
	return (d - a * x - c * z) / b;
}

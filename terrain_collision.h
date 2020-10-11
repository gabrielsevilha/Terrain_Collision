float getHeight2D(float x, float y, float* vertices, int sizeof_vertices){
	float min = vertices[0], max = vertices[(int)(sizeof_vertices/sizeof(float))-2];
	int vec_min = 0, vec_max = 0;
	for(int i = 0; i < (int)(sizeof_vertices/sizeof(float)); i+=2){
		if(vertices[i] >= min && vertices[i] < x){ min = vertices[i]; vec_min = i; }
		if(vertices[i] <= max && vertices[i] > x){ max = vertices[i]; vec_max = i; }
	}
	return vertices[vec_min+1]+(x-vertices[vec_min]) * (vertices[vec_max+1]-vertices[vec_min+1])/(vertices[vec_max]-vertices[vec_min]);
}

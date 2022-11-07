![alt text](/Template.png) </br>
![](/demos/terraindemo.gif) </br>
(**game art**: https://szadiart.itch.io/pixel-platformer-world and https://rvros.itch.io/animated-pixel-hero)</br>

**Observation:**<br/>
  * Your terrain need be store in an float array. For exemple:<br/>
  	float 2D_Terrain[] = {X,Y, X,Y, X,Y...}; <br/>
	float 3D_Terrain[] = {X,Y,Z, X,Y,Z, X,Y,Z...};
  * For 3D, your terrain need be triangularize and can't have a overlapping of triangles in space X,Z<br/>

**Example:**
```C
//For 2D:
#include"terrain_collision.h"
int main(){
	float object_x = 400, object_y = 300;
	float terrain[] = {0,300, 100,400, 200,400...};
	float height = getHeight2D(object_x,object_y,terrain,sizeof(terrain));
}

//For 3D:
#include"terrain_collision.h"
int main(){
	float object_x = 3.2, object_z = 6.8;
	float terrain[] = {9.7,0.5,0.3, 9.7,0.6,0.3...};
	float height = getHeight3D(object_x,object_z,terrain,sizeof(terrain));
}

```

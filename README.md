![alt text](/Template.png) </br>
![](/demos/terraindemo.gif) </br>
(**game art**: https://szadiart.itch.io/pixel-platformer-world and https://rvros.itch.io/animated-pixel-hero)</br>

Exemple:
```C
#include"terrain_collision.h"
int main(){
	float object_x = 400, object_y = 300;
	float terrain[] = {0,300, 100,400, 200,400...};
	float height = getHeight2D(object_x,object_y,terrain,sizeof(terrain));
  //For 3D, just use getHeight3D and swap object_y to object_z
}
```

***by Gabriel Sevilha <3***

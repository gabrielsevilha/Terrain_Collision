![alt text](/Template.png) </br>
![](/demos/terraindemo.gif) </br>
(**game art**: https://szadiart.itch.io/pixel-platformer-world and https://rvros.itch.io/animated-pixel-hero)</br>

Exemple:
```C
//For 2D:
#include"terrain_collision.h"
int main(){
	float object_x = 400, object_y = 300;
	float terrain[] = {0,300, 100,400, 200,400...};
	float height = getHeight2D(object_x,object_y,terrain,sizeof(terrain));
}

//For3D:
#include"terrain_collision.h"
int main(){
	float object_x = 3.2, object_z = 6.8;
	float terrain[] = {9.7,0.5,0.3, 9.7,0.6,0.3...};
	float height = getHeight3D(object_x,object_z,terrain,sizeof(terrain));
}

```

***by Gabriel Sevilha <3***

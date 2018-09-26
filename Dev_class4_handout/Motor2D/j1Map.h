#ifndef __j1MAP_H__
#define __j1MAP_H__

#include "PugiXml/src/pugixml.hpp"
#include "p2List.h"
#include "p2Point.h"
#include "j1Module.h"

// TODO 2: Create a struct to hold information for a TileSet
// Ignore Terrain Types and Tile Types for now, but we want the image!
// ----------------------------------------------------

struct TileSet {
	/*firstgid = "1"
	name = "Desert"*/
	p2SString name = "nada";
	uint spacing = 0;
	uint margin = 0;
	uint tilewidth = 0;
	uint tileheight = 0;
};

// TODO 1: Create a struct needed to hold the information to Map node

enum class map_orientation {
	left_down,
	right_down,
	left_up,
	right_down,
	error
};

/*enum class map_renderorder {
	error
};*/

struct Map_node {
	//float map_version = 0.0;
	map_orientation orientation = map_orientation::error;
	/*map_renderorder renderorder = map_renderorder::error;*/ //5 elem
	uint width = 0;
	uint height = 0;
	uint tilewidth = 0;
	uint tileheight = 0;
	//nextobjectid = "1">
};

// ----------------------------------------------------
class j1Map : public j1Module
{
public:

	j1Map();

	// Destructor
	virtual ~j1Map();

	// Called before render is available
	bool Awake(pugi::xml_node& conf);

	// Called each loop iteration
	void Draw();

	// Called before quitting
	bool CleanUp();

	// Load new map
	bool Load(const char* path);

private:
	bool LoadMap(map_orientation orientation, uint width, uint height, uint tilewitdh, uint tileheight);


public:

	// TODO 1: Add your struct for map info as public for now

private:

	pugi::xml_document	map_file;
	p2SString			folder;
	bool				map_loaded;
};

#endif // __j1MAP_H__
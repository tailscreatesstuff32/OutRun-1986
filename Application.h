#ifndef __APPLICATION_CPP__
#define __APPLICATION_CPP__

#include<list>
#include "Globals.h"
#include "Module.h"

class ModuleRender;
class ModuleWindow;
class ModuleTextures;
class ModuleInput;
class ModuleAudio;
class ModuleFadeToBlack;

// Game modules ---
class ModulePlayer;
class ModuleSceneIntro;
class ModuleSceneMusic;
class ModuleSceneStage;

class Application
{
public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

public:
	ModuleRender* renderer;
	ModuleWindow* window;
	ModuleTextures* textures;
	ModuleInput* input;
	ModuleAudio* audio;
	ModuleFadeToBlack* fade;

	// Game modules ---
	ModulePlayer* player;
	ModuleSceneIntro* scene_intro;
	ModuleSceneMusic* scene_music;
	ModuleSceneStage* scene_stage;

private:

	std::list<Module*> modules;
};

extern Application* App;

#endif // __APPLICATION_CPP__

struct MeshResource {

	Mesh mesh;
	char name[64];

	char file_path[128];

	char file_to_write_path[128];

	bool isInPack = false;
	unsigned int byte_start;
	unsigned int byte_end;

	bool isRemoved = false;
};

struct TextureResource {

	ZSpire::Texture texture;
	char name[64];

	char file_path[128];

	char file_to_write_path[128];

	bool isInPack = false;
	unsigned int byte_start;
	unsigned int byte_end;

	bool isRemoved = false;

};


unsigned int getMeshesCount();
MeshResource* getMeshAt(unsigned int index);
void addMesh(MeshResource mesh);

unsigned int getTexturesCount();
TextureResource* getTextureAt(unsigned int index);
void addTexture(TextureResource mesh);

void loadResources(const char* path);
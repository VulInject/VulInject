static bool
js_SetTileImage(int num_args, bool is_ctor, intptr_t magic)
{
image_t*   image;
int        image_h;
int        image_w;
int        tile_h;
int        tile_index;
int        tile_w;
tileset_t* tileset;

tile_index = jsal_to_int(0);
image = jsal_require_class_obj(1, SV1_IMAGE);

if (!map_engine_running())
jsal_error(JS_RANGE_ERROR, "Map engine not running");
tileset = map_tileset();
if (tile_index < 0 || tile_index >= tileset_len(tileset))
jsal_error(JS_RANGE_ERROR, "invalid tile index");
tileset_get_size(tileset, &tile_w, &tile_h);
image_w = image_width(image);
image_h = image_height(image);
if (image_w != tile_w || image_h != tile_h)
jsal_error(JS_TYPE_ERROR, "image/tile size mismatch");
tileset_set_image(tileset, tile_index, image);
return false;
}
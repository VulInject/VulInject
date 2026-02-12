bool
image_save(image_t* it, const char* filename)
{
void*         buffer = NULL;
size_t        file_size;
bool          is_eof;
ALLEGRO_FILE* memfile;
size_t        next_buf_size;
bool          result;

next_buf_size = 65536;
do {
buffer = realloc(buffer, next_buf_size);
memfile = al_open_memfile(buffer, next_buf_size, "wb");
next_buf_size *= 2;
al_save_bitmap_f(memfile, strrchr(filename, '.'), it->bitmap);
file_size = al_ftell(memfile);
is_eof = al_feof(memfile);
al_fclose(memfile);
} while (is_eof);
result = game_write_file(g_game, filename, buffer, file_size);
free(buffer);
return result;
}
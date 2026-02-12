bool
logger_begin_block(logger_t* logger, const char* title)
{
lstring_t*    block_name;
struct block* blocks;
int           new_count;

new_count = logger->num_blocks + 1;
if (new_count > logger->max_blocks) {
if (!(blocks = realloc(logger->blocks, new_count * 2))) return false;
logger->blocks = blocks;
logger->max_blocks = new_count * 2;
}
if (!(block_name = lstr_newf("%s", title))) return false;
logger_write(logger, "BEGIN", lstr_cstr(block_name));
logger->blocks[logger->num_blocks].name = block_name;
++logger->num_blocks;
return true;
}
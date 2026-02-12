void ext4fs_push_revoke_blk(char *buffer)
{
struct revoke_blk_list *node = NULL;
struct ext_filesystem *fs = get_fs();
if (buffer == NULL) {
printf("buffer ptr is NULL\n");
return;
}
node = _get_node();
if (!node) {
printf("_get_node: malloc failed\n");
return;
}

node->content = zalloc(fs->blksz);
if (node->content == NULL)
return;
memcpy(node->content, buffer, fs->blksz);

if (first_node == true) {
revk_blk_list = node;
prev_node = node;
first_node = false;
} else {
prev_node->next = node;
prev_node = node;
}
}
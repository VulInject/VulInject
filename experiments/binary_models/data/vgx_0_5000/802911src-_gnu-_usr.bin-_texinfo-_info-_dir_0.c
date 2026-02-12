new_dir_file_p (struct stat *test)
{
static unsigned dir_file_list_len = 0;
static dir_file_list_entry_type *dir_file_list = NULL;
unsigned i;

for (i = 0; i < dir_file_list_len; i++)
{
dir_file_list_entry_type entry;
entry = dir_file_list[i];
if (entry.device == test->st_dev && entry.inode == test->st_ino)
return 0;
}

dir_file_list_len++;
dir_file_list = xrealloc (dir_file_list, 
dir_file_list_len * sizeof (dir_file_list_entry_type));
dir_file_list[dir_file_list_len - 1].device = test->st_dev;
dir_file_list[dir_file_list_len - 1].inode = test->st_ino;
return 1;
}
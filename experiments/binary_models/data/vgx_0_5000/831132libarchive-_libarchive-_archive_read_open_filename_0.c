static int64_t
file_skip_lseek(struct archive *a, void *client_data, int64_t request)
{
struct read_file_data *mine = (struct read_file_data *)client_data;

int64_t old_offset, new_offset;
off_t old_offset, new_offset;




if ((old_offset = lseek(mine->fd, 0, SEEK_CUR)) >= 0 &&
(new_offset = lseek(mine->fd, request, SEEK_CUR)) >= 0)
return (new_offset - old_offset);


mine->use_lseek = 0;


if (errno == ESPIPE)
return (0);


if (mine->filename_type == FNT_STDIN)
archive_set_error(a, errno, "Error seeking in stdin");
else if (mine->filename_type == FNT_MBS)
archive_set_error(a, errno, "Error seeking in '%s'",
mine->filename.m);
else
archive_set_error(a, errno, "Error seeking in '%S'",
mine->filename.w);
return (-1);
}
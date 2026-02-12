dump_register (const char *suffix, const char *swtch, const char *glob,
int flags, int letter)
{
static int next_dump = FIRST_AUTO_NUMBERED_DUMP;
int num = next_dump++;

size_t this = extra_dump_files_in_use++;

if (this >= extra_dump_files_alloced)
{
if (extra_dump_files_alloced == 0)
extra_dump_files_alloced = 32;
else
extra_dump_files_alloced *= 2;
extra_dump_files = xrealloc (extra_dump_files,
sizeof (struct dump_file_info)
* extra_dump_files_alloced);
}

memset (&extra_dump_files[this], 0, sizeof (struct dump_file_info));
extra_dump_files[this].suffix = suffix;
extra_dump_files[this].swtch = swtch;
extra_dump_files[this].glob = glob;
extra_dump_files[this].flags = flags;
extra_dump_files[this].num = num;
extra_dump_files[this].letter = letter;

return this + TDI_end;
}
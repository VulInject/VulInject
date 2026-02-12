int open_stream(mpg123_handle *fr, const char *bs_filenam, int fd)
{
int filept_opened = 1;
int filept; 

clear_icy(&fr->icy); 

if(!bs_filenam) 
{
filept = fd;
filept_opened = 0; 
}
else if((filept = compat_open(bs_filenam, O_RDONLY|O_BINARY)) < 0) 
{
if(NOQUIET) error2("Cannot open file %s: %s", bs_filenam, strerror(errno));
fr->err = MPG123_BAD_FILE;
return MPG123_ERR; 
}


fr->rdat.filelen = -1;
fr->rdat.filept  = filept;
fr->rdat.flags = 0;
if(filept_opened)	fr->rdat.flags |= READER_FD_OPENED;

return open_finish(fr);
}
static void	mp4_getSongTitle(char *filename, char **title, int *len) {
FILE* mp4file;

(*title) = NULL;
(*len) = -1;

if((mp4file = fopen(filename, "rb"))){
mp4_get_file_type(mp4file);
fseek(mp4file, 0, SEEK_SET);
if(mp4cfg.file_type == FILE_MP4){
mp4ff_callback_t*	mp4cb;
mp4ff_t*		infile;
gint		mp4track;

mp4cb = getMP4FF_cb(mp4file);
if ((infile = mp4ff_open_read_metaonly(mp4cb)) &&
((mp4track = getAACTrack(infile)) >= 0)){
(*title) = getMP4title(infile, filename);

double track_duration = mp4ff_get_track_duration(infile, mp4track);
unsigned long time_scale = mp4ff_time_scale(infile, mp4track);
unsigned long length = (track_duration * 1000 / time_scale);
(*len) = length;
}
if(infile) mp4ff_close(infile);
if(mp4cb) g_free(mp4cb);
}
else{

}
fclose(mp4file);
}
}
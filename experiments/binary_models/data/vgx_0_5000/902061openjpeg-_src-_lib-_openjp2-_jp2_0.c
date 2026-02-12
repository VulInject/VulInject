static void jp2_write_url(opj_cio_t *cio, char *Idx_file)
{
OPJ_UINT32 i;
opj_jp2_box_t box;

box.init_pos = cio_tell(cio);
cio_skip(cio, 4);
cio_write(cio, JP2_URL, 4); 
cio_write(cio, 0, 1);       
cio_write(cio, 0, 3);       

if (Idx_file) {
for (i = 0; i < strlen(Idx_file); i++) {
cio_write(cio, Idx_file[i], 1);
}
}

box.length = cio_tell(cio) - box.init_pos;
cio_seek(cio, box.init_pos);
cio_write(cio, box.length, 4);  
cio_seek(cio, box.init_pos + box.length);
}
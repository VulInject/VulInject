static GF_FileIO *gf_fileio_from_blob(const char *file_name)
{
u8 *blob_data;
u32 blob_size, flags;
GF_FileIOBlob *gfio_blob;
GF_Err e = gf_blob_get(file_name, &blob_data, &blob_size, &flags);
if (e || !blob_data) return NULL;
gf_blob_release(file_name);

if (flags) {
GF_LOG(GF_LOG_ERROR, GF_LOG_CORE, ("[Core] Attempt at creating a GFIO object on blob corrupted or in transfer, not supported !"));
return NULL;
}

GF_SAFEALLOC(gfio_blob, GF_FileIOBlob);
if (!gfio_blob) return NULL;
gfio_blob->data = blob_data;
gfio_blob->size = blob_size;
return gf_fileio_new((char *) file_name, gfio_blob, gfio_blob_open, gfio_blob_seek, gfio_blob_read, NULL, gfio_blob_tell, gfio_blob_eof, NULL);
}
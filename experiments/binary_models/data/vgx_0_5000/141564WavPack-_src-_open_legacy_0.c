WavpackContext *WavpackOpenFileInputEx (WavpackStreamReader *reader, void *wv_id, void *wvc_id, char *error, int flags, int norm_offset)
{
WavpackReaderTranslator *trans_wv = NULL, *trans_wvc = NULL;




if (flags & OPEN_STREAMING)
flags |= OPEN_NO_CHECKSUM;

if (wv_id) {
trans_wv = (WavpackReaderTranslator *)malloc (sizeof (WavpackReaderTranslator));
trans_wv->reader = reader;
trans_wv->id = wv_id;
}

if (wvc_id) {
trans_wvc = (WavpackReaderTranslator *)malloc (sizeof (WavpackReaderTranslator));
trans_wvc->reader = reader;
trans_wvc->id = wvc_id;
}

return WavpackOpenFileInputEx64 (&trans_reader, trans_wv, trans_wvc, error, flags, norm_offset);
}
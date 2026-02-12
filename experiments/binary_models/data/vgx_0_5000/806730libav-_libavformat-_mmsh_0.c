static int handle_chunk_type(MMSHContext *mmsh)
{
MMSContext *mms = &mmsh->mms;
int res, len = 0;
ChunkType chunk_type;
chunk_type = get_chunk_header(mmsh, &len);

switch (chunk_type) {
case CHUNK_TYPE_END:
mmsh->chunk_seq = 0;
av_log(NULL, AV_LOG_ERROR, "Stream ended!\n");
return AVERROR(EIO);
case CHUNK_TYPE_STREAM_CHANGE:
mms->header_parsed = 0;
if (res = get_http_header_data(mmsh)) {
av_log(NULL, AV_LOG_ERROR,"Stream changed! Failed to get new header!\n");
return res;
}
break;
case CHUNK_TYPE_DATA:
return read_data_packet(mmsh, len);
default:
av_log(NULL, AV_LOG_ERROR, "Recv other type packet %d\n", chunk_type);
return AVERROR_INVALIDDATA;
}
return 0;
}
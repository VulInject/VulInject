static void write_packet_header(AVFormatContext *ctx, StreamInfo *stream,
int length, int key_frame)
{
int timestamp;
AVIOContext *s = ctx->pb;

stream->nb_packets++;
stream->packet_total_size += length;
if (length > stream->packet_max_size)
stream->packet_max_size =  length;

avio_wb16(s,0); 
avio_wb16(s,length + 12);
avio_wb16(s, stream->num); 
timestamp = (1000 * (float)stream->nb_frames) / stream->frame_rate;
avio_wb32(s, timestamp); 
avio_w8(s, 0); 
avio_w8(s, key_frame ? 2 : 0); 
}
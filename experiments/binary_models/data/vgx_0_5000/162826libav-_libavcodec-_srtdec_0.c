static int srt_decode_frame(AVCodecContext *avctx,
void *data, int *got_sub_ptr, AVPacket *avpkt)
{
AVSubtitle *sub = data;
int ts_start, ts_end, x1 = -1, y1 = -1, x2 = -1, y2 = -1;
char buffer[2048];
const char *ptr = avpkt->data;
const char *end = avpkt->data + avpkt->size;

if (avpkt->size <= 0)
return avpkt->size;

ff_ass_init(sub);

while (ptr < end && *ptr) {
ptr = read_ts(ptr, &ts_start, &ts_end, &x1, &y1, &x2, &y2);
if (!ptr)
break;
ptr = srt_to_ass(avctx, buffer, buffer+sizeof(buffer), ptr,
x1, y1, x2, y2);
ff_ass_add_rect(sub, buffer, ts_start, ts_end, 0);
}

*got_sub_ptr = sub->num_rects > 0;
return avpkt->size;
}
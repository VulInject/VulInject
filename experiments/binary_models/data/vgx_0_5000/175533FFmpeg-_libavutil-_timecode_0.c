char *av_timecode_make_string(const AVTimecode *tc, char *buf, int framenum)
{
int fps = tc->fps;
int drop = tc->flags & AV_TIMECODE_FLAG_DROPFRAME;
int hh, mm, ss, ff, ff_len, neg = 0;

framenum += tc->start;
if (drop)
framenum = av_timecode_adjust_ntsc_framenum2(framenum, fps);
if (framenum < 0) {
framenum = -framenum;
neg = tc->flags & AV_TIMECODE_FLAG_ALLOWNEGATIVE;
}
ff = framenum % fps;
ss = framenum / fps        % 60;
mm = framenum / (fps*60LL) % 60;
hh = framenum / (fps*3600LL);
if (tc->flags & AV_TIMECODE_FLAG_24HOURSMAX)
hh = hh % 24;
ff_len = fps > 10000 ? 5 : fps > 1000 ? 4 : fps > 100 ? 3 : fps > 10 ? 2 : 1;
snprintf(buf, AV_TIMECODE_STR_SIZE, "%s%02d:%02d:%02d%c%0*d",
neg ? "-" : "",
hh, mm, ss, drop ? ';' : ':', ff_len, ff);
return buf;
}
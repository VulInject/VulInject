static struct uvcg_frame *find_closest_frame_by_size(struct uvc_device *uvc,
struct uvcg_format *uformat,
u16 rw, u16 rh)
{
struct uvc_video *video = &uvc->video;
struct uvcg_format_ptr *format;
struct uvcg_frame_ptr *frame;
struct uvcg_frame *uframe = NULL;
unsigned int d, maxd;


maxd = (unsigned int)-1;

list_for_each_entry(format, &uvc->header->formats, entry) {
if (format->fmt->type != uformat->type)
continue;

list_for_each_entry(frame, &format->fmt->frames, entry) {
u16 w, h;

w = frame->frm->frame.w_width;
h = frame->frm->frame.w_height;

d = min(w, rw) * min(h, rh);
d = w*h + rw*rh - 2*d;
if (d < maxd) {
maxd = d;
uframe = frame->frm;
}

if (maxd == 0)
break;
}
}

if (!uframe)
uvcg_dbg(&video->uvc->func, "Unsupported size %ux%u\n", rw, rh);

return uframe;
}
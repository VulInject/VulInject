gst_send_subtitle_frame (GstDvdSubDec * dec, GstClockTime end_ts)
{
GstFlowReturn flow;
GstBuffer *out_buf;
GstVideoFrame frame;
guint8 *data;
gint x, y;
static GstAllocationParams params = { 0, 3, 0, 0, };

g_assert (dec->have_title);
g_assert (dec->next_ts <= end_ts);


if (!dec->buf_dirty) {
flow = GST_FLOW_OK;
goto out;
}

out_buf =
gst_buffer_new_allocate (NULL, GST_VIDEO_INFO_SIZE (&dec->info), &params);
gst_video_frame_map (&frame, &dec->info, out_buf, GST_MAP_READWRITE);

data = GST_VIDEO_FRAME_PLANE_DATA (&frame, 0);



for (y = 0; y < dec->in_height; y++) {
guchar *line = data + 4 * dec->in_width * y;

for (x = 0; x < dec->in_width; x++) {
line[0] = 0;              
if (!dec->use_ARGB) {
line[1] = 16;           
line[2] = 128;          
line[3] = 128;          
} else {
line[1] = 0;            
line[2] = 0;            
line[3] = 0;            
}

line += 4;
}
}


if (dec->visible || dec->forced_display) {
gst_dvd_sub_dec_merge_title (dec, &frame);
}

gst_video_frame_unmap (&frame);

dec->buf_dirty = FALSE;

GST_BUFFER_TIMESTAMP (out_buf) = dec->next_ts;
if (GST_CLOCK_TIME_IS_VALID (dec->next_event_ts)) {
GST_BUFFER_DURATION (out_buf) = GST_CLOCK_DIFF (dec->next_ts,
dec->next_event_ts);
} else {
GST_BUFFER_DURATION (out_buf) = GST_CLOCK_TIME_NONE;
}

GST_DEBUG_OBJECT (dec, "Sending subtitle buffer with ts %"
GST_TIME_FORMAT ", dur %" G_GINT64_FORMAT,
GST_TIME_ARGS (GST_BUFFER_TIMESTAMP (out_buf)),
GST_BUFFER_DURATION (out_buf));

flow = gst_pad_push (dec->srcpad, out_buf);

out:
dec->next_ts = end_ts;
return flow;
}
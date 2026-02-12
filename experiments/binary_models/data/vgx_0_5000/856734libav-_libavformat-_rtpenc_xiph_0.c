
*q++ = s->num_frames;

if (s->num_frames > 1)
q = s->buf_ptr; 
AV_WB16(q, size);
q += 2;
memcpy(q, buff, size);
q += size;
s->buf_ptr = q;

return;
} else if (s->num_frames) {


ff_rtp_send_data(s1, s->buf, s->buf_ptr - s->buf, 0);
}

s->timestamp = s->cur_timestamp;
s->num_frames = 0;
s->buf_ptr = q;
while (size > 0) {
int len = (!frag || frag == 3) ? size : max_pkt_size;
q = s->buf_ptr;


*q++ = (frag << 6) | (xdt << 4); 
AV_WB16(q, len);
q += 2;

memcpy(q, buff, len);
q += len;
buff += len;
size -= len;

ff_rtp_send_data(s1, s->buf, q - s->buf, 0);

frag = size <= max_pkt_size ? 3 : 2;
}
}
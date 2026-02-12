static void copy_block(
deflate_state *s,
char    *buf,     
unsigned len,     
int      header   
)
{
bi_windup(s);        
s->last_eob_len = 8; 

if (header) {
put_short(s, (ush)len);
put_short(s, (ush)~len);
s->bits_sent += 2*16;
}
s->bits_sent += (ulg)len<<3;

memcpy(&s->pending_buf[s->pending], buf, len);
s->pending += len;
}
static int decode_registered_user_data_afd(H264SEIAFD *h, GetBitContext *gb, int size)
{
int flag;

if (size-- < 1)
return AVERROR_INVALIDDATA;
skip_bits(gb, 1);               
flag = get_bits(gb, 1);         
skip_bits(gb, 6);               

if (flag) {
if (size-- < 1)
return AVERROR_INVALIDDATA;
skip_bits(gb, 4);           
h->active_format_description = get_bits(gb, 4);
h->present                   = 1;
}

return 0;
}
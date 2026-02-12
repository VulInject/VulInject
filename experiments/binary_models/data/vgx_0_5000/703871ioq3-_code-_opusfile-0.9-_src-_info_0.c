int opus_picture_tag_parse(OpusPictureTag *_pic,const char *_tag){
OpusPictureTag  pic;
unsigned char  *buf;
size_t          base64_sz;
size_t          buf_sz;
size_t          tag_length;
int             ret;
if(opus_tagncompare("METADATA_BLOCK_PICTURE",22,_tag)==0)_tag+=23;

tag_length=strlen(_tag);
if(tag_length&3)return OP_ENOTFORMAT;
base64_sz=tag_length>>2;
buf_sz=3*base64_sz;
if(buf_sz<32)return OP_ENOTFORMAT;
if(_tag[tag_length-1]=='=')buf_sz--;
if(_tag[tag_length-2]=='=')buf_sz--;
if(buf_sz<32)return OP_ENOTFORMAT;

buf=(unsigned char *)_ogg_malloc(sizeof(*buf)*(buf_sz+1));
if(buf==NULL)return OP_EFAULT;
opus_picture_tag_init(&pic);
ret=opus_picture_tag_parse_impl(&pic,_tag,buf,buf_sz,base64_sz);
if(ret<0){
opus_picture_tag_clear(&pic);
_ogg_free(buf);
}
else *_pic=*&pic;
return ret;
}
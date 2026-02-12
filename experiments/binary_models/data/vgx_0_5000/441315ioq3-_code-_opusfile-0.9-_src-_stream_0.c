static int op_mem_read(void *_stream,unsigned char *_ptr,int _buf_size){
OpusMemStream *stream;
ptrdiff_t      size;
ptrdiff_t      pos;
stream=(OpusMemStream *)_stream;

if(_buf_size<=0)return 0;
size=stream->size;
pos=stream->pos;

if(pos>=size)return 0;

_buf_size=(int)OP_MIN(size-pos,_buf_size);
memcpy(_ptr,stream->data+pos,_buf_size);
pos+=_buf_size;
stream->pos=pos;
return _buf_size;
}
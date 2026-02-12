static int op_find_initial_pcm_offset(OggOpusFile *_of,
OggOpusLink *_link,ogg_page *_og){
ogg_page     og;
opus_int64   page_offset;
ogg_int64_t  pcm_start;
ogg_int64_t  prev_packet_gp;
ogg_int64_t  cur_page_gp;
ogg_uint32_t serialno;
opus_int32   total_duration;
int          durations[255];
int          cur_page_eos;
int          op_count;
int          pi;
if(_og==NULL)_og=&og;
serialno=_of->os.serialno;
op_count=0;

total_duration=0;
do{
page_offset=op_get_next_page(_of,_og,_of->end);

if(OP_UNLIKELY(page_offset<0)){

if(page_offset<OP_FALSE)return (int)page_offset;

if(_link->head.pre_skip>0)return OP_EBADTIMESTAMP;
_link->pcm_file_offset=0;

_link->pcm_start=_link->pcm_end=0;
_link->end_offset=_link->data_offset;
return 0;
}

if(OP_UNLIKELY(ogg_page_bos(_og))){
if(_link->head.pre_skip>0)return OP_EBADTIMESTAMP;

_link->pcm_file_offset=0;
_link->pcm_start=_link->pcm_end=0;
_link->end_offset=_link->data_offset;

return 1;
}

if(serialno!=(ogg_uint32_t)ogg_page_serialno(_og))continue;
ogg_stream_pagein(&_of->os,_og);

_of->bytes_tracked+=_og->header_len;

do total_duration=op_collect_audio_packets(_of,durations);

while(OP_UNLIKELY(total_duration<0));
op_count=_of->op_count;
}
while(op_count<=0);

cur_page_gp=_of->op[op_count-1].granulepos;

if(cur_page_gp==-1)return OP_EBADTIMESTAMP;
cur_page_eos=_of->op[op_count-1].e_o_s;
if(OP_LIKELY(!cur_page_eos)){

if(OP_UNLIKELY(op_granpos_add(&pcm_start,cur_page_gp,-total_duration)<0)){

return OP_EBADTIMESTAMP;
}
}
else{

if(OP_LIKELY(op_granpos_add(&pcm_start,cur_page_gp,-total_duration)<0)){

pcm_start=0;

if(OP_UNLIKELY(op_granpos_cmp(cur_page_gp,_link->head.pre_skip)<0)){
return OP_EBADTIMESTAMP;
}
}
}

prev_packet_gp=pcm_start;
for(pi=0;pi<op_count;pi++){
if(cur_page_eos){
ogg_int64_t diff=0;
OP_ALWAYS_TRUE(!op_granpos_diff(&diff,cur_page_gp,prev_packet_gp));
diff=durations[pi]-diff;

if(diff>0){

if(OP_UNLIKELY(diff>durations[pi]))break;
_of->op[pi].granulepos=prev_packet_gp=cur_page_gp;

_of->op[pi].e_o_s=1;
continue;
}
}

OP_ALWAYS_TRUE(!op_granpos_add(&_of->op[pi].granulepos,
prev_packet_gp,durations[pi]));
prev_packet_gp=_of->op[pi].granulepos;
}

_of->op_count=pi;
_of->cur_discard_count=_link->head.pre_skip;
_link->pcm_file_offset=0;
_of->prev_packet_gp=_link->pcm_start=pcm_start;
_of->prev_page_offset=page_offset;
return 0;
}
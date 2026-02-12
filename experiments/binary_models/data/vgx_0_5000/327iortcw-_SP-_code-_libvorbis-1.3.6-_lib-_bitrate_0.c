int vorbis_bitrate_flushpacket(vorbis_dsp_state *vd,ogg_packet *op){
private_state         *b=vd->backend_state;
bitrate_manager_state *bm=&b->bms;
vorbis_block          *vb=bm->vb;
int                    choice=PACKETBLOBS/2;
if(!vb)return 0;

if(op){
vorbis_block_internal *vbi=vb->internal;

if(vorbis_bitrate_managed(vb))
choice=bm->choice;

op->packet=oggpack_get_buffer(vbi->packetblob[choice]);
op->bytes=oggpack_bytes(vbi->packetblob[choice]);
op->b_o_s=0;
op->e_o_s=vb->eofflag;
op->granulepos=vb->granulepos;
op->packetno=vb->sequence; 
}

bm->vb=0;
return(1);
}
static int
dissect_mp2t( tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void* data _U_ )
{
volatile guint        offset = 0;
conversation_t       *conv;
mp2t_stream_key      *stream;
mp2t_analysis_data_t *mp2t_data;
const char           *saved_proto;

conv = find_or_create_conversation(pinfo);
stream = wmem_new(pinfo->pool, mp2t_stream_key);
stream->conv = conv;

if (addresses_equal(&pinfo->src, conversation_key_addr1(conv->key_ptr))) {
stream->dir = P2P_DIR_SENT;
} else if (addresses_equal(&pinfo->dst, conversation_key_addr1(conv->key_ptr))) {
stream->dir = P2P_DIR_RECV;
} else {

stream->dir = P2P_DIR_SENT;
}

p_add_proto_data(pinfo->pool, pinfo, proto_mp2t, MP2T_PROTO_DATA_STREAM, stream);

for (; tvb_reported_length_remaining(tvb, offset) >= MP2T_PACKET_SIZE; offset += MP2T_PACKET_SIZE) {

saved_proto = pinfo->current_proto;
TRY {
mp2t_data = get_mp2t_conversation_data(stream);
dissect_tsp(tvb, offset, pinfo, tree, mp2t_data);
}
CATCH_NONFATAL_ERRORS {
show_exception(tvb, pinfo, tree, EXCEPT_CODE, GET_MESSAGE);


pinfo->current_proto = saved_proto;
}
ENDTRY;
}
return tvb_captured_length(tvb);
}
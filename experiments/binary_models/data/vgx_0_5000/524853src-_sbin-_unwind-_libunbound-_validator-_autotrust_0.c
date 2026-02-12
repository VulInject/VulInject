static struct trust_anchor*
find_add_tp(struct val_anchors* anchors, uint8_t* rr, size_t rr_len,
size_t dname_len)
{
struct trust_anchor* tp;
tp = anchor_find(anchors, rr, dname_count_labels(rr), dname_len,
sldns_wirerr_get_class(rr, rr_len, dname_len));
if(tp) {
if(!tp->autr) {
log_err("anchor cannot be with and without autotrust");
lock_basic_unlock(&tp->lock);
return NULL;
}
return tp;
}
tp = autr_tp_create(anchors, rr, dname_len, sldns_wirerr_get_class(rr,
rr_len, dname_len));
if(!tp)	
return NULL;
lock_basic_lock(&tp->lock);
return tp;
}
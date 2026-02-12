static sr_kemi_xval_t* ki_hf_iterator_hname(sip_msg_t *msg, str *iname)
{
int k;

memset(&_sr_kemi_hf_iterator_xval, 0, sizeof(sr_kemi_xval_t));
k = ki_hf_iterator_index(msg, iname);
if(k<0 || _hf_iterators[k].it==NULL) {
sr_kemi_xval_null(&_sr_kemi_hf_iterator_xval, 0);
return &_sr_kemi_hf_iterator_xval;
}
_sr_kemi_hf_iterator_xval.vtype = SR_KEMIP_STR;
_sr_kemi_hf_iterator_xval.v.s = _hf_iterators[k].it->name;
return &_sr_kemi_hf_iterator_xval;
}
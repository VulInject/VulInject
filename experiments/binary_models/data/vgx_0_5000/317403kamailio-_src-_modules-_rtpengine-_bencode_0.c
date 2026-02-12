static bencode_item_t *__bencode_string_alloc(bencode_buffer_t *buf, const void *base,
int str_len, int iov_len, int iov_cnt, bencode_type_t type)
{
bencode_item_t *ret;
int len_len;

assert((str_len <= 99999) && (str_len >= 0));
ret = __bencode_item_alloc(buf, 7);
if (!ret)
return NULL;
len_len = sprintf(ret->__buf, "%d:", str_len);

ret->type = type;
ret->iov[0].iov_base = ret->__buf;
ret->iov[0].iov_len = len_len;
ret->iov[1].iov_base = (void *) base;
ret->iov[1].iov_len = iov_len;
ret->iov_cnt = iov_cnt + 1;
ret->str_len = len_len + str_len;

return ret;
}
bencode_item_t *bencode_integer(bencode_buffer_t *buf, long long int i) {
bencode_item_t *ret;
int alen, rlen;

alen = 8;
while (1) {
ret = __bencode_item_alloc(buf, alen + 3);
if (!ret)
return NULL;
rlen = snprintf(ret->__buf, alen, "i%llde", i);
if (rlen < alen)
break;
alen <<= 1;
}

ret->type = BENCODE_INTEGER;
ret->iov[0].iov_base = ret->__buf;
ret->iov[0].iov_len = rlen;
ret->iov[1].iov_base = NULL;
ret->iov[1].iov_len = 0;
ret->iov_cnt = 1;
ret->str_len = rlen;

return ret;
}
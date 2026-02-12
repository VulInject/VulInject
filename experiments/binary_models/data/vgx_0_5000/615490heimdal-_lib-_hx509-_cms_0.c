HX509_LIB_FUNCTION int HX509_LIB_CALL
hx509_cms_wrap_ContentInfo(const heim_oid *oid,
const heim_octet_string *buf,
heim_octet_string *res)
{
ContentInfo ci;
size_t size;
int ret;

memset(res, 0, sizeof(*res));
memset(&ci, 0, sizeof(ci));

ret = der_copy_oid(oid, &ci.contentType);
if (ret)
return ret;
if (buf) {
ALLOC(ci.content, 1);
if (ci.content == NULL) {
free_ContentInfo(&ci);
return ENOMEM;
}
ci.content->data = malloc(buf->length);
if (ci.content->data == NULL) {
free_ContentInfo(&ci);
return ENOMEM;
}
memcpy(ci.content->data, buf->data, buf->length);
ci.content->length = buf->length;
}

ASN1_MALLOC_ENCODE(ContentInfo, res->data, res->length, &ci, &size, ret);
free_ContentInfo(&ci);
if (ret)
return ret;
if (res->length != size)
_hx509_abort("internal ASN.1 encoder error");

return 0;
}
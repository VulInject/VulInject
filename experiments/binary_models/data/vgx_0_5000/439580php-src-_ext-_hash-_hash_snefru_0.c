PHP_HASH_API void PHP_SNEFRUUpdate(PHP_SNEFRU_CTX *context, const unsigned char *input, size_t len)
{
if ((MAX32 - context->count[1]) < (len * 8)) {
context->count[0]++;
context->count[1] = MAX32 - context->count[1];
context->count[1] = ((uint32_t) len * 8) - context->count[1];
} else {
context->count[1] += (uint32_t) len * 8;
}

if (context->length + len < 32) {
memcpy(&context->buffer[context->length], input, len);
context->length += (unsigned char)len;
} else {
size_t i = 0, r = (context->length + len) % 32;

if (context->length) {
i = 32 - context->length;
memcpy(&context->buffer[context->length], input, i);
SnefruTransform(context, context->buffer);
}

for (; i + 32 <= len; i += 32) {
SnefruTransform(context, input + i);
}

memcpy(context->buffer, input + i, r);
ZEND_SECURE_ZERO(&context->buffer[r], 32 - r);
context->length = (unsigned char)r;
}
}
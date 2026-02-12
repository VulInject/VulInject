static void decode_block(BigInt *b, char *bitmap, int w, int h, int level)
{
switch (pop_integer(b, &ff_xface_probranges_per_level[level][0])) {
case XFACE_COLOR_WHITE:
return;
case XFACE_COLOR_BLACK:
pop_greys(b, bitmap, w, h);
return;
default:
w /= 2;
h /= 2;
level++;
decode_block(b, bitmap,                       w, h, level);
decode_block(b, bitmap + w,                   w, h, level);
decode_block(b, bitmap + h * XFACE_WIDTH,     w, h, level);
decode_block(b, bitmap + w + h * XFACE_WIDTH, w, h, level);
return;
}
}

typedef struct XFaceContext {
uint8_t bitmap[XFACE_PIXELS]; 

} XFaceContext;
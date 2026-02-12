static JSValue js_file_read(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv)
{
const u8 *data;
size_t size;
u32 read;
s32 nb_bytes=0;
FILE *f = JS_GetOpaque(this_val, file_class_id);
if (!f) return GF_JS_EXCEPTION(ctx);
if (!argc) return GF_JS_EXCEPTION(ctx);

data = JS_GetArrayBuffer(ctx, &size, argv[0]);
if (!data) return GF_JS_EXCEPTION(ctx);
if (argc>1) {
if (JS_ToInt32(ctx, &nb_bytes, argv[1])) return GF_JS_EXCEPTION(ctx);
}
if (!nb_bytes) nb_bytes = (s32) size;
else if (nb_bytes > (s32) size) nb_bytes = (s32) size;

read = (u32) gf_fread((void *) data, nb_bytes, f);
return JS_NewInt64(ctx, read);
}
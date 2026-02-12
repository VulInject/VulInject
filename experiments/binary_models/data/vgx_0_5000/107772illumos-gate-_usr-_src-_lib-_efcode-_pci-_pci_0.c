static void
do_encode_unit(fcode_env_t *env)
{
char enc_buf[64];
uint32_t hi;
int dev, fn;

CHECK_DEPTH(env, 3, "pci:encode-unit");
hi = POP(DS);
(void) POP(DS);
(void) POP(DS);

fn  = ((hi >> 8) & 0x7);
dev = ((hi >> 11) & 0x1f);

if (fn) {
(void) sprintf(enc_buf, "%x,%x", dev, fn);
} else {
(void) sprintf(enc_buf, "%x", dev);
}
debug_msg(DEBUG_REG_ACCESS, "pci:encode-unit ( %x ) -> %s\n",
hi, enc_buf);
push_a_string(env, STRDUP(enc_buf));
}
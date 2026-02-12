}
NOKPROBE_SYMBOL(optimized_callback);

static int copy_optimized_instructions(u8 *dest, u8 *src, u8 *real)
{
struct insn insn;
int len = 0, ret;

while (len < JMP32_INSN_SIZE) {
ret = __copy_instruction(dest + len, src + len, real + len, &insn);
if (!ret || !can_boost(&insn, src + len))
return -EINVAL;
len += ret;
}

if (ftrace_text_reserved(src, src + len - 1) ||
alternatives_text_reserved(src, src + len - 1) ||
jump_label_text_reserved(src, src + len - 1) ||
static_call_text_reserved(src, src + len - 1))
return -EBUSY;

return len;
}
static enum VAR1 FUN1(probes_opcode_t VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
int VAR7 = (VAR2 >> 12) & 0xf;
FUN2(VAR2, VAR4, VAR6);
VAR4->VAR8 |= 1 << (VAR7 + 1);
return VAR9;
}
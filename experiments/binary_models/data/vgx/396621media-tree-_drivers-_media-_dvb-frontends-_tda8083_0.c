static int FUN1(struct VAR1 *VAR2,
enum fe_sec_tone_mode VAR3)
{
FUN2 (VAR2, 0x26, 0xf1);

switch (VAR3) {
case VAR4:
return FUN2 (VAR2, 0x29, 0x00);
case VAR5:
return FUN2 (VAR2, 0x29, 0x80);
default:
return -VAR6;
}
}
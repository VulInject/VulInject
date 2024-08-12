static int
FUN1(
struct VAR1	*VAR2,
struct VAR3	*VAR4)
{
if (VAR2->VAR5 != 1 + 3 + 6 + 2) {
FUN2("",
VAR6, VAR2->VAR5, 1 + 3 + 6 + 2);
return -1;
}
if (VAR2->VAR7[0] & 0x80) {
VAR4->VAR8 = 1;
VAR4->VAR9 = (VAR2->VAR7[1] << 16) |
(VAR2->VAR7[2] << 8) |
VAR2->VAR7[3];
}
if (VAR2->VAR7[0] & 0x40) {
VAR4->VAR10  = 1;
VAR4->VAR11 = ((VAR2->VAR7[10] & 0x0f) << 8) | VAR2->VAR7[11];
}
memcpy(VAR4->VAR12, VAR2->VAR7 + 4, 6);
return 0;
}
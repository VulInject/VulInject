static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;

u16 VAR8;
if (FUN2(VAR6, 0xE4) & 0x02) {

VAR8 = (FUN2(VAR6, 0xDE) & 0x7F) << 7
| (FUN2(VAR6, 0xDF) & 0x7F);
} else {

VAR8 = (FUN2(VAR6, 0xDE) & 0x7F) << 8
| FUN2(VAR6, 0xDF);
}
*VAR4 = ~VAR8;

return 0;
}
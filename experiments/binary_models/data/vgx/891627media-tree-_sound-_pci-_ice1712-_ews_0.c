static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7 = VAR2->VAR8 & 0xff;
int VAR9 = (VAR2->VAR8 >> 8) & 1;
int VAR10, VAR11;

if ((VAR10 = FUN3(VAR6, VAR12)) < 0)
return VAR10;
VAR11 = VAR10 & ~(1 << VAR7);
if (VAR4->VAR13.VAR14.VAR13[0])
VAR11 |= (1 << VAR7);
if (VAR9)
VAR11 ^= (1 << VAR7);
if (VAR10 != VAR11) {
FUN4(VAR6, VAR12, (unsigned char)VAR11);
return 1;
}
return 0;
}
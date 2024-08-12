static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = (VAR6 *)VAR4->VAR8;
int VAR9 = 0;
unsigned short VAR10;

if (VAR4->VAR9 < 2)
return VAR9;

if ((VAR10 = FUN2(*VAR7)) & 0x8000) {
FUN3(VAR4, 2);
VAR7++;
VAR9 += 2;
if ((VAR10 & 0x4000) == 0) {
if (VAR5)
VAR10 ^= 0x2000;
FUN4(VAR2, VAR4, VAR10);
}
}

if (VAR4->VAR9 < 2)
return VAR9;

if ((VAR10 = FUN2(*VAR7)) & 0x8000) {
FUN3(VAR4, 2);
VAR9 += 2;
if ((VAR10 & 0x4000) == 0) {
if (VAR5)
VAR10 ^= 0x2000;
FUN4(VAR2, VAR4, VAR10);
}
}

return VAR9;
}
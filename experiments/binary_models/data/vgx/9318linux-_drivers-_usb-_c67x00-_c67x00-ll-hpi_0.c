void FUN1(struct VAR1 *VAR2, u16 VAR3,
void *VAR4, int VAR5)
{
VAR6 *VAR7 = VAR4;


if (VAR3 + VAR5 > 0xffff) {
FUN2(&VAR2->VAR8->VAR2,
"");
return;
}

if (VAR3 & 0x01) {

u16 VAR9;
VAR9 = FUN3(VAR2, VAR3 - 1);
VAR9 = (VAR9 & 0x00ff) | (*VAR7++ << 8);
FUN4(VAR2, VAR3 - 1, VAR9);
VAR3++;
VAR5--;
}

FUN5(VAR2, VAR3, (VAR10 *)VAR7, VAR5 / 2);
VAR7 += VAR5 & ~0x01;
VAR3 += VAR5 & ~0x01;
VAR5 &= 0x01;

if (VAR5) {
u16 VAR9;
VAR9 = FUN3(VAR2, VAR3);
VAR9 = (VAR9 & 0xff00) | *VAR7;
FUN4(VAR2, VAR3, VAR9);
}
}
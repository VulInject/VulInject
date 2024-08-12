static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
int VAR5;
s32 VAR6;

VAR6 = FUN2(VAR4, VAR7);
if (VAR6 < 0)
return VAR6;


if ((VAR6 & 0xFF) != 0x81)
return -VAR8;


VAR2->VAR9[VAR10] = VAR11 |
VAR12 | VAR13;
VAR2->VAR14 = VAR15;


for (VAR5 = 0; VAR5 < VAR16; VAR5++) {
VAR6 = FUN3(VAR4, VAR17[VAR5],
VAR2->VAR9[VAR5]);
if (VAR6 < 0)
return VAR6;
}

return 0;
}
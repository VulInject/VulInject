static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5* VAR6 = VAR2->VAR7;
int VAR8;
s8 VAR9 = 0;

VAR8 = FUN2(VAR6, 0x11);
VAR9 = FUN2(VAR6, 0x19);
if (VAR10) {

FUN3(VAR8 & 2 ? "" :
"",
VAR6->VAR11.VAR12->VAR13, VAR9,
-((VAR14)VAR4->VAR15 * VAR9) >> 10);
}

VAR4->VAR16 = ((VAR6->VAR17 & 0x20) == 0x20) ^ (VAR6->VAR18->VAR19 != 0) ? VAR20 : VAR21;
VAR4->VAR22 = ((VAR6->VAR17 >> 2) & 7) + VAR23;

VAR4->VAR24 = VAR25;
VAR4->VAR26 = ((VAR4->VAR26 + 31250) / 62500) * 62500;

if (VAR8 & 2)
VAR4->VAR26 -= ((VAR14)VAR4->VAR15 * VAR9) >> 10;

return 0;
}
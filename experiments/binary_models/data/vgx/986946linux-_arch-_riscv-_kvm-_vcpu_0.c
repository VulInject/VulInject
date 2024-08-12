static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7.VAR8;
unsigned long VAR9 *VAR10 =
(unsigned long VAR9 *)(unsigned long)VAR4->VAR11;
unsigned long VAR12 = VAR4->VAR13 & ~(VAR14 |
VAR15 |
VAR16);
unsigned long VAR17;

if (FUN2(VAR4->VAR13) != sizeof(unsigned long))
return -VAR18;
if (VAR12 >= sizeof(struct VAR19) / sizeof(unsigned long))
return -VAR18;

if (VAR12 == FUN3(VAR20.VAR21))
VAR17 = VAR6->VAR22;
else if (FUN3(VAR20.VAR21) < VAR12 &&
VAR12 <= FUN3(VAR20.VAR23))
VAR17 = ((unsigned long *)VAR6)[VAR12];
else if (VAR12 == FUN3(VAR24))
VAR17 = (VAR6->VAR25 & VAR26) ?
VAR27 : VAR28;
else
return -VAR18;

if (FUN4(VAR10, &VAR17, FUN2(VAR4->VAR13)))
return -VAR29;

return 0;
}
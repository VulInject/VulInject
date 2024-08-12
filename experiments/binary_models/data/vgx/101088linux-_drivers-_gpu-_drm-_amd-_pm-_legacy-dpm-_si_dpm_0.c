static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
const struct VAR3 *VAR5 = VAR4;
u32 VAR6 = 0, VAR7;

if (!VAR5)
return -VAR8;

while (VAR5->VAR7 != 0xFFFFFFFF) {
switch (VAR5->VAR9) {
case VAR10:
VAR7 = VAR11 + VAR5->VAR7;
if (VAR7 < VAR12)
VAR6 = FUN2(VAR7);
break;
default:
VAR6 = FUN3(VAR5->VAR7);
break;
}

VAR6 &= ~VAR5->VAR13;
VAR6 |= ((VAR5->VAR14 << VAR5->VAR15) & VAR5->VAR13);

switch (VAR5->VAR9) {
case VAR10:
VAR7 = VAR11 + VAR5->VAR7;
if (VAR7 < VAR12)
FUN4(VAR7, VAR6);
break;
default:
FUN5(VAR5->VAR7, VAR6);
break;
}
VAR5++;
}
return 0;
}
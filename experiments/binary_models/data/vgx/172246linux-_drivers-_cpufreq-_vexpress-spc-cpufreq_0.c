static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
u32 VAR4 = VAR2->VAR4, VAR5, VAR6, VAR7;
unsigned int VAR8;

VAR5 = FUN2(VAR4);
VAR6 = VAR7 = FUN3(VAR9, VAR4);

VAR8 = VAR10[VAR5][VAR3].VAR11;

if (FUN4()) {
if (VAR7 == VAR12 && VAR8 < VAR13)
VAR6 = VAR14;
else if (VAR7 == VAR14 &&
VAR8 > VAR15)
VAR6 = VAR12;
}

return FUN5(VAR4, VAR7, VAR6,
VAR8);
}
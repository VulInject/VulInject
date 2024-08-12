static unsigned long FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = &VAR5->VAR7;
void VAR8 *VAR9 = VAR5->VAR10 + VAR7->VAR11;
unsigned int VAR12;
unsigned long VAR13;

if (!(FUN3(VAR9) & FUN4(3))) {
VAR12 = VAR7->VAR14;
} else {
VAR12 = FUN3(VAR9) >> VAR7->VAR15;
VAR12 &= FUN5(VAR7->VAR16);
}

VAR13 = FUN6(VAR2, VAR3, VAR12, VAR7->VAR17,
VAR7->VAR18, VAR7->VAR16);

return VAR13;
}
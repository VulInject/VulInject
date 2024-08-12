static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u32 VAR5, VAR6, VAR7;
int VAR8;

if (VAR4->VAR9 > 0) {
VAR5 = VAR4->VAR10.VAR11;
VAR6 = VAR4->VAR9;
} else {
VAR5 = VAR4->VAR12;
VAR6 = VAR4->VAR13;
}

VAR8 = FUN3(VAR2->VAR14, VAR5, &VAR7);
if (VAR8 != 0) {
FUN4(&VAR2->VAR15, "", VAR8);
return VAR8;
}

return (VAR7 & VAR6) ? VAR16 : VAR17;
}
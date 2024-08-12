int FUN1(struct VAR1 *VAR2, uint32_t VAR3,
VAR4 *VAR5, bool VAR6)
{
int VAR7;

if (VAR3 > VAR2->VAR8) {
FUN2("",
VAR2->VAR9, VAR3, VAR2->VAR8);
return -VAR10;
}

if (!VAR5) {

VAR7 = FUN3(VAR2, VAR3) ? 0 : -VAR11;
} else {
unsigned long VAR12 = FUN4(VAR5);

if (VAR6)
VAR7 = FUN5(VAR2->VAR13,
FUN3(VAR2, VAR3),
VAR12);
else
VAR7 = FUN6(VAR2->VAR13,
FUN3(VAR2, VAR3),
VAR12);

if (VAR7 == 0) {
FUN7("",
VAR3, VAR2->VAR14);
VAR7 = -VAR15;
} else if (VAR7 != -VAR16) {
VAR7 = 0;
}
}

return VAR7;
}
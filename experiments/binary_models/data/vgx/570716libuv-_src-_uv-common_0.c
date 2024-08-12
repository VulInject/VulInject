int FUN1(VAR1* VAR2,
const struct VAR3* VAR4,
unsigned int VAR5) {
unsigned int VAR6;

if (VAR2->VAR7 != VAR8)
return VAR9;
if (FUN2(VAR2)) {
return VAR9;
}
if (VAR4->VAR10 == VAR11)
VAR6 = sizeof(struct VAR12);
else if (VAR4->VAR10 == VAR13)
VAR6 = sizeof(struct VAR14);
else
return VAR9;

return FUN3(VAR2, VAR4, VAR6, VAR5);
}
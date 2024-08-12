void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
unsigned int VAR5,
const void *VAR6, ssize_t VAR7)
{
bool VAR8 = true;
struct VAR9 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = FUN3(VAR9);
struct VAR12 *VAR13 = FUN4(VAR2);

switch (VAR5) {
case VAR14:
if (VAR13->VAR15 == VAR16)
VAR8 = FUN5(&VAR9->VAR17,
VAR6, VAR7);
else
VAR8 = FUN6(&VAR9->VAR17,
VAR6, VAR7);
break;
case VAR18:
FUN7(&VAR11->VAR19, "");

FUN8(VAR2, VAR4, VAR5, VAR6, VAR7);
break;
default:
return;
}

if (!VAR8) {
FUN9(&VAR11->VAR19, "");
return;
}
}
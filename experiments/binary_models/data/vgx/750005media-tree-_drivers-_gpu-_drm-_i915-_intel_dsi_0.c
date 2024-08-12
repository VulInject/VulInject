static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
uint64_t VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10;
int VAR11;

VAR11 = FUN3(&VAR2->VAR12, VAR4, VAR5);
if (VAR11)
return VAR11;

if (VAR4 == VAR7->VAR13.VAR14) {
if (VAR5 == VAR15) {
FUN4("");
return -VAR16;
}
if (FUN5(FUN6(VAR7)) &&
VAR5 == VAR17) {
FUN4("");
return -VAR16;
}

if (VAR8->VAR18.VAR19 == VAR5)
return 0;

VAR8->VAR18.VAR19 = VAR5;
}

VAR10 = VAR2->VAR20->VAR10;
if (VAR10 && VAR10->VAR20->VAR21) {

FUN7(VAR10);
}

return 0;
}
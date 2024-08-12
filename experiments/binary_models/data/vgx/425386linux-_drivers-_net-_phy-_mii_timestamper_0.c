}
FUN1(VAR1);


struct VAR2 *FUN2(struct VAR3 *VAR4,
unsigned int VAR5)
{
struct VAR2 *VAR6 = NULL;
struct VAR7 *VAR8;
struct VAR9 *this;

FUN3(&VAR10);
FUN4(this, &VAR11) {
VAR8 = FUN5(this, struct VAR7, VAR12);
if (VAR8->VAR13->VAR14 == VAR4) {
VAR6 = VAR8->VAR15->FUN6(VAR8->VAR13, VAR5);
if (!FUN7(VAR6)) {
VAR6->VAR13 = VAR8->VAR13;
FUN8(VAR8->VAR13);
}
break;
}
}
FUN9(&VAR10);

return VAR6 ? VAR6 : FUN10(-VAR16);
}
struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4)
{
struct VAR1 *VAR5;
int VAR6;

VAR5 = FUN2(VAR3, VAR4, false);
if (FUN3(VAR5))
return VAR5;


FUN4(VAR3, &VAR5->VAR7);

VAR6 = FUN5(VAR5);
if (VAR6) {
FUN6(VAR5);
return FUN7(-VAR8);
}

return VAR5;
}
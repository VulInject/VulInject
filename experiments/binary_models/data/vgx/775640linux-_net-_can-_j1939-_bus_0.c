struct VAR1 *FUN1(struct VAR2 *VAR3, name_t VAR4)
{
struct VAR1 *VAR5;

FUN2(&VAR3->VAR6);

VAR5 = FUN3(sizeof(*VAR5), FUN4());
if (!VAR5)
return FUN5(-VAR7);
FUN6(&VAR5->VAR8);
VAR5->VAR9 = VAR10;
VAR5->VAR4 = VAR4;

FUN7(&VAR5->VAR11, VAR12, VAR13);
VAR5->VAR11.VAR14 = VAR15;
FUN8(&VAR5->VAR16);

FUN9(VAR3);
VAR5->VAR3 = VAR3;
FUN10(&VAR5->VAR16, &VAR3->VAR17);

return VAR5;
}
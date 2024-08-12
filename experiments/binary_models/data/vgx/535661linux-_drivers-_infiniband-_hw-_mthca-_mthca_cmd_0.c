struct VAR1 *FUN1(struct VAR2 *VAR3,
gfp_t VAR4)
{
struct VAR1 *VAR5;

VAR5 = FUN2(sizeof *VAR5, VAR4);
if (!VAR5)
return FUN3(-VAR6);

VAR5->VAR7 = FUN4(VAR3->VAR8.VAR9, VAR4, &VAR5->VAR10);
if (!VAR5->VAR7) {
FUN5(VAR5);
return FUN3(-VAR6);
}

return VAR5;
}
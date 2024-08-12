struct VAR1 *FUN1(int VAR2, int VAR3,
gfp_t VAR4)
{
struct VAR1 *VAR5;
int VAR6 = sizeof(struct VAR7);

VAR5 = FUN2(sizeof(*VAR5), VAR4, VAR2);
if (!VAR5)
goto VAR8;

FUN3(&VAR5->VAR9);

VAR6 = FUN4(VAR6 + VAR3, FUN5());
VAR5->VAR10 = FUN2(VAR6, VAR4, VAR2);
if (!VAR5->VAR10)
goto VAR11;

FUN6(&VAR5->VAR12[0]);
FUN6(&VAR5->VAR12[1]);
FUN6(&VAR5->VAR13);

return VAR5;

VAR11:
FUN7(VAR5);
VAR8:
return NULL;
}
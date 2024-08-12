struct VAR1 *FUN1(struct VAR2 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

VAR4 = FUN2(sizeof(*VAR4), VAR6);
if (!VAR4)
return FUN3(-VAR7);

VAR4->VAR8.VAR2 = VAR2;

VAR5 = FUN4(VAR2);
if (VAR5)
goto VAR9;

FUN5(&VAR4->VAR10, 0);
FUN6(&VAR4->VAR11);
return &VAR4->VAR8;

VAR9:
FUN7(VAR4);
return FUN3(VAR5);
}
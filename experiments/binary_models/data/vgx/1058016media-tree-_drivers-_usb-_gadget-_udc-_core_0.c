static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;

FUN2(&VAR2->VAR6, "",
VAR4->VAR7);

VAR2->VAR4 = VAR4;
VAR2->VAR6.VAR4 = &VAR4->VAR4;
VAR2->VAR8->VAR6.VAR4 = &VAR4->VAR4;

VAR5 = VAR4->FUN3(VAR2->VAR8, VAR4);
if (VAR5)
goto VAR9;
VAR5 = FUN4(VAR2);
if (VAR5) {
VAR4->FUN5(VAR2->VAR8);
goto VAR9;
}
FUN6(VAR2);

FUN7(&VAR2->VAR6.VAR10, VAR11);
return 0;
VAR9:
if (VAR5 != -VAR12)
FUN8(&VAR2->VAR6, "",
VAR2->VAR4->VAR7, VAR5);
VAR2->VAR4 = NULL;
VAR2->VAR6.VAR4 = NULL;
VAR2->VAR8->VAR6.VAR4 = NULL;
return VAR5;
}
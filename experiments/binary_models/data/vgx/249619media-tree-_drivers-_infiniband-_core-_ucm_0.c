static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4;

VAR4 = FUN2(sizeof *VAR4, VAR5);
if (!VAR4)
return NULL;

FUN3(&VAR4->VAR6, 1);
FUN4(&VAR4->VAR7);
VAR4->VAR3 = VAR3;
FUN5(&VAR4->VAR8);

FUN6(&VAR9);
VAR4->VAR10 = FUN7(&VAR11, VAR4, 0, 0, VAR5);
FUN8(&VAR9);
if (VAR4->VAR10 < 0)
goto VAR12;

FUN9(&VAR4->VAR13, &VAR3->VAR14);
return VAR4;

VAR12:
FUN10(VAR4);
return NULL;
}
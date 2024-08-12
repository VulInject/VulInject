static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR1 *VAR6;

FUN2(VAR5->VAR7);
VAR6 = FUN3(VAR3, VAR5);
if (VAR6 == NULL || VAR6->VAR8.VAR9 == NULL)
goto VAR10;

if (!FUN4(VAR6->VAR8.VAR9->VAR11)) {
FUN5(VAR6);
goto VAR10;
}
return VAR6;

VAR10:
VAR6 = NULL;
return VAR6;
}
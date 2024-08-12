static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR3 *VAR5, int VAR6, const char **VAR7)
{
if(!FUN2(VAR5))
{
FUN3(VAR5, FUN4(VAR8),
VAR9.VAR10, VAR5->VAR10, "");
return;
}

if(VAR6 > 1)
{
FUN5(VAR5, VAR7[1], VAR11, VAR12,
"", VAR7[1]);
if(FUN6(VAR7[1], VAR9.VAR10) == 0)
return;
}

FUN7(VAR5);
}
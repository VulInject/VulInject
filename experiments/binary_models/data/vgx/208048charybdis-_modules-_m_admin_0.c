static void
FUN1(struct VAR1 *VAR2)
{
if(FUN2(VAR2))
FUN3(VAR2);

FUN4(VAR2, VAR3, FUN5(VAR3), VAR4.VAR5);
if(VAR6.VAR5 != NULL)
FUN4(VAR2, VAR7, FUN5(VAR7), VAR6.VAR5);
if(VAR6.VAR8 != NULL)
FUN4(VAR2, VAR9, FUN5(VAR9), VAR6.VAR8);
if(VAR6.VAR10 != NULL)
FUN4(VAR2, VAR11, FUN5(VAR11), VAR6.VAR10);
}
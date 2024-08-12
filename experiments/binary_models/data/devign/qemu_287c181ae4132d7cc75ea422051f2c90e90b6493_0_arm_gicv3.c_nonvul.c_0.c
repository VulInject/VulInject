static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR3 *VAR9 = NULL;
    VAR8->FUN4(VAR2, &VAR9);
    if (VAR9)
    {
        FUN5(VAR4, VAR9);
        return;
    }
    FUN6(VAR6, VAR10, VAR11);
}
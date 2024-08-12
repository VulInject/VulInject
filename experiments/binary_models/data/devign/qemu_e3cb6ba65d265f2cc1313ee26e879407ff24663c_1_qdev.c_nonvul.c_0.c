static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR5;
    VAR7 *VAR11 = NULL;
    char *VAR12 = NULL;
    int VAR13;
    if (VAR2->VAR14 != VAR15)
    {
        FUN2(VAR8, VAR16);
        return;
    }
    FUN3(VAR4, &VAR12, VAR6, &VAR11);
    if (VAR11)
    {
        FUN4(VAR8, VAR11);
        return;
    }
    VAR13 = VAR10->VAR17->FUN5(VAR2, VAR10, VAR12);
    if (VAR13 != 0)
    {
        FUN2(VAR8, VAR18, VAR6, VAR10->VAR17->VAR6);
    }
    FUN6(VAR12);
}
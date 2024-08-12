static void FUN1(VAR1 *VAR2, const char *VAR3, VAR1 *VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7 = NULL;
    if (FUN2(FUN3(VAR4)))
    {
        char *VAR8 = FUN4(VAR4);
        FUN5(&VAR7, "", VAR8);
        FUN6(VAR8);
    }
    else
    {
        FUN7(VAR2, VAR3, VAR4, &VAR7);
    }
    FUN8(VAR6, VAR7);
}
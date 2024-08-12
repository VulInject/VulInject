static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    const char *VAR7 = FUN2(VAR4, "");
    FUN3(VAR7, &VAR6);
    if (VAR6)
    {
        FUN4(VAR2, "", FUN5(VAR6));
        FUN6(VAR6);
    }
    else
    {
        FUN4(VAR2, "", VAR7);
    }
}
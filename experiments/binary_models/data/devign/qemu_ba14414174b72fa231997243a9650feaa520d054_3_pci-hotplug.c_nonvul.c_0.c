void FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = NULL;
    const char *VAR9 = FUN2(VAR4, "");
    const char *VAR10 = FUN2(VAR4, "");
    const char *VAR11 = FUN3(VAR4, "");
    if (!FUN4(VAR9, "", 9))
    {
        VAR9 += 9;
    }
    if (!VAR11)
    {
        VAR11 = "";
    }
    if (!strcmp(VAR9, ""))
        VAR9 = NULL;
    if (strcmp(VAR10, "") == 0)
        VAR8 = FUN5(VAR2, VAR9, VAR11);
    else if (strcmp(VAR10, "") == 0)
        VAR8 = FUN6(VAR2, VAR9, VAR11);
    else
        FUN7(VAR2, "", VAR10);
    if (VAR8)
    {
        *VAR6 = FUN8(""
                                       "",
                                       FUN9(VAR8->VAR12), FUN10(VAR8->VAR13), FUN11(VAR8->VAR13));
    }
    else
        FUN7(VAR2, "", VAR11);
}
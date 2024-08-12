static int FUN1(char *VAR1, int VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8;
    if (VAR9)
    {
        FUN2("");
        FUN3(VAR4);
        return 1;
    }
    VAR9 = FUN4(VAR1, NULL, VAR4, VAR2, &VAR6);
    if (!VAR9)
    {
        FUN5(VAR6, "", VAR1 ? "" : "", VAR1 ?: "");
        return 1;
    }
    VAR8 = FUN6(VAR9);
    if (FUN7(VAR8) && FUN8(VAR8))
    {
        char VAR10[256];
        FUN9("", VAR1);
        if (FUN10(VAR10, sizeof(VAR10)) < 0)
        {
            FUN2("");
            goto VAR11;
        }
        if (FUN11(VAR8, VAR10) < 0)
        {
            FUN2("");
            goto VAR11;
        }
    }
    return 0;
VAR11:
    FUN12(VAR9);
    VAR9 = NULL;
    return 1;
}
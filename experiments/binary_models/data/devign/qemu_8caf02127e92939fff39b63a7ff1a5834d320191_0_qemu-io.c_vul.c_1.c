static int FUN1(char *VAR1, int VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    if (VAR7)
    {
        fprintf(VAR8, "");
        FUN2(VAR4);
        return 1;
    }
    VAR7 = FUN3("", VAR1, NULL, VAR4, VAR2, &VAR6);
    if (!VAR7)
    {
        fprintf(VAR8, "", VAR9, VAR1 ? "" : "", VAR1 ?: "", FUN4(VAR6));
        FUN5(VAR6);
        return 1;
    }
    VAR10 = FUN6(VAR7);
    if (FUN7(VAR10))
    {
        char VAR11[256];
        FUN8("", VAR1);
        if (FUN9(VAR11, sizeof(VAR11)) < 0)
        {
            FUN10("");
            goto VAR12;
        }
        if (FUN11(VAR10, VAR11) < 0)
        {
            FUN10("");
            goto VAR12;
        }
    }
    return 0;
VAR12:
    FUN12(VAR7);
    VAR7 = NULL;
    return 1;
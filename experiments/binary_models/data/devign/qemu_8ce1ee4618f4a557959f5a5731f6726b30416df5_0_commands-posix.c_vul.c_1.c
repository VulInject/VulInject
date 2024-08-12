VAR1 *FUN1(VAR2 **VAR3)
{
    VAR2 *VAR4 = NULL;
    char *VAR5;
    int VAR6;
    char *VAR7;
    VAR1 *VAR8;
    VAR5 = FUN2("");
    VAR6 = open(VAR5, VAR9 | VAR10);
    if (VAR6 == -1)
    {
        FUN3(VAR3, VAR11, ""%VAR12\"", VAR5);
        FUN4(VAR5);
        return NULL;
    }
    FUN4(VAR5);
    VAR7 = FUN5(20);
    FUN6(VAR6, "", VAR7, 20, &VAR4);
    if (VAR4)
    {
        FUN4(VAR7);
        FUN7(VAR3, VAR4);
        return NULL;
    }
    VAR8 = FUN8(VAR1, 1);
    VAR8->VAR13 = FUN9(VAR7, NULL, 16);
    FUN4(VAR7);
    return VAR8;
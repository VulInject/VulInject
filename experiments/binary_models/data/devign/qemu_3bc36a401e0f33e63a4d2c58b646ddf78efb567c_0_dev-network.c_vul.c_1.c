static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR1 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR9 = FUN2(FUN3(""), VAR4, 0);
    if (!VAR9)
    {
        return NULL;
    }
    FUN4(VAR9, "", "");
    FUN4(VAR9, "", "");
    VAR10 = FUN5(VAR9, 0, &VAR6);
    if (VAR6)
    {
        FUN6("", FUN7(VAR6));
        FUN8(VAR6);
        return NULL;
    }
    VAR7 = FUN9(VAR3, "");
    FUN10(&VAR7->VAR11, &VAR12[VAR10]);
    FUN11(&VAR7->VAR11);
    return VAR7;
}
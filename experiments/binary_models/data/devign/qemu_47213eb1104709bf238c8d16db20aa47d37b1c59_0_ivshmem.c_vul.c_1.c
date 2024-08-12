static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    int VAR9 = FUN3(VAR5);
    VAR1 *VAR10;
    VAR3->VAR11[VAR6].VAR8 = VAR8;
    VAR10 = FUN4(VAR9);
    if (VAR10 == NULL)
    {
        FUN5("", VAR9);
        return NULL;
    }
    FUN6(VAR10);
    if (FUN7(VAR3, VAR12))
    {
        VAR3->VAR11[VAR6].VAR8 = FUN2(VAR3);
        FUN8(VAR10, VAR13, VAR14, VAR15, &VAR3->VAR11[VAR6]);
    }
    else
    {
        FUN8(VAR10, VAR13, VAR16, VAR15, VAR3);
    }
    return VAR10;
}
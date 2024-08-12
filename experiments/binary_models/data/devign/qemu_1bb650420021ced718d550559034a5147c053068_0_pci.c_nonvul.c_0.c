VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    const char *VAR6 = VAR3->VAR6 ? VAR3->VAR6 : VAR5;
    VAR7 *VAR8;
    int VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12;
    int VAR13;
    VAR13 = FUN2(VAR3, VAR14, VAR4);
    if (VAR13 < 0)
        return NULL;
    VAR8 = FUN3(&VAR9, VAR6);
    if (!VAR8)
    {
        FUN4("", VAR6, VAR15[VAR13]);
        return NULL;
    }
    VAR10 = FUN5(VAR8, VAR9, VAR15[VAR13]);
    VAR12 = &VAR10->VAR16;
    FUN6(VAR12, VAR3);
    if (FUN7(VAR12) < 0)
        return NULL;
    return VAR10;
}
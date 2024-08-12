static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    char *export = NULL;
    int VAR11, VAR12;
    VAR6 *VAR13 = NULL;
    FUN2(VAR9, VAR4, &export, &VAR13);
    if (VAR13)
    {
        FUN3(VAR7, VAR13);
        return -VAR14;
    }
    VAR12 = FUN4(VAR2, VAR7);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR11 = FUN5(VAR2, VAR12, export, VAR7);
    return VAR11;
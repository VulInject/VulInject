static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    int VAR7;
    off_t VAR8;
    size_t VAR9;
    if (VAR4->VAR10[0] == '')
    {
        VAR6 = FUN2(VAR4->VAR10);
    }
    else
    {
        VAR6 = FUN3(VAR4->VAR10);
    }
    if (VAR6 < 0)
    {
        FUN4("");
        return -VAR11;
    }
    VAR7 = FUN5(VAR6, VAR4->VAR12, &VAR4->VAR13, &VAR8, &VAR9);
    if (VAR7 < 0)
    {
        FUN4("");
        FUN6(VAR6);
        return VAR7;
    }
    FUN7(VAR6);
    FUN8(VAR4->VAR6, VAR14, NULL, VAR15, NULL, VAR4);
    VAR4->VAR6 = VAR6;
    VAR4->VAR8 = VAR8;
    VAR4->VAR9 = VAR9;
    FUN4("");
    return 0;
}
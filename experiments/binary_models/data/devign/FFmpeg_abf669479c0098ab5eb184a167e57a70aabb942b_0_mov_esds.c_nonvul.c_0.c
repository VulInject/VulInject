int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8 = 0;
    if (VAR2->VAR9 < 1)
        return 0;
    VAR6 = VAR2->VAR10[VAR2->VAR9 - 1];
    FUN2(VAR4);
    FUN3(VAR2, VAR4, &VAR7);
    if (VAR7 == VAR11)
    {
        FUN4(VAR4, NULL);
    }
    else
        FUN5(VAR4);
    FUN3(VAR2, VAR4, &VAR7);
    if (VAR7 == VAR12)
        VAR8 = FUN6(VAR2, VAR6, VAR4);
    return VAR8;
}
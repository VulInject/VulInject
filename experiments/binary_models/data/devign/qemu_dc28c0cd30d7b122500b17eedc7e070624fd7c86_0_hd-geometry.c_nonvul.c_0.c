void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    FUN2(VAR2, &VAR6, &VAR7, &VAR8);
    VAR9 = FUN3(VAR2);
    if (VAR6 != 0)
    {
        *VAR3 = VAR6;
        *VAR4 = VAR7;
        *VAR5 = VAR8;
        return;
    }
    assert(VAR9 == VAR10);
    if (FUN4(VAR2, &VAR6, &VAR7, &VAR8) < 0)
    {
        FUN5(VAR2, VAR3, VAR4, VAR5);
    }
    else if (VAR7 > 16)
    {
        FUN5(VAR2, VAR3, VAR4, VAR5);
        FUN6(VAR2, *VAR3 * *VAR4 <= 131072 ? VAR11 : VAR12);
    }
    else
    {
        *VAR3 = VAR6;
        *VAR4 = VAR7;
        *VAR5 = VAR8;
        FUN6(VAR2, VAR13);
    }
    FUN7(VAR2, *VAR3, *VAR4, *VAR5);
    FUN8(VAR2, *VAR3, *VAR4, *VAR5, VAR9);
}
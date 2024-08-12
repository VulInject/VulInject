void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    HDGeometry VAR12;
    if (FUN2(VAR2, &VAR12) == 0)
    {
        *VAR4 = VAR12.VAR8;
        *VAR6 = VAR12.VAR13;
        *VAR5 = VAR12.VAR9;
        VAR11 = VAR14;
    }
    else if (FUN3(VAR2, &VAR8, &VAR9, &VAR10) < 0)
    {
        FUN4(VAR2, VAR4, VAR5, VAR6);
        VAR11 = FUN5(*VAR4, *VAR5, *VAR6);
    }
    else if (VAR9 > 16)
    {
        FUN4(VAR2, VAR4, VAR5, VAR6);
        VAR11 = *VAR4 * *VAR5 <= 131072 ? VAR15 : VAR16;
    }
    else
    {
        *VAR4 = VAR8;
        *VAR5 = VAR9;
        *VAR6 = VAR10;
        VAR11 = VAR14;
    }
    if (VAR7)
    {
        *VAR7 = VAR11;
    }
    FUN6(VAR2, *VAR4, *VAR5, *VAR6, VAR11);
}
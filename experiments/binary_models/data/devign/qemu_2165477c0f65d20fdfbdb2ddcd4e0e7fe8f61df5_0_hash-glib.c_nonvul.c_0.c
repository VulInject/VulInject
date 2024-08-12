int FUN1(QCryptoHashAlgorithm VAR1, const struct VAR2 *VAR3, size_t VAR4, VAR5 **VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11, VAR12;
    VAR13 *VAR14;
    if (VAR1 >= FUN2(VAR15) || VAR15[VAR1] == -1)
    {
        FUN3(VAR10, "", VAR1);
        return -1;
    }
    VAR14 = FUN4(VAR15[VAR1]);
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        FUN5(VAR14, VAR3[VAR11].VAR16, VAR3[VAR11].VAR17);
    }
    VAR12 = FUN6(VAR15[VAR1]);
    if (VAR12 < 0)
    {
        FUN3(VAR10, "", "");
        goto VAR18;
    }
    if (*VAR8 == 0)
    {
        *VAR8 = VAR12;
        *VAR6 = FUN7(VAR5, *VAR8);
    }
    else if (*VAR8 != VAR12)
    {
        FUN3(VAR10, "", *VAR8, VAR12);
        goto VAR18;
    }
    FUN8(VAR14, *VAR6, VAR8);
    FUN9(VAR14);
    return 0;
VAR18:
    FUN9(VAR14);
    return -1;
}
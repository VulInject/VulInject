static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int64_t VAR6 = FUN2(VAR4) + VAR5;
    VAR7 *VAR8 = NULL, *VAR9 = NULL;
    int VAR10;
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        VAR7 **VAR11;
        uint32_t VAR12, VAR13;
        if (VAR6 - FUN2(VAR4) <= 12)
            break;
        VAR12 = FUN3(VAR4);
        VAR13 = FUN4(VAR4);
        FUN5(VAR4, 4);
        if (VAR12 < 12 || VAR12 - 12 > VAR6 - FUN2(VAR4))
            break;
        VAR12 -= 12;
        if (VAR13 == FUN6('', '', '', ''))
            VAR11 = &VAR8;
        else if (VAR13 == FUN6('', '', '', '') && VAR12 > 4)
        {
            FUN5(VAR4, 4);
            VAR12 -= 4;
            VAR11 = &VAR9;
        }
        else
            break;
        *VAR11 = FUN7(VAR12 + 1);
        if (!*VAR11)
            break;
        FUN8(VAR4, *VAR11, VAR12);
        (*VAR11)[VAR12] = 0;
    }
    if (VAR8 && VAR9)
    {
        FUN9(&VAR2->VAR14->VAR15, VAR8, VAR9, VAR16 | VAR17);
        VAR8 = VAR9 = NULL;
    }
    FUN10(VAR4, VAR6, VAR18);
    FUN11(&VAR8);
    FUN11(&VAR9);
    return 0;
}
VAR1 FUN1(uint64_t VAR2, uint64_t VAR3, VAR1 *VAR4, uint64_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = NULL, *VAR10;
    uint64_t VAR11, VAR12 = 0;
    uint64_t VAR13 = VAR2 + VAR3;
    assert(VAR13 > VAR3);
    FUN2(FUN3(), VAR14, &VAR9);
    if (VAR4)
    {
        VAR11 = *VAR4;
    }
    else
    {
        VAR11 = VAR2;
    }
    for (VAR10 = VAR9; VAR10; VAR10 = FUN4(VAR10))
    {
        VAR15 *VAR16 = VAR10->VAR17;
        uint64_t VAR18 = FUN5(FUN6(VAR16), VAR19, VAR7);
        if (VAR7 && *VAR7)
        {
            goto VAR20;
        }
        if (FUN7(VAR16->VAR21, VAR18, VAR11, VAR5))
        {
            if (VAR4)
            {
                VAR22 *VAR23 = FUN8(VAR16);
                FUN9(VAR7, "", VAR23->VAR24);
                goto VAR20;
            }
            VAR11 = VAR16->VAR21 + VAR18;
        }
    }
    VAR12 = VAR11;
    if (VAR11 < VAR2)
    {
        FUN9(VAR7, "" VAR25 "" VAR25 "" VAR25, VAR11, VAR5, VAR2);
    }
    else if ((VAR11 + VAR5) > VAR13)
    {
        FUN9(VAR7, "" VAR25 "" VAR25 "" VAR25, VAR11, VAR5, VAR13);
    }
VAR20:
    FUN10(VAR9);
    return VAR12;
}
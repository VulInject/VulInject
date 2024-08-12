VAR1 FUN1(uint64_t VAR2, uint64_t VAR3, VAR1 *VAR4, uint64_t VAR5, uint64_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = NULL, *VAR11;
    uint64_t VAR12, VAR13 = 0;
    uint64_t VAR14 = VAR2 + VAR3;
    FUN2(FUN3(VAR2, VAR5) == VAR2);
    FUN2(FUN3(VAR3, VAR5) == VAR3);
    if (!VAR3)
    {
        FUN4(VAR8, ""
                         "");
        goto VAR15;
    }
    if (VAR4 && FUN3(*VAR4, VAR5) != *VAR4)
    {
        FUN4(VAR8, "" VAR16 "", VAR5);
        goto VAR15;
    }
    if (FUN3(VAR6, VAR5) != VAR6)
    {
        FUN4(VAR8, "" VAR16, VAR5);
        goto VAR15;
    }
    assert(VAR14 > VAR2);
    FUN5(FUN6(), VAR17, &VAR10);
    if (VAR4)
    {
        VAR12 = *VAR4;
    }
    else
    {
        VAR12 = VAR2;
    }
    for (VAR11 = VAR10; VAR11; VAR11 = FUN7(VAR11))
    {
        VAR18 *VAR19 = VAR11->VAR20;
        uint64_t VAR21 = FUN8(FUN9(VAR19), VAR22, VAR8);
        if (VAR8 && *VAR8)
        {
            goto VAR15;
        }
        if (FUN10(VAR19->VAR23, VAR21, VAR12, VAR6))
        {
            if (VAR4)
            {
                VAR24 *VAR25 = FUN11(VAR19);
                FUN4(VAR8, "", VAR25->VAR26);
                goto VAR15;
            }
            VAR12 = FUN3(VAR19->VAR23 + VAR21, VAR5);
        }
    }
    VAR13 = VAR12;
    if (VAR12 < VAR2)
    {
        FUN4(VAR8, "" VAR16 "" VAR16 "" VAR16, VAR12, VAR6, VAR2);
    }
    else if ((VAR12 + VAR6) > VAR14)
    {
        FUN4(VAR8, "" VAR16 "" VAR16 "" VAR16, VAR12, VAR6, VAR14);
    }
VAR15:
    FUN12(VAR10);
    return VAR13;
}
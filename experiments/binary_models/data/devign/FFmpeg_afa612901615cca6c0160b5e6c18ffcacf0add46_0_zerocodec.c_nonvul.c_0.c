static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    VAR10 *VAR13 = &VAR8->VAR14;
    VAR15 *VAR16 = &VAR8->VAR16;
    VAR17 *VAR18, *VAR19;
    int VAR20, VAR21, VAR22;
    VAR11->VAR23 = 3;
    if (VAR2->FUN2(VAR2, VAR11) < 0)
    {
        FUN3(VAR2, VAR24, "");
        return FUN4(VAR25);
    }
    VAR22 = FUN5(VAR16);
    if (VAR22 != VAR26)
    {
        FUN3(VAR2, VAR24, "", VAR22);
        return FUN4(VAR27);
    }
    VAR16->VAR28 = VAR6->VAR3;
    VAR16->VAR29 = VAR6->VAR30;
    VAR18 = VAR13->VAR3[0];
    VAR19 = VAR11->VAR3[0];
    if (VAR6->VAR31 & VAR32)
    {
        VAR11->VAR33 = 1;
        VAR11->VAR34 = VAR35;
    }
    else
    {
        VAR11->VAR33 = 0;
        VAR11->VAR34 = VAR36;
    }
    for (VAR20 = 0; VAR20 < VAR2->VAR37; VAR20++)
    {
        VAR16->VAR38 = VAR19;
        VAR16->VAR39 = VAR2->VAR40 << 1;
        VAR22 = FUN6(VAR16, VAR41);
        if (VAR22 != VAR26 && VAR22 != VAR42)
        {
            FUN3(VAR2, VAR24, "", VAR22);
            return FUN4(VAR27);
        }
        if (!(VAR6->VAR31 & VAR32))
            for (VAR21 = 0; VAR21 < VAR2->VAR40 << 1; VAR21++)
                VAR19[VAR21] += VAR18[VAR21] & -!VAR19[VAR21];
        VAR18 += VAR13->VAR43[0];
        VAR19 += VAR11->VAR43[0];
    }
    if (VAR13->VAR3[0])
        VAR2->FUN7(VAR2, VAR13);
    *VAR13 = *VAR11;
    *VAR4 = sizeof(VAR10);
    *(VAR10 *)VAR3 = *VAR11;
    return VAR6->VAR30;
}
void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    VAR8 *VAR9 = VAR4;
    UINT32 VAR10 = VAR2->VAR10;
    UINT32 VAR11 = VAR2->VAR11;
    UINT8 VAR12 = VAR2->VAR12 & 0x20;
    VAR13 *VAR14, *VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    FUN2(VAR17);
    if ((void *)VAR2 != VAR19)
    {
        VAR19 = (void *)VAR2;
        VAR20 = VAR2->VAR21;
        VAR22 = &VAR20[9];
        VAR23 = &VAR20[7].VAR24[VAR25];
        VAR26 = &VAR20[7].VAR24[VAR27];
        VAR28 = &VAR20[8].VAR24[VAR25];
        VAR29 = &VAR20[8].VAR24[VAR27];
        VAR30 = VAR2->VAR30;
        VAR31 = VAR2->VAR31;
        VAR32 = VAR2->VAR32;
        VAR33 = VAR2->VAR33;
    }
    VAR15 = VAR12 ? &VAR20[6] : VAR22;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        VAR34 = VAR32[(VAR10 += VAR30) >> VAR35];
        VAR36 = VAR33[(VAR11 += VAR31) >> VAR37];
        VAR38[0] = 0;
        if (VAR17->VAR39)
            FUN3(VAR17);
        for (VAR14 = VAR20; VAR14 < VAR15; VAR14++)
            FUN4(VAR14);
        if (VAR12)
            FUN5(VAR20);
        VAR7 = FUN6(VAR38[0], VAR40, VAR41);
        VAR9[VAR6] = VAR7 >> VAR42;
    }
    VAR2->VAR10 = VAR10;
    VAR2->VAR11 = VAR11;
    if (!VAR17->VAR39)
        VAR2->VAR43 &= 0xfe;
}
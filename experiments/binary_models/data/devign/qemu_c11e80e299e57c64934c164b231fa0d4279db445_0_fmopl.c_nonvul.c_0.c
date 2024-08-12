void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    VAR8 *VAR9 = VAR4;
    UINT32 VAR10 = VAR2->VAR10;
    UINT32 VAR11 = VAR2->VAR11;
    UINT8 VAR12 = VAR2->VAR12 & 0x20;
    VAR13 *VAR14, *VAR15;
    if ((void *)VAR2 != VAR16)
    {
        VAR16 = (void *)VAR2;
        VAR17 = VAR2->VAR18;
        VAR19 = &VAR17[9];
        VAR20 = &VAR17[7].VAR21[VAR22];
        VAR23 = &VAR17[7].VAR21[VAR24];
        VAR25 = &VAR17[8].VAR21[VAR22];
        VAR26 = &VAR17[8].VAR21[VAR24];
        VAR27 = VAR2->VAR27;
        VAR28 = VAR2->VAR28;
        VAR29 = VAR2->VAR29;
        VAR30 = VAR2->VAR30;
    }
    VAR15 = VAR12 ? &VAR17[6] : VAR19;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        VAR31 = VAR29[(VAR10 += VAR27) >> VAR32];
        VAR33 = VAR30[(VAR11 += VAR28) >> VAR34];
        VAR35[0] = 0;
        for (VAR14 = VAR17; VAR14 < VAR15; VAR14++)
            FUN2(VAR14);
        if (VAR12)
            FUN3(VAR17);
        VAR7 = FUN4(VAR35[0], VAR36, VAR37);
        VAR9[VAR6] = VAR7 >> VAR38;
    }
    VAR2->VAR10 = VAR10;
    VAR2->VAR11 = VAR11;
    if (VAR39)
    {
        for (VAR40 = 0; VAR40 < VAR41; VAR40++)
            if (VAR42[VAR40] == VAR2)
                break;
        fprintf(VAR39, "", 0x20 + VAR40, VAR5 & 0xff, VAR5 / 256);
    }
}
int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    VAR2->VAR7 = VAR8;
    VAR2->VAR9 = VAR10;
    VAR2->VAR11 = VAR12;
    FUN2(VAR2);
    if (VAR2->VAR13 == VAR14)
        VAR2->VAR15 = VAR2->VAR7;
    else
        VAR2->VAR15 = VAR2->VAR9;
    VAR2->VAR16 = (VAR2->VAR17 + 15) / 16;
    VAR2->VAR18 = (VAR2->VAR19 + 15) / 16;
    VAR2->VAR20 = VAR2->VAR16 * VAR2->VAR18;
    VAR2->VAR21 = VAR2->VAR16 * 16 + 2 * VAR22;
    for (VAR4 = 0; VAR4 < 3; VAR4++)
    {
        int VAR23, VAR24, VAR25, VAR26;
        VAR23 = VAR2->VAR21;
        VAR24 = VAR2->VAR18 * 16 + 2 * VAR22;
        VAR25 = (VAR4 == 0) ? 0 : 1;
        VAR3 = (VAR23 >> VAR25) * (VAR24 >> VAR25);
        VAR26 = (VAR23 >> VAR25) * (VAR22 >> VAR25) + (VAR22 >> VAR25);
        FUN3(VAR6, VAR3)
        VAR2->VAR27[VAR4] = VAR6;
        VAR2->VAR28[VAR4] = VAR6 + VAR26;
        FUN3(VAR6, VAR3)
        VAR2->VAR29[VAR4] = VAR6;
        VAR2->VAR30[VAR4] = VAR6 + VAR26;
        if (VAR2->VAR31 || VAR2->VAR32 == VAR33)
        {
            FUN3(VAR6, VAR3)
            VAR2->VAR34[VAR4] = VAR6;
            VAR2->VAR35[VAR4] = VAR6 + VAR26;
        }
    }
    if (VAR2->VAR36)
    {
        int VAR37;
        int VAR38 = (VAR2->VAR16 + 2) * (VAR2->VAR18 + 2);
        FUN3(VAR2->VAR39, VAR2->VAR20 * sizeof(VAR40))
        FUN3(VAR2->VAR41, VAR2->VAR20 * sizeof(VAR40)) FUN3(VAR2->VAR42, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR43, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR44, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR45, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR46, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR47, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR48, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR49, VAR38 * 2 * sizeof(VAR40)) FUN3(VAR2->VAR50, VAR2->VAR21 * 16 * 3 * sizeof(VAR51)) FUN3(VAR2->VAR52, VAR53 * sizeof(VAR54)) FUN3(VAR2->VAR55, VAR53 * sizeof(VAR56)) if (VAR2->VAR57)
        {
            for (VAR37 = 0; VAR37 < VAR58; VAR37++)
            {
                int VAR4;
                for (VAR4 = 0; VAR4 < 3; VAR4++)
                {
                    int VAR23, VAR24, VAR25;
                    VAR23 = VAR2->VAR21;
                    VAR24 = VAR2->VAR18 * 16;
                    VAR25 = (VAR4 == 0) ? 0 : 1;
                    VAR3 = (VAR23 >> VAR25) * (VAR24 >> VAR25);
                    FUN3(VAR6, VAR3);
                    VAR2->VAR59[VAR37][VAR4] = VAR6;
                }
            }
        }
        if (VAR2->VAR32 == VAR33)
        {
            FUN3(VAR2->VAR60, VAR61);
            FUN3(VAR2->VAR62, VAR61);
        }
    }
    if (VAR2->VAR13 == VAR14 || VAR2->VAR36)
    {
        int VAR63;
        FUN3(VAR2->VAR64, VAR2->VAR20 * sizeof(VAR5))
        VAR63 = (2 * VAR2->VAR16 + 2) * (2 * VAR2->VAR18 + 2);
        FUN3(VAR2->VAR65, VAR63 * 2 * sizeof(VAR40));
    }
    if (VAR2->VAR66 || VAR2->VAR67)
    {
        int VAR68, VAR3, VAR4, VAR63;
        VAR68 = (2 * VAR2->VAR16 + 2) * (2 * VAR2->VAR18 + 2);
        VAR3 = (VAR2->VAR16 + 2) * (VAR2->VAR18 + 2);
        VAR63 = VAR68 + 2 * VAR3;
        FUN3(VAR2->VAR69[0], VAR63 * sizeof(VAR40));
        VAR2->VAR69[1] = VAR2->VAR69[0] + VAR68;
        VAR2->VAR69[2] = VAR2->VAR69[1] + VAR3;
        for (VAR4 = 0; VAR4 < VAR63; VAR4++)
            VAR2->VAR69[0][VAR4] = 1024;
        FUN3(VAR2->VAR70[0], VAR63 * sizeof(VAR40) * 16);
        VAR2->VAR70[1] = VAR2->VAR70[0] + VAR68;
        VAR2->VAR70[2] = VAR2->VAR70[1] + VAR3;
        FUN3(VAR2->VAR71, VAR68);
        FUN3(VAR2->VAR72, VAR2->VAR20);
        memset(VAR2->VAR72, 1, VAR2->VAR20);
        FUN3(VAR2->VAR73, VAR74);
        FUN3(VAR2->VAR75, VAR2->VAR20 * sizeof(VAR5))
        FUN3(VAR2->VAR76, VAR2->VAR20 * sizeof(VAR5)) FUN3(VAR2->VAR77, VAR2->VAR20 * sizeof(VAR5))
    }
    VAR2->VAR78 = VAR79;
    FUN3(VAR2->VAR80, VAR2->VAR20);
    VAR2->VAR81 = VAR2->VAR82[0];
    VAR2->VAR83 = 1;
    return 0;
VAR84:
    FUN4(VAR2);
    return -1;
}
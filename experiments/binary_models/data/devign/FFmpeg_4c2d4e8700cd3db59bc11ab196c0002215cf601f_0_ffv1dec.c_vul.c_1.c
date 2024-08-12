static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = *(void **)VAR3;
    VAR4 *VAR6 = VAR5->VAR7->VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    const int VAR14 = FUN2(VAR2->VAR15)->VAR16[0].VAR17;
    VAR18 *const VAR19 = VAR6->VAR20;
    int VAR21, VAR22;
    for (VAR22 = 0; VAR5 != VAR6->VAR23[VAR22]; VAR22++)
        ;
    if (VAR6->VAR24 && !VAR19->VAR25)
        FUN3(&VAR6->VAR26, VAR22, 0);
    if (VAR6->VAR24 && !VAR19->VAR25)
    {
        VAR4 *VAR27 = VAR6->VAR24->VAR23[VAR22];
        VAR4 *VAR28 = VAR6->VAR23[VAR22];
        FUN4(VAR28->VAR29 == VAR27->VAR29);
        FUN4(VAR28 == VAR5);
        if (!VAR19->VAR25)
            VAR28->VAR30 |= VAR27->VAR30;
        for (VAR21 = 0; VAR21 < VAR6->VAR29; VAR21++)
        {
            VAR31 *VAR32 = &VAR27->VAR33[VAR21];
            VAR31 *VAR34 = &VAR28->VAR33[VAR21];
            FUN5(VAR34->VAR35);
            FUN5(VAR34->VAR36);
            memcpy(VAR34, VAR32, sizeof(*VAR34));
            VAR34->VAR35 = NULL;
            VAR34->VAR36 = NULL;
            if (VAR27->VAR37)
            {
                VAR34->VAR35 = FUN6(VAR38, VAR32->VAR39);
                memcpy(VAR34->VAR35, VAR32->VAR35, VAR38 * VAR32->VAR39);
            }
            else
            {
                VAR34->VAR36 = FUN6(sizeof(*VAR34->VAR36), VAR32->VAR39);
                memcpy(VAR34->VAR36, VAR32->VAR36, sizeof(*VAR34->VAR36) * VAR32->VAR39);
            }
        }
    }
    VAR5->VAR40 = 1;
    VAR5->VAR41 = 1;
    if (VAR6->VAR42 > 2)
    {
        if (FUN7(VAR6, VAR5) < 0)
            return FUN8(VAR43);
        if (FUN9(VAR6, VAR5) < 0)
        {
            VAR5->VAR30 = 1;
            return VAR44;
        }
    }
    if ((VAR13 = FUN7(VAR6, VAR5)) < 0)
        return VAR13;
    if (VAR6->VAR20->VAR25 || VAR5->VAR45)
        FUN10(VAR6, VAR5);
    VAR9 = VAR5->VAR46;
    VAR10 = VAR5->VAR47;
    VAR11 = VAR5->VAR48;
    VAR12 = VAR5->VAR49;
    if (!VAR5->VAR37)
    {
        if (VAR6->VAR42 == 3 && VAR6->VAR50 > 1 || VAR6->VAR42 > 3)
            FUN11(&VAR5->VAR2, (VAR51[]){129});
        VAR5->VAR52 = VAR6->VAR42 > 2 || (!VAR11 && !VAR12) ? VAR5->VAR2.VAR53 - VAR5->VAR2.VAR54 - 1 : 0;
        FUN12(&VAR5->VAR55, VAR5->VAR2.VAR54 + VAR5->VAR52, (VAR5->VAR2.VAR56 - VAR5->VAR2.VAR54 - VAR5->VAR52) * 8);
    }
    FUN4(VAR9 && VAR10);
    if (VAR6->VAR57 == 0)
    {
        const int VAR58 = FUN13(VAR9, VAR6->VAR59);
        const int VAR60 = FUN13(VAR10, VAR6->VAR61);
        const int VAR62 = VAR11 >> VAR6->VAR59;
        const int VAR63 = VAR12 >> VAR6->VAR61;
        FUN14(VAR5, VAR19->VAR64[0] + VAR14 * VAR11 + VAR12 * VAR19->VAR65[0], VAR9, VAR10, VAR19->VAR65[0], 0);
        if (VAR6->VAR66)
        {
            FUN14(VAR5, VAR19->VAR64[1] + VAR14 * VAR62 + VAR63 * VAR19->VAR65[1], VAR58, VAR60, VAR19->VAR65[1], 1);
            FUN14(VAR5, VAR19->VAR64[2] + VAR14 * VAR62 + VAR63 * VAR19->VAR65[2], VAR58, VAR60, VAR19->VAR65[2], 1);
        }
        if (VAR5->VAR67)
            FUN14(VAR5, VAR19->VAR64[3] + VAR14 * VAR11 + VAR12 * VAR19->VAR65[3], VAR9, VAR10, VAR19->VAR65[3], (VAR6->VAR42 >= 4 && !VAR6->VAR66) ? 1 : 2);
    }
    else
    {
        VAR51 *VAR68[3] = {VAR19->VAR64[0] + VAR14 * VAR11 + VAR12 * VAR19->VAR65[0], VAR19->VAR64[1] + VAR14 * VAR11 + VAR12 * VAR19->VAR65[1], VAR19->VAR64[2] + VAR14 * VAR11 + VAR12 * VAR19->VAR65[2]};
        FUN15(VAR5, VAR68, VAR9, VAR10, VAR19->VAR65);
    }
    if (VAR5->VAR37 && VAR6->VAR42 > 2)
    {
        int VAR69;
        FUN11(&VAR5->VAR2, (VAR51[]){129});
        VAR69 = VAR5->VAR2.VAR56 - VAR5->VAR2.VAR53 - 2 - 5 * VAR6->VAR70;
        if (VAR69)
        {
            FUN16(VAR6->VAR7, VAR71, "", VAR69);
            VAR5->VAR30 = 1;
        }
    }
    FUN17();
    FUN18(&VAR6->VAR72, VAR22, 0);
    return 0;
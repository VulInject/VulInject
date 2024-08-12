static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR9->VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    int VAR24;
    int VAR25 = 0, VAR26 = 0;
    VAR7->VAR27 = NULL;
    VAR7->VAR28 = 0;
    VAR7->VAR29 = VAR9->VAR30 * 1000;
    VAR7->VAR31 = 0;
    if (VAR12)
    {
        VAR25 = VAR12->VAR32;
        VAR26 = VAR12->VAR33;
    }
    VAR7->VAR34 = VAR9->VAR35;
    if (VAR7->VAR34 <= 0)
        return VAR36;
    VAR7->VAR27 = FUN2(VAR7->VAR34 * VAR7->VAR34, sizeof(*VAR7->VAR27));
    if (!VAR7->VAR27)
        return FUN3(VAR37);
    VAR24 = 0;
    for (VAR17 = VAR9->VAR38; VAR17; VAR17 = VAR17->VAR39)
    {
        VAR15 = FUN4(VAR9, VAR17->VAR40);
        VAR19 = VAR7->VAR27[VAR24];
        if (!VAR15)
            continue;
        VAR19->VAR32 = VAR17->VAR41 + VAR25;
        VAR19->VAR33 = VAR17->VAR42 + VAR26;
        VAR19->VAR43 = VAR15->VAR44;
        VAR19->VAR45 = VAR15->VAR46;
        VAR19->VAR47 = 16;
        VAR19->VAR48 = VAR49;
        VAR19->VAR50[0] = VAR15->VAR44;
        VAR21 = FUN5(VAR9, VAR15->VAR21);
        if (!VAR21)
            VAR21 = &VAR51;
        switch (VAR15->VAR52)
        {
        case 2:
            VAR23 = VAR21->VAR53;
            break;
        case 8:
            VAR23 = VAR21->VAR54;
            break;
        case 4:
        default:
            VAR23 = VAR21->VAR55;
            break;
        }
        VAR19->VAR56[1] = FUN6(VAR57);
        if (!VAR19->VAR56[1])
        {
            FUN7(VAR7->VAR27);
            return FUN3(VAR37);
        }
        memcpy(VAR19->VAR56[1], VAR23, (1 << VAR15->VAR52) * sizeof(VAR22));
        VAR19->VAR56[0] = FUN8(VAR15->VAR5);
        if (!VAR19->VAR56[0])
        {
            FUN7(VAR19->VAR56[1]);
            FUN7(VAR7->VAR27);
            return FUN3(VAR37);
        }
        memcpy(VAR19->VAR56[0], VAR15->VAR58, VAR15->VAR5);
        VAR59
        {
            int VAR60;
            for (VAR60 = 0; VAR60 < 4; VAR60++)
            {
                VAR19->VAR61.VAR56[VAR60] = VAR19->VAR56[VAR60];
                VAR19->VAR61.VAR50[VAR60] = VAR19->VAR50[VAR60];
            }
        }
        FF_ENABLE_DEPRECATION_WARNINGS VAR24++;
    }
    VAR7->VAR34 = VAR24;
    FUN9(VAR9);
    return 1;
}
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
    VAR7->VAR27 = VAR9->VAR28 * 1000;
    if (VAR12)
    {
        VAR25 = VAR12->VAR29;
        VAR26 = VAR12->VAR30;
    }
    VAR7->VAR31 = VAR9->VAR32;
    if (VAR7->VAR31 > 0)
    {
        VAR7->VAR33 = FUN2(sizeof(*VAR7->VAR33) * VAR7->VAR31);
        for (VAR24 = 0; VAR24 < VAR7->VAR31; VAR24++)
            VAR7->VAR33[VAR24] = FUN2(sizeof(*VAR7->VAR33[VAR24]));
        VAR24 = 0;
        for (VAR17 = VAR9->VAR34; VAR17; VAR17 = VAR17->VAR35)
        {
            VAR15 = FUN3(VAR9, VAR17->VAR36);
            if (!VAR15)
                continue;
            if (!VAR15->VAR37)
                continue;
            VAR19 = VAR7->VAR33[VAR24];
            VAR19->VAR29 = VAR17->VAR38 + VAR25;
            VAR19->VAR30 = VAR17->VAR39 + VAR26;
            VAR19->VAR40 = VAR15->VAR41;
            VAR19->VAR42 = VAR15->VAR43;
            VAR19->VAR44 = (1 << VAR15->VAR45);
            VAR19->VAR46 = VAR47;
            VAR19->VAR48.VAR49[0] = VAR15->VAR41;
            VAR21 = FUN4(VAR9, VAR15->VAR21);
            if (!VAR21)
                VAR21 = &VAR50;
            switch (VAR15->VAR45)
            {
            case 2:
                VAR23 = VAR21->VAR51;
                break;
            case 8:
                VAR23 = VAR21->VAR52;
                break;
            case 4:
            default:
                VAR23 = VAR21->VAR53;
                break;
            }
            VAR19->VAR48.VAR54[1] = FUN2(VAR55);
            memcpy(VAR19->VAR48.VAR54[1], VAR23, (1 << VAR15->VAR45) * sizeof(VAR22));
            VAR19->VAR48.VAR54[0] = FUN5(VAR15->VAR5);
            memcpy(VAR19->VAR48.VAR54[0], VAR15->VAR56, VAR15->VAR5);
            VAR24++;
        }
        VAR7->VAR31 = VAR24;
    }
    FUN6(VAR9);
    return 1;
}
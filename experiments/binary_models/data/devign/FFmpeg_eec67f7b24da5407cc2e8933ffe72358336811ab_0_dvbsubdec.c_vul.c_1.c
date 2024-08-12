static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = VAR7->VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    int VAR22;
    int VAR23 = 0, VAR24 = 0;
    int VAR25 = 0;
    if (VAR12)
    {
        VAR23 = VAR12->VAR26;
        VAR24 = VAR12->VAR27;
    }
    if (VAR4->VAR28)
    {
        FUN2(VAR7, "");
        return VAR29;
    }
    for (VAR10 = VAR7->VAR30; VAR10; VAR10 = VAR10->VAR31)
    {
        VAR15 = FUN3(VAR7, VAR10->VAR32);
        if (VAR15 && VAR15->VAR33)
            VAR4->VAR28++;
    }
    if (VAR7->VAR34 == 0)
    {
        VAR4->VAR35 = VAR7->VAR36 * 1000;
        *VAR5 = 1;
    }
    else if (VAR7->VAR37 != VAR38)
    {
        VAR4->VAR35 = FUN4((VAR4->VAR39 - VAR7->VAR37), VAR40, (VAR41){1, 1000}) - 1;
        *VAR5 = 1;
    }
    if (VAR4->VAR28 > 0)
    {
        VAR4->VAR42 = FUN5(sizeof(*VAR4->VAR42), VAR4->VAR28);
        if (!VAR4->VAR42)
        {
            VAR25 = FUN6(VAR43);
            goto VAR44;
        }
        for (VAR22 = 0; VAR22 < VAR4->VAR28; VAR22++)
        {
            VAR4->VAR42[VAR22] = FUN7(sizeof(*VAR4->VAR42[VAR22]));
            if (!VAR4->VAR42[VAR22])
            {
                VAR25 = FUN6(VAR43);
                goto VAR44;
            }
        }
        VAR22 = 0;
        for (VAR10 = VAR7->VAR30; VAR10; VAR10 = VAR10->VAR31)
        {
            VAR15 = FUN3(VAR7, VAR10->VAR32);
            if (!VAR15)
                continue;
            if (!VAR15->VAR33)
                continue;
            VAR17 = VAR4->VAR42[VAR22];
            VAR17->VAR26 = VAR10->VAR45 + VAR23;
            VAR17->VAR27 = VAR10->VAR46 + VAR24;
            VAR17->VAR47 = VAR15->VAR48;
            VAR17->VAR49 = VAR15->VAR50;
            VAR17->VAR51 = (1 << VAR15->VAR52);
            VAR17->VAR53 = VAR54;
            VAR17->VAR55[0] = VAR15->VAR48;
            VAR19 = FUN8(VAR7, VAR15->VAR19);
            if (!VAR19)
                VAR19 = &VAR56;
            switch (VAR15->VAR52)
            {
            case 2:
                VAR21 = VAR19->VAR57;
                break;
            case 8:
                VAR21 = VAR19->VAR58;
                break;
            case 4:
            default:
                VAR21 = VAR19->VAR59;
                break;
            }
            VAR17->VAR60[1] = FUN7(VAR61);
            if (!VAR17->VAR60[1])
            {
                VAR25 = FUN6(VAR43);
                goto VAR44;
            }
            memcpy(VAR17->VAR60[1], VAR21, (1 << VAR15->VAR52) * sizeof(VAR20));
            VAR17->VAR60[0] = FUN9(VAR15->VAR62);
            if (!VAR17->VAR60[0])
            {
                VAR25 = FUN6(VAR43);
                goto VAR44;
            }
            memcpy(VAR17->VAR60[0], VAR15->VAR63, VAR15->VAR62);
            if ((VAR19 == &VAR56 && VAR7->VAR64 == -1) || VAR7->VAR64 == 1)
                FUN10(VAR17, VAR17->VAR47, VAR17->VAR49);
            VAR65
            {
                int VAR66;
                for (VAR66 = 0; VAR66 < 4; VAR66++)
                {
                    VAR17->VAR67.VAR60[VAR66] = VAR17->VAR60[VAR66];
                    VAR17->VAR67.VAR55[VAR66] = VAR17->VAR55[VAR66];
                }
            }
            FF_ENABLE_DEPRECATION_WARNINGS VAR22++;
        }
    }
    return 0;
VAR44:
    if (VAR4->VAR42)
    {
        for (VAR22 = 0; VAR22 < VAR4->VAR28; VAR22++)
        {
            VAR17 = VAR4->VAR42[VAR22];
            if (VAR17)
            {
                FUN11(&VAR17->VAR60[0]);
                FUN11(&VAR17->VAR60[1]);
            }
            FUN11(&VAR4->VAR42[VAR22]);
        }
        FUN11(&VAR4->VAR42);
    }
    VAR4->VAR28 = 0;
    return VAR25;
}
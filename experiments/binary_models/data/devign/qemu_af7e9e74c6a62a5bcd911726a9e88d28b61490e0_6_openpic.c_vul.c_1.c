static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(*VAR4), VAR2);
    int VAR5, VAR6;
    struct memreg VAR7[] = {
        {"", &VAR8, true, VAR9, VAR10},
        {"", &VAR11, true, VAR12, VAR13},
        {"", &VAR14, true, VAR15, VAR16},
        {"", &VAR17, true, VAR18, VAR19},
        {"", &VAR20, true, VAR21, VAR22},
    };
    struct memreg VAR23[] = {
        {"", &VAR24, true, VAR9, VAR10},
        {"", &VAR25, true, VAR12, VAR13},
        {"", &VAR26, true, VAR15, VAR16},
        {"", &VAR27, true, VAR18, VAR19},
        {"", &VAR28, true, VAR21, VAR22},
    };
    struct VAR29 *VAR30;
    switch (VAR4->VAR31)
    {
    case VAR32:
    default:
        VAR4->VAR33 |= VAR34;
        VAR4->VAR35 = 80;
        VAR4->VAR36 = VAR37;
        VAR4->VAR38 = VAR39;
        VAR4->VAR40 = 0xFFFF;
        VAR4->VAR41 = 0;
        VAR4->VAR42 = VAR43;
        VAR4->VAR44 = 1 << 0;
        VAR4->VAR45 = VAR46;
        VAR4->VAR47 = VAR48;
        VAR4->VAR49 = VAR50;
        VAR4->VAR51 = VAR52;
        VAR4->VAR53 = VAR54 | VAR55 | VAR56;
        VAR57 = true;
        VAR30 = VAR23;
        break;
    case VAR58:
        VAR4->VAR35 = VAR59;
        VAR4->VAR36 = VAR60;
        VAR4->VAR38 = VAR39;
        VAR4->VAR40 = 0xFF;
        VAR4->VAR41 = 4160000;
        VAR4->VAR42 = VAR43 | VAR61;
        VAR4->VAR44 = 0;
        VAR4->VAR45 = VAR62;
        VAR4->VAR47 = VAR63;
        VAR4->VAR49 = VAR64;
        VAR4->VAR53 = -1;
        VAR30 = VAR7;
        VAR30[2].VAR65 = false;
        if (VAR4->VAR66 != 1)
        {
            return -VAR67;
        }
        break;
    }
    FUN4(&VAR4->VAR68, "", 0x40000);
    for (VAR5 = 0; VAR5 < FUN5(VAR7); VAR5++)
    {
        if (!VAR30[VAR5].VAR65)
        {
            continue;
        }
        FUN6(&VAR4->VAR69[VAR5], VAR30[VAR5].VAR70, VAR4, VAR30[VAR5].VAR71, VAR30[VAR5].VAR72);
        FUN7(&VAR4->VAR68, VAR30[VAR5].VAR73, &VAR4->VAR69[VAR5]);
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR66; VAR5++)
    {
        VAR4->VAR74[VAR5].VAR75 = FUN8(VAR76, VAR77);
        for (VAR6 = 0; VAR6 < VAR77; VAR6++)
        {
            FUN9(VAR2, &VAR4->VAR74[VAR5].VAR75[VAR6]);
        }
    }
    FUN10(&VAR4->VAR78.VAR79, "", 0, 2, VAR80, VAR81, VAR4);
    FUN11(VAR2, &VAR4->VAR68);
    FUN12(&VAR2->VAR79, VAR82, VAR4->VAR45);
    return 0;
}
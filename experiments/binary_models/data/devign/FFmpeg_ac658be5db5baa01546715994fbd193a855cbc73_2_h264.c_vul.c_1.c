static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    VAR8 *const VAR9 = VAR7->VAR9;
    int VAR10 = 0;
    int VAR11;
    for (VAR11 = 0; VAR11 < 50; VAR11++)
    {
        FUN2(NULL, VAR12, "", VAR4[VAR11]);
    }
    VAR2->VAR13 = 0;
    VAR7->VAR14 = NULL;
    for (;;)
    {
        int VAR15;
        int VAR16;
        int VAR17;
        VAR3 *VAR18;
        int VAR11, VAR19 = 0;
        if (VAR2->VAR20)
        {
            if (VAR10 >= VAR5)
                break;
            VAR19 = 0;
            for (VAR11 = 0; VAR11 < VAR2->VAR21; VAR11++)
                VAR19 = (VAR19 << 8) | VAR4[VAR10++];
            if (VAR19 <= 1)
            {
                if (VAR19 == 1)
                {
                    VAR10++;
                    continue;
                }
                else
                {
                    FUN2(VAR2->VAR7.VAR9, VAR12, "", VAR19);
                    break;
                }
            }
        }
        else
        {
            for (; VAR10 + 3 < VAR5; VAR10++)
            {
                if (VAR4[VAR10] == 0 && VAR4[VAR10 + 1] == 0 && VAR4[VAR10 + 2] == 1)
                    break;
            }
            if (VAR10 + 3 >= VAR5)
                break;
            VAR10 += 3;
        }
        VAR18 = FUN3(VAR2, VAR4 + VAR10, &VAR16, &VAR15, VAR2->VAR20 ? VAR19 : VAR5 - VAR10);
        while (VAR18[VAR16 - 1] == 0 && VAR16 > 1)
            VAR16--;
        VAR17 = 8 * VAR16 - FUN4(VAR18 + VAR16 - 1);
        if (VAR7->VAR9->VAR22 & VAR23)
        {
            FUN2(VAR2->VAR7.VAR9, VAR24, "", VAR2->VAR25, VAR10, VAR5, VAR16);
        }
        if (VAR2->VAR20 && (VAR19 != VAR15))
            FUN2(VAR2->VAR7.VAR9, VAR12, "", VAR15, VAR19);
        VAR10 += VAR15;
        if ((VAR7->VAR26 == 1 && VAR2->VAR27 == 0) || (VAR9->VAR28 >= VAR29 && VAR2->VAR27 == 0))
            continue;
        switch (VAR2->VAR25)
        {
        case VAR30:
            FUN5(VAR2);
        case VAR31:
            FUN6(&VAR7->VAR32, VAR18, VAR17);
            VAR2->VAR33 = VAR2->VAR34 = &VAR7->VAR32;
            VAR7->VAR35 = 0;
            if (FUN7(VAR2) < 0)
            {
                FUN2(VAR2->VAR7.VAR9, VAR12, "");
                break;
            }
            VAR7->VAR14->VAR36 = (VAR2->VAR25 == VAR30);
            if (VAR2->VAR37 == 0 && VAR7->VAR26 < 5 && (VAR9->VAR28 < VAR29 || VAR2->VAR27) && (VAR9->VAR28 < VAR38 || VAR2->VAR39 != VAR40) && (VAR9->VAR28 < VAR41 || VAR2->VAR39 == VAR42) && VAR9->VAR28 < VAR43)
                FUN8(VAR2);
            break;
        case VAR44:
            FUN6(&VAR7->VAR32, VAR18, VAR17);
            VAR2->VAR33 = VAR2->VAR34 = NULL;
            VAR7->VAR35 = 1;
            if (FUN7(VAR2) < 0)
            {
                FUN2(VAR2->VAR7.VAR9, VAR12, "");
            }
            break;
        case VAR45:
            FUN6(&VAR2->VAR46, VAR18, VAR17);
            VAR2->VAR33 = &VAR2->VAR46;
            break;
        case VAR47:
            FUN6(&VAR2->VAR48, VAR18, VAR17);
            VAR2->VAR34 = &VAR2->VAR48;
            if (VAR2->VAR37 == 0 && VAR2->VAR33 && VAR7->VAR35 && VAR7->VAR49 && VAR7->VAR26 < 5 && (VAR9->VAR28 < VAR29 || VAR2->VAR27) && (VAR9->VAR28 < VAR38 || VAR2->VAR39 != VAR40) && (VAR9->VAR28 < VAR41 || VAR2->VAR39 == VAR42) && VAR9->VAR28 < VAR43)
                FUN8(VAR2);
            break;
        case VAR50:
            FUN6(&VAR7->VAR32, VAR18, VAR17);
            FUN9(VAR2);
            break;
        case VAR51:
            FUN6(&VAR7->VAR32, VAR18, VAR17);
            FUN10(VAR2);
            if (VAR7->VAR52 & VAR53)
                VAR7->VAR54 = 1;
            if (VAR9->VAR55 < 2)
                VAR9->VAR55 = !VAR7->VAR54;
            break;
        case VAR56:
            FUN6(&VAR7->VAR32, VAR18, VAR17);
            FUN11(VAR2, VAR17);
            break;
        case VAR57:
        case VAR58:
        case VAR59:
        case VAR60:
        case VAR61:
        case VAR62:
            break;
        default:
            FUN2(VAR9, VAR12, "", VAR2->VAR25);
        }
    }
    if (!VAR7->VAR14)
        return VAR10;
    VAR7->VAR14->VAR63 = VAR64;
    VAR7->VAR14->VAR65 = VAR7->VAR65;
    VAR2->VAR66 = VAR2->VAR67;
    VAR2->VAR68 = VAR2->VAR69;
    if (VAR7->VAR14->VAR70)
    {
        VAR2->VAR71 = VAR2->VAR72;
        VAR2->VAR73 = VAR2->VAR74;
    }
    if (VAR7->VAR14->VAR70)
        FUN12(VAR2, VAR2->VAR75, VAR2->VAR76);
    FUN13(VAR7);
    FUN14(VAR7);
    return VAR10;
}
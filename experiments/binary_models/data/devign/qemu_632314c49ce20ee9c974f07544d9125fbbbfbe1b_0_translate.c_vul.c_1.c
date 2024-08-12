static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    struct DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9;
    uint32_t VAR10;
    int VAR11, VAR12;
    uint32_t VAR13;
    int VAR14;
    int VAR15;
    FUN2(VAR16);
    VAR10 = VAR4->VAR17;
    VAR7->VAR4 = VAR4;
    VAR9 = VAR18.VAR19 + VAR20;
    VAR7->VAR21 = VAR22;
    VAR7->VAR23 = VAR10;
    VAR7->VAR17 = VAR10;
    VAR7->VAR24 = VAR2->VAR25.VAR26;
    VAR7->VAR27 = FUN3(&VAR2->VAR25);
    VAR7->VAR28 = VAR7->VAR29 = VAR4->VAR24;
    VAR7->VAR30 = !!(VAR7->VAR29 & VAR31);
    VAR7->VAR32 = VAR2->VAR25.VAR32;
    if (FUN4(VAR33))
    {
        FUN5("");
        FUN6(&VAR2->VAR25, 0);
    }
    VAR13 = (VAR10 & VAR34) + VAR35;
    VAR12 = -1;
    VAR14 = 0;
    VAR15 = VAR4->VAR36 & VAR37;
    if (VAR15 == 0)
    {
        VAR15 = VAR37;
    }
    FUN7();
    do
    {
        FUN8(VAR2, VAR7);
        if (VAR5)
        {
            VAR11 = VAR18.VAR38 - VAR18.VAR19;
            if (VAR12 < VAR11)
            {
                VAR12++;
                while (VAR12 < VAR11)
                {
                    VAR18.VAR39[VAR12++] = 0;
                }
            }
            VAR18.VAR40[VAR12] = VAR7->VAR17;
            VAR18.VAR39[VAR12] = 1;
            VAR18.VAR41[VAR12] = VAR14;
        }
        if (FUN9(FUN4(VAR42 | VAR43)))
        {
            FUN10(VAR7->VAR17);
        }
        if (VAR14 + 1 == VAR15 && (VAR4->VAR36 & VAR44))
        {
            FUN11();
        }
        VAR7->VAR23 = VAR7->VAR17 - 4;
        VAR7->VAR45 = VAR7->VAR17 + 4;
        FUN12(VAR46, VAR7->VAR23);
        FUN12(VAR47, VAR7->VAR45);
        FUN13(VAR7, VAR2);
        VAR7->VAR17 = VAR7->VAR45;
        VAR14++;
        if (VAR7->VAR30)
        {
            VAR7->VAR30--;
            if (!VAR7->VAR30)
            {
                VAR7->VAR29 &= ~VAR31;
                FUN14(VAR7);
                FUN15(VAR48, VAR49);
                FUN15(VAR47, VAR49);
                FUN12(VAR49, 0);
                FUN16(0);
                VAR7->VAR21 = VAR50;
                break;
            }
        }
    } while (!VAR7->VAR21 && VAR18.VAR38 < VAR9 && !VAR2->VAR25.VAR32 && !VAR51 && (VAR7->VAR17 < VAR13) && VAR14 < VAR15);
    if (VAR4->VAR36 & VAR44)
    {
        FUN17();
    }
    if (VAR7->VAR21 == VAR22)
    {
        VAR7->VAR21 = VAR52;
        FUN12(VAR48, VAR7->VAR17);
    }
    if (FUN9(VAR2->VAR25.VAR32))
    {
        if (VAR7->VAR21 == VAR22)
        {
            FUN12(VAR48, VAR7->VAR17);
        }
        FUN18(VAR7, VAR53);
    }
    else
    {
        switch (VAR7->VAR21)
        {
        case VAR22:
            FUN19(VAR7, 0, VAR7->VAR17);
            break;
        default:
        case VAR50:
            break;
        case VAR52:
            FUN16(0);
            break;
        case VAR54:
            break;
        }
    }
    FUN20(VAR4, VAR14);
    *VAR18.VAR38 = VAR55;
    if (VAR5)
    {
        VAR11 = VAR18.VAR38 - VAR18.VAR19;
        VAR12++;
        while (VAR12 <= VAR11)
        {
            VAR18.VAR39[VAR12++] = 0;
        }
    }
    else
    {
        VAR4->VAR56 = VAR7->VAR17 - VAR10;
        VAR4->VAR57 = VAR14;
    }
    if (FUN4(VAR33))
    {
        FUN5("");
        FUN21(&VAR2->VAR25, VAR10, VAR7->VAR17 - VAR10, 0);
        FUN5("", VAR7->VAR17 - VAR10, VAR18.VAR38 - VAR18.VAR19);
    }
}
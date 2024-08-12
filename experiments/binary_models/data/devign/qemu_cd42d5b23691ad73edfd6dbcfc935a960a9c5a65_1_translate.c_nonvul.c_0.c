static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    struct DisasContext VAR8, *VAR9 = &VAR8;
    VAR10 *VAR11;
    uint32_t VAR12;
    int VAR13, VAR14;
    uint32_t VAR15;
    int VAR16;
    int VAR17;
    VAR12 = VAR4->VAR18;
    VAR9->VAR4 = VAR4;
    VAR11 = VAR19.VAR20 + VAR21;
    VAR9->VAR22 = VAR23;
    VAR9->VAR24 = VAR12;
    VAR9->VAR18 = VAR12;
    VAR9->VAR25 = VAR2->VAR26.VAR27;
    VAR9->VAR28 = FUN3(&VAR2->VAR26);
    VAR9->VAR29 = VAR9->VAR30 = VAR4->VAR25;
    VAR9->VAR31 = !!(VAR9->VAR30 & VAR32);
    VAR9->VAR33 = VAR7->VAR33;
    if (FUN4(VAR34))
    {
        FUN5("");
        FUN6(FUN2(VAR2), 0);
    }
    VAR15 = (VAR12 & VAR35) + VAR36;
    VAR14 = -1;
    VAR16 = 0;
    VAR17 = VAR4->VAR37 & VAR38;
    if (VAR17 == 0)
    {
        VAR17 = VAR38;
    }
    FUN7(VAR4);
    do
    {
        FUN8(VAR2, VAR9);
        if (VAR5)
        {
            VAR13 = VAR19.VAR39 - VAR19.VAR20;
            if (VAR14 < VAR13)
            {
                VAR14++;
                while (VAR14 < VAR13)
                {
                    VAR19.VAR40[VAR14++] = 0;
                }
            }
            VAR19.VAR41[VAR14] = VAR9->VAR18;
            VAR19.VAR40[VAR14] = 1;
            VAR19.VAR42[VAR14] = VAR16;
        }
        if (FUN9(FUN4(VAR43 | VAR44)))
        {
            FUN10(VAR9->VAR18);
        }
        if (VAR16 + 1 == VAR17 && (VAR4->VAR37 & VAR45))
        {
            FUN11();
        }
        VAR9->VAR24 = VAR9->VAR18 - 4;
        VAR9->VAR46 = VAR9->VAR18 + 4;
        FUN12(VAR47, VAR9->VAR24);
        FUN12(VAR48, VAR9->VAR46);
        FUN13(VAR9, VAR2);
        VAR9->VAR18 = VAR9->VAR46;
        VAR16++;
        if (VAR9->VAR31)
        {
            VAR9->VAR31--;
            if (!VAR9->VAR31)
            {
                VAR9->VAR30 &= ~VAR32;
                FUN14(VAR9);
                FUN15(VAR49, VAR50);
                FUN15(VAR48, VAR50);
                FUN12(VAR50, 0);
                FUN16(0);
                VAR9->VAR22 = VAR51;
                break;
            }
        }
    } while (!VAR9->VAR22 && VAR19.VAR39 < VAR11 && !VAR7->VAR33 && !VAR52 && (VAR9->VAR18 < VAR15) && VAR16 < VAR17);
    if (VAR4->VAR37 & VAR45)
    {
        FUN17();
    }
    if (VAR9->VAR22 == VAR23)
    {
        VAR9->VAR22 = VAR53;
        FUN12(VAR49, VAR9->VAR18);
    }
    if (FUN9(VAR7->VAR33))
    {
        if (VAR9->VAR22 == VAR23)
        {
            FUN12(VAR49, VAR9->VAR18);
        }
        FUN18(VAR9, VAR54);
    }
    else
    {
        switch (VAR9->VAR22)
        {
        case VAR23:
            FUN19(VAR9, 0, VAR9->VAR18);
            break;
        default:
        case VAR51:
            break;
        case VAR53:
            FUN16(0);
            break;
        case VAR55:
            break;
        }
    }
    FUN20(VAR4, VAR16);
    *VAR19.VAR39 = VAR56;
    if (VAR5)
    {
        VAR13 = VAR19.VAR39 - VAR19.VAR20;
        VAR14++;
        while (VAR14 <= VAR13)
        {
            VAR19.VAR40[VAR14++] = 0;
        }
    }
    else
    {
        VAR4->VAR57 = VAR9->VAR18 - VAR12;
        VAR4->VAR58 = VAR16;
    }
    if (FUN4(VAR34))
    {
        FUN5("");
        FUN21(&VAR2->VAR26, VAR12, VAR9->VAR18 - VAR12, 0);
        FUN5("", VAR9->VAR18 - VAR12, VAR19.VAR39 - VAR19.VAR20);
    }
}
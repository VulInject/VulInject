static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    target_ulong VAR12;
    target_ulong VAR13;
    uint32_t VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19, VAR20 = -1;
    ExitStatus VAR21;
    int VAR22;
    int VAR23;
    VAR12 = VAR4->VAR24;
    VAR16 = VAR25.VAR26 + VAR27;
    VAR10.VAR4 = VAR4;
    VAR10.VAR24 = VAR12;
    VAR10.VAR28 = FUN3(VAR9);
    VAR10.VAR29 = VAR9->VAR29;
    VAR10.VAR30 = VAR7->VAR30;
    VAR10.VAR31 = -1;
    VAR10.VAR32 = -1;
    VAR22 = 0;
    VAR23 = VAR4->VAR33 & VAR34;
    if (VAR23 == 0)
    {
        VAR23 = VAR34;
    }
    if (FUN4(&VAR10, VAR12))
    {
        VAR13 = (1ULL << 41) - 1;
    }
    else
    {
        VAR13 = ~VAR35;
    }
    FUN5(VAR4);
    do
    {
        if (FUN6(!FUN7(&VAR7->VAR36)))
        {
            FUN8(VAR18, &VAR7->VAR36, VAR37)
            {
                if (VAR18->VAR24 == VAR10.VAR24)
                {
                    FUN9(&VAR10, VAR38, 0);
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR19 = VAR25.VAR39 - VAR25.VAR26;
            if (VAR20 < VAR19)
            {
                VAR20++;
                while (VAR20 < VAR19)
                    VAR25.VAR40[VAR20++] = 0;
            }
            VAR25.VAR41[VAR20] = VAR10.VAR24;
            VAR25.VAR40[VAR20] = 1;
            VAR25.VAR42[VAR20] = VAR22;
        }
        if (VAR22 + 1 == VAR23 && (VAR4->VAR33 & VAR43))
        {
            FUN10();
        }
        VAR14 = FUN11(VAR9, VAR10.VAR24);
        VAR22++;
        if (FUN6(FUN12(VAR44 | VAR45)))
        {
            FUN13(VAR10.VAR24);
        }
        FUN14(VAR10.VAR46);
        FUN14(VAR10.VAR47);
        FUN14(VAR10.VAR48);
        VAR10.VAR24 += 4;
        VAR21 = FUN15(VAR11, VAR14);
        if (!FUN16(VAR10.VAR47))
        {
            FUN17(VAR10.VAR47);
            FUN18(VAR10.VAR47);
        }
        if (!FUN16(VAR10.VAR46))
        {
            FUN18(VAR10.VAR46);
        }
        if (!FUN16(VAR10.VAR48))
        {
            FUN18(VAR10.VAR48);
        }
        if (VAR21 == VAR49 && ((VAR10.VAR24 & VAR13) == 0 || VAR25.VAR39 >= VAR16 || VAR22 >= VAR23 || VAR50 || VAR10.VAR30))
        {
            VAR21 = VAR51;
        }
    } while (VAR21 == VAR49);
    if (VAR4->VAR33 & VAR43)
    {
        FUN19();
    }
    switch (VAR21)
    {
    case VAR52:
    case VAR53:
        break;
    case VAR51:
        FUN20(VAR54, VAR10.VAR24);
    case VAR55:
        if (VAR10.VAR30)
        {
            FUN21(VAR38, 0);
        }
        else
        {
            FUN22(0);
        }
        break;
    default:
        FUN23();
    }
    FUN24(VAR4, VAR22);
    *VAR25.VAR39 = VAR56;
    if (VAR5)
    {
        VAR19 = VAR25.VAR39 - VAR25.VAR26;
        VAR20++;
        while (VAR20 <= VAR19)
            VAR25.VAR40[VAR20++] = 0;
    }
    else
    {
        VAR4->VAR57 = VAR10.VAR24 - VAR12;
        VAR4->VAR58 = VAR22;
    }
    if (FUN12(VAR59))
    {
        FUN25("", FUN26(VAR12));
        FUN27(VAR9, VAR12, VAR10.VAR24 - VAR12, 1);
        FUN25("");
    }
}
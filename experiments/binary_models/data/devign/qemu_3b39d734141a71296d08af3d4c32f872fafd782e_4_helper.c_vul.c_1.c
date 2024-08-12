static bool FUN1(VAR1 *VAR2, target_ulong VAR3, MMUAccessType VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, VAR8 *VAR9, int *VAR10, VAR11 *VAR12, VAR13 *VAR14, VAR15 *VAR16)
{
    VAR17 *VAR18 = FUN2(VAR2);
    VAR19 *VAR20 = FUN3(VAR18);
    ARMFaultType VAR21 = VAR22;
    uint32_t VAR23;
    uint32_t VAR24 = 0;
    int32_t VAR25, VAR26;
    uint32_t VAR27;
    uint64_t VAR28;
    int VAR29;
    hwaddr VAR30, VAR31, VAR32;
    uint32_t VAR33;
    target_ulong VAR34;
    uint32_t VAR35;
    int32_t VAR36 = 9;
    int32_t VAR37;
    int VAR38;
    int32_t VAR39 = 0;
    VAR40 *VAR41 = FUN4(VAR2, VAR5);
    int VAR42, VAR43, VAR44, VAR45;
    uint32_t VAR46 = FUN5(VAR2, VAR5);
    bool VAR47 = true;
    uint64_t VAR48;
    bool VAR49 = FUN6(VAR2, VAR46);
    if (VAR49)
    {
        VAR23 = 0;
        VAR37 = 64;
        if (VAR46 > 1)
        {
            if (VAR5 != VAR50)
            {
                VAR39 = FUN7(VAR41->VAR51, 20, 1);
            }
        }
        else
        {
            if (FUN7(VAR3, 55, 1))
            {
                VAR39 = FUN7(VAR41->VAR51, 38, 1);
            }
            else
            {
                VAR39 = FUN7(VAR41->VAR51, 37, 1);
            }
        }
        VAR39 *= 8;
        if (VAR46 > 1)
        {
            VAR47 = false;
        }
    }
    else
    {
        VAR23 = 1;
        VAR37 = 32;
        if (VAR46 == 2)
        {
            VAR47 = false;
        }
    }
    if (VAR49)
    {
        VAR25 = FUN8(VAR41->VAR51, 0, 6);
        VAR25 = FUN9(VAR25, 39);
        VAR25 = FUN10(VAR25, 16);
    }
    else if (VAR5 != VAR50)
    {
        VAR25 = FUN8(VAR41->VAR51, 0, 3);
    }
    else
    {
        bool VAR52 = FUN8(VAR41->VAR51, 4, 1);
        bool VAR53 = FUN8(VAR41->VAR51, 3, 1);
        VAR37 = 40;
        VAR25 = FUN11(VAR41->VAR51, 0, 4) + 8;
        if (VAR53 != VAR52)
        {
            FUN12(VAR54, "");
        }
    }
    VAR26 = FUN8(VAR41->VAR51, 16, 6);
    if (VAR49)
    {
        VAR26 = FUN9(VAR26, 39);
        VAR26 = FUN10(VAR26, 16);
    }
    if (VAR25 && !FUN7(VAR3, VAR37 - VAR25, VAR25 - VAR39))
    {
        VAR29 = 0;
    }
    else if (VAR47 && VAR26 && !FUN7(~VAR3, VAR37 - VAR26, VAR26 - VAR39))
    {
        VAR29 = 1;
    }
    else if (!VAR25)
    {
        VAR29 = 0;
    }
    else if (!VAR26 && VAR47)
    {
        VAR29 = 1;
    }
    else
    {
        VAR21 = VAR22;
        goto VAR55;
    }
    if (VAR29 == 0)
    {
        VAR28 = FUN13(VAR2, VAR5, 0);
        if (VAR46 < 2)
        {
            VAR24 = FUN8(VAR41->VAR51, 7, 1);
        }
        VAR38 = VAR37 - VAR25;
        VAR27 = FUN8(VAR41->VAR51, 14, 2);
        if (VAR27 == 1)
        {
            VAR36 = 13;
        }
        if (VAR27 == 2)
        {
            VAR36 = 11;
        }
    }
    else
    {
        assert(VAR47);
        VAR28 = FUN13(VAR2, VAR5, 1);
        VAR24 = FUN8(VAR41->VAR51, 23, 1);
        VAR38 = VAR37 - VAR26;
        VAR27 = FUN8(VAR41->VAR51, 30, 2);
        if (VAR27 == 3)
        {
            VAR36 = 13;
        }
        if (VAR27 == 1)
        {
            VAR36 = 11;
        }
    }
    if (VAR24)
    {
        goto VAR55;
    }
    if (VAR5 != VAR50)
    {
        VAR23 = 4 - (VAR38 - 4) / VAR36;
    }
    else
    {
        uint32_t VAR56 = FUN8(VAR41->VAR51, 6, 2);
        uint32_t VAR57;
        bool VAR58;
        if (!VAR49 || VAR36 == 9)
        {
            VAR57 = 2 - VAR56;
        }
        else
        {
            VAR57 = 3 - VAR56;
        }
        VAR58 = FUN14(VAR18, VAR49, VAR57, VAR38, VAR36);
        if (!VAR58)
        {
            VAR21 = VAR22;
            goto VAR55;
        }
        VAR23 = VAR57;
    }
    VAR32 = (1ULL << (VAR36 + 3)) - 1;
    VAR31 = (1ULL << (VAR38 - (VAR36 * (4 - VAR23)))) - 1;
    VAR30 = FUN7(VAR28, 0, 48);
    VAR30 &= ~VAR31;
    VAR48 = ((1ull << (VAR49 ? 48 : 40)) - 1) & ~VAR32;
    VAR33 = FUN15(VAR2, VAR5) ? 0 : (1 << 4);
    for (;;)
    {
        uint64_t VAR59;
        bool VAR60;
        VAR30 |= (VAR3 >> (VAR36 * (4 - VAR23))) & VAR31;
        VAR30 &= ~7ULL;
        VAR60 = FUN8(VAR33, 4, 1);
        VAR59 = FUN16(VAR20, VAR30, !VAR60, VAR5, VAR14);
        if (VAR14->VAR61)
        {
            goto VAR55;
        }
        if (!(VAR59 & 1) || (!(VAR59 & 2) && (VAR23 == 3)))
        {
            goto VAR55;
        }
        VAR30 = VAR59 & VAR48;
        if ((VAR59 & 2) && (VAR23 < 3))
        {
            VAR33 |= FUN7(VAR59, 59, 5);
            VAR23++;
            VAR31 = VAR32;
            continue;
        }
        VAR34 = (1ULL << ((VAR36 * (4 - VAR23)) + 3));
        VAR30 |= (VAR3 & (VAR34 - 1));
        VAR35 = FUN7(VAR59, 2, 10) | (FUN7(VAR59, 52, 12) << 10);
        if (VAR5 == VAR50)
        {
            break;
        }
        VAR35 |= FUN8(VAR33, 0, 2) << 11;
        VAR35 |= FUN8(VAR33, 3, 1) << 5;
        if (FUN8(VAR33, 2, 1))
        {
            VAR35 &= ~(1 << 4);
        }
        VAR35 |= VAR60 << 3;
        break;
    }
    VAR21 = VAR62;
    if ((VAR35 & (1 << 8)) == 0)
    {
        goto VAR55;
    }
    VAR42 = FUN8(VAR35, 4, 2);
    VAR44 = FUN8(VAR35, 12, 1);
    if (VAR5 == VAR50)
    {
        VAR43 = true;
        *VAR10 = FUN17(VAR2, VAR42, VAR44);
    }
    else
    {
        VAR43 = FUN8(VAR35, 3, 1);
        VAR45 = FUN8(VAR35, 11, 1);
        *VAR10 = FUN18(VAR2, VAR5, VAR49, VAR42, VAR43, VAR44, VAR45);
    }
    VAR21 = VAR63;
    if (!(*VAR10 & (1 << VAR4)))
    {
        goto VAR55;
    }
    if (VAR43)
    {
        VAR9->VAR64 = false;
    }
    if (VAR16 != NULL)
    {
        if (VAR5 == VAR50)
        {
            VAR16->VAR35 = FUN19(VAR2, FUN8(VAR35, 0, 4));
        }
        else
        {
            uint8_t VAR65 = FUN8(VAR35, 0, 3);
            uint64_t VAR66 = VAR2->VAR67.VAR68[FUN5(VAR2, VAR5)];
            assert(VAR65 <= 7);
            VAR16->VAR35 = FUN7(VAR66, VAR65 * 8, 8);
        }
        VAR16->VAR69 = FUN8(VAR35, 6, 2);
    }
    *VAR7 = VAR30;
    *VAR12 = VAR34;
    return false;
VAR55:
    VAR14->VAR70 = VAR21;
    VAR14->VAR23 = VAR23;
    VAR14->VAR71 = VAR14->VAR61 || (VAR5 == VAR50);
    return true;
}
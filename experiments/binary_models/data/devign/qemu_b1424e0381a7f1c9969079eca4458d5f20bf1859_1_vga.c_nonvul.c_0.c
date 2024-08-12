static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, update, VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    ram_addr_t VAR17, VAR18, VAR19, VAR20;
    int VAR21, VAR22, VAR23;
    VAR24 *VAR25;
    uint32_t VAR26, VAR27, VAR28;
    VAR29 *VAR30;
    static const bool VAR31 = false;
    static const bool VAR31 = true;
    VAR3 |= FUN2(VAR2);
    if (!VAR3)
        FUN3(VAR2);
    VAR2->FUN4(VAR2, &VAR11, &VAR12);
    VAR21 = VAR11;
    VAR13 = (VAR2->VAR32[VAR33] >> 5) & 3;
    VAR8 = (VAR2->VAR34[VAR35] >> 7);
    if (VAR13 != 1)
    {
        VAR22 = (((VAR2->VAR34[VAR35] & 0x1f) + 1) << VAR8) - 1;
    }
    else
    {
        VAR22 = VAR8;
    }
    VAR23 = VAR22;
    if (VAR13 != VAR2->VAR13 || VAR8 != VAR2->VAR8)
    {
        VAR3 = 1;
        VAR2->VAR13 = VAR13;
        VAR2->VAR8 = VAR8;
    }
    if (VAR13 == 0)
    {
        if (VAR2->VAR36[VAR37] & 8)
        {
            VAR21 <<= 1;
        }
    }
    else if (VAR13 == 1)
    {
        if (VAR2->VAR36[VAR37] & 8)
        {
            VAR21 <<= 1;
        }
    }
    VAR10 = VAR2->FUN5(VAR2);
    if (VAR2->VAR14 != VAR2->VAR38 || VAR21 != VAR2->VAR39 || VAR12 != VAR2->VAR40 || VAR2->VAR41 != VAR10)
    {
        if (VAR10 == 32 || (VAR10 == 16 && !VAR31))
        {
            FUN6(VAR2->VAR42);
            VAR2->VAR42->VAR43 = FUN7(VAR21, VAR12, VAR10, VAR2->VAR14, VAR2->VAR44 + (VAR2->VAR45 * 4), VAR31);
            FUN8(VAR2->VAR42);
        }
        else
        {
            FUN9(VAR2->VAR42, VAR21, VAR12);
        }
        VAR2->VAR46 = VAR21;
        VAR2->VAR47 = VAR12;
        VAR2->VAR39 = VAR21;
        VAR2->VAR40 = VAR12;
        VAR2->VAR38 = VAR2->VAR14;
        VAR2->VAR41 = VAR10;
        VAR3 = 1;
    }
    else if (FUN10(VAR2->VAR42->VAR43) && (VAR3 || FUN11(VAR2->VAR42) != VAR2->VAR44 + (VAR2->VAR45 * 4)))
    {
        FUN6(VAR2->VAR42);
        VAR2->VAR42->VAR43 = FUN7(VAR21, VAR12, VAR10, VAR2->VAR14, VAR2->VAR44 + (VAR2->VAR45 * 4), VAR31);
        FUN12(VAR2->VAR42);
    }
    VAR2->VAR48 = VAR49[FUN13(VAR2->VAR42)];
    if (VAR13 == 0)
    {
        VAR3 |= FUN14(VAR2);
        if (VAR2->VAR36[VAR37] & 8)
        {
            VAR26 = VAR50;
        }
        else
        {
            VAR26 = VAR51;
        }
        VAR16 = 4;
    }
    else if (VAR13 == 1)
    {
        VAR3 |= FUN14(VAR2);
        if (VAR2->VAR36[VAR37] & 8)
        {
            VAR26 = VAR52;
        }
        else
        {
            VAR26 = VAR53;
        }
        VAR16 = 4;
    }
    else
    {
        switch (VAR2->FUN5(VAR2))
        {
        default:
        case 0:
            VAR3 |= FUN15(VAR2);
            VAR26 = VAR54;
            VAR16 = 4;
            break;
        case 8:
            VAR3 |= FUN15(VAR2);
            VAR26 = VAR55;
            VAR16 = 8;
            break;
        case 15:
            VAR26 = VAR56;
            VAR16 = 16;
            break;
        case 16:
            VAR26 = VAR57;
            VAR16 = 16;
            break;
        case 24:
            VAR26 = VAR58;
            VAR16 = 24;
            break;
        case 32:
            VAR26 = VAR59;
            VAR16 = 32;
            break;
        }
    }
    VAR30 = VAR60[VAR26 * VAR61 + FUN13(VAR2->VAR42)];
    if (!FUN10(VAR2->VAR42->VAR43) && VAR2->VAR62)
        VAR2->FUN16(VAR2);
    VAR14 = VAR2->VAR14;
    FUN17("", VAR11, VAR12, VAR26, VAR14, VAR2->VAR34[9], VAR2->VAR34[VAR63], VAR2->VAR64, VAR2->VAR36[VAR37]);
    VAR27 = (VAR2->VAR45 * 4);
    VAR15 = (VAR11 * VAR16 + 7) / 8;
    VAR7 = -1;
    VAR19 = -1;
    VAR20 = 0;
    VAR25 = FUN11(VAR2->VAR42);
    VAR6 = FUN18(VAR2->VAR42);
    VAR4 = 0;
    for (VAR5 = 0; VAR5 < VAR12; VAR5++)
    {
        VAR28 = VAR27;
        if (!(VAR2->VAR34[VAR63] & 1))
        {
            int VAR65;
            VAR65 = 14 + ((VAR2->VAR34[VAR63] >> 6) & 1);
            VAR28 = (VAR28 & ~(1 << VAR65)) | ((VAR4 & 1) << VAR65);
        }
        if (!(VAR2->VAR34[VAR63] & 2))
        {
            VAR28 = (VAR28 & ~0x8000) | ((VAR4 & 2) << 14);
        }
        update = VAR3;
        VAR17 = VAR28;
        VAR18 = VAR28 + VAR15 - 1;
        update |= FUN19(&VAR2->VAR66, VAR17, VAR18 - VAR17, VAR67);
        update |= (VAR2->VAR68[VAR5 >> 5] >> (VAR5 & 0x1f)) & 1;
        if (update)
        {
            if (VAR7 < 0)
                VAR7 = VAR5;
            if (VAR17 < VAR19)
                VAR19 = VAR17;
            if (VAR18 > VAR20)
                VAR20 = VAR18;
            if (!(FUN10(VAR2->VAR42->VAR43)))
            {
                FUN20(VAR2, VAR25, VAR2->VAR44 + VAR28, VAR11);
                if (VAR2->VAR69)
                    VAR2->FUN21(VAR2, VAR25, VAR5);
            }
        }
        else
        {
            if (VAR7 >= 0)
            {
                FUN22(VAR2->VAR42, 0, VAR7, VAR21, VAR5 - VAR7);
                VAR7 = -1;
            }
        }
        if (!VAR23)
        {
            VAR9 = (VAR2->VAR34[VAR63] & 3) ^ 3;
            if ((VAR4 & VAR9) == VAR9)
                VAR27 += VAR14;
            VAR4++;
            VAR23 = VAR22;
        }
        else
        {
            VAR23--;
        }
        if (VAR5 == VAR2->VAR64)
            VAR27 = 0;
        VAR25 += VAR6;
    }
    if (VAR7 >= 0)
    {
        FUN22(VAR2->VAR42, 0, VAR7, VAR21, VAR5 - VAR7);
    }
    if (VAR20 >= VAR19)
    {
        FUN23(&VAR2->VAR66, VAR19, VAR20 - VAR19, VAR67);
    }
    memset(VAR2->VAR68, 0, ((VAR12 + 31) >> 5) * 4);
}
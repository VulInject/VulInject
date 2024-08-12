static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2->VAR6);
    int VAR7, VAR8, update, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    ram_addr_t VAR20, VAR21;
    VAR22 *VAR23 = NULL;
    int VAR24, VAR25, VAR26;
    VAR27 *VAR28;
    uint32_t VAR29, VAR30, VAR31;
    VAR32 *VAR33 = NULL;
    bool VAR34;
    pixman_format_code_t VAR35;
    bool VAR36 = !VAR2->VAR37;
    bool VAR36 = VAR2->VAR37;
    VAR3 |= FUN3(VAR2);
    VAR2->FUN4(VAR2, &VAR14, &VAR15);
    VAR24 = VAR14;
    VAR16 = (VAR2->VAR38[VAR39] >> 5) & 3;
    VAR11 = (VAR2->VAR40[VAR41] >> 7);
    if (VAR16 != 1)
    {
        VAR25 = (((VAR2->VAR40[VAR41] & 0x1f) + 1) << VAR11) - 1;
    }
    else
    {
        VAR25 = VAR11;
    }
    VAR26 = VAR25;
    if (VAR16 != VAR2->VAR16 || VAR11 != VAR2->VAR11)
    {
        VAR3 = 1;
        VAR2->VAR16 = VAR16;
        VAR2->VAR11 = VAR11;
    }
    if (VAR16 == 0)
    {
        if (FUN5(VAR2, VAR42) & 8)
        {
            VAR24 <<= 1;
        }
    }
    else if (VAR16 == 1)
    {
        if (FUN5(VAR2, VAR42) & 8)
        {
            VAR24 <<= 1;
        }
    }
    VAR13 = VAR2->FUN6(VAR2);
    VAR35 = FUN7(VAR13, !VAR36);
    if (VAR35)
    {
        VAR34 = FUN8(VAR2->VAR6, VAR35) && !VAR2->VAR43;
    }
    else
    {
        VAR34 = false;
    }
    if (VAR2->VAR17 != VAR2->VAR44 || VAR24 != VAR2->VAR45 || VAR15 != VAR2->VAR46 || VAR2->VAR47 != VAR13 || VAR2->VAR48 != VAR36 || VAR34 != FUN9(VAR5))
    {
        if (VAR34)
        {
            VAR5 = FUN10(VAR24, VAR15, VAR35, VAR2->VAR17, VAR2->VAR49 + (VAR2->VAR50 * 4));
            FUN11(VAR2->VAR6, VAR5);
        }
        else
        {
            FUN12(VAR2->VAR6, VAR24, VAR15);
            VAR5 = FUN2(VAR2->VAR6);
        }
        VAR2->VAR51 = VAR24;
        VAR2->VAR52 = VAR15;
        VAR2->VAR45 = VAR24;
        VAR2->VAR46 = VAR15;
        VAR2->VAR44 = VAR2->VAR17;
        VAR2->VAR47 = VAR13;
        VAR2->VAR48 = VAR36;
        VAR3 = 1;
    }
    else if (FUN9(VAR5) && (VAR3 || FUN13(VAR5) != VAR2->VAR49 + (VAR2->VAR50 * 4)))
    {
        pixman_format_code_t VAR35 = FUN7(VAR13, !VAR36);
        VAR5 = FUN10(VAR24, VAR15, VAR35, VAR2->VAR17, VAR2->VAR49 + (VAR2->VAR50 * 4));
        FUN11(VAR2->VAR6, VAR5);
    }
    if (VAR16 == 0)
    {
        VAR3 |= FUN14(VAR2);
        if (FUN5(VAR2, VAR42) & 8)
        {
            VAR29 = VAR53;
        }
        else
        {
            VAR29 = VAR54;
        }
        VAR19 = 4;
    }
    else if (VAR16 == 1)
    {
        VAR3 |= FUN14(VAR2);
        if (FUN5(VAR2, VAR42) & 8)
        {
            VAR29 = VAR55;
        }
        else
        {
            VAR29 = VAR56;
        }
        VAR19 = 4;
    }
    else
    {
        switch (VAR2->FUN6(VAR2))
        {
        default:
        case 0:
            VAR3 |= FUN15(VAR2);
            VAR29 = VAR57;
            VAR19 = 4;
            break;
        case 8:
            VAR3 |= FUN15(VAR2);
            VAR29 = VAR58;
            VAR19 = 8;
            break;
        case 15:
            VAR29 = VAR2->VAR37 ? VAR59 : VAR60;
            VAR19 = 16;
            break;
        case 16:
            VAR29 = VAR2->VAR37 ? VAR61 : VAR62;
            VAR19 = 16;
            break;
        case 24:
            VAR29 = VAR2->VAR37 ? VAR63 : VAR64;
            VAR19 = 24;
            break;
        case 32:
            VAR29 = VAR2->VAR37 ? VAR65 : VAR66;
            VAR19 = 32;
            break;
        }
    }
    VAR33 = VAR67[VAR29];
    if (!FUN9(VAR5) && VAR2->VAR68)
    {
        VAR2->FUN16(VAR2);
    }
    VAR17 = VAR2->VAR17;
    FUN17("", VAR14, VAR15, VAR29, VAR17, VAR2->VAR40[9], VAR2->VAR40[VAR69], VAR2->VAR70, FUN5(VAR2, VAR42));
    VAR30 = (VAR2->VAR50 * 4);
    VAR18 = FUN18(VAR14 * VAR19, 8);
    VAR10 = -1;
    VAR28 = FUN13(VAR5);
    VAR9 = FUN19(VAR5);
    VAR7 = 0;
    if (!VAR3)
    {
        ram_addr_t VAR71 = VAR30;
        ram_addr_t VAR72 = VAR30 + VAR17 * VAR15;
        FUN20(VAR2);
        if (VAR2->VAR70 < VAR15)
        {
            VAR71 = 0;
        }
        VAR23 = FUN21(&VAR2->VAR73, VAR71, VAR72 - VAR71, VAR74);
    }
    for (VAR8 = 0; VAR8 < VAR15; VAR8++)
    {
        VAR31 = VAR30;
        if (!(VAR2->VAR40[VAR69] & 1))
        {
            int VAR75;
            VAR75 = 14 + ((VAR2->VAR40[VAR69] >> 6) & 1);
            VAR31 = (VAR31 & ~(1 << VAR75)) | ((VAR7 & 1) << VAR75);
        }
        if (!(VAR2->VAR40[VAR69] & 2))
        {
            VAR31 = (VAR31 & ~0x8000) | ((VAR7 & 2) << 14);
        }
        update = VAR3;
        VAR20 = VAR31;
        VAR21 = VAR31 + VAR18 - 1;
        if (VAR3)
        {
            update = 1;
        }
        else
        {
            update = FUN22(&VAR2->VAR73, VAR23, VAR20, VAR21 - VAR20);
        }
        update |= FUN23(VAR2, VAR8);
        if (update)
        {
            if (VAR10 < 0)
                VAR10 = VAR8;
            if (!(FUN9(VAR5)))
            {
                FUN24(VAR2, VAR28, VAR2->VAR49 + VAR31, VAR14);
                if (VAR2->VAR76)
                    VAR2->FUN25(VAR2, VAR28, VAR8);
            }
        }
        else
        {
            if (VAR10 >= 0)
            {
                FUN26(VAR2->VAR6, 0, VAR10, VAR24, VAR8 - VAR10);
                VAR10 = -1;
            }
        }
        if (!VAR26)
        {
            VAR12 = (VAR2->VAR40[VAR69] & 3) ^ 3;
            if ((VAR7 & VAR12) == VAR12)
                VAR30 += VAR17;
            VAR7++;
            VAR26 = VAR25;
        }
        else
        {
            VAR26--;
        }
        if (VAR8 == VAR2->VAR70)
            VAR30 = 0;
        VAR28 += VAR9;
    }
    if (VAR10 >= 0)
    {
        FUN26(VAR2->VAR6, 0, VAR10, VAR24, VAR8 - VAR10);
    }
    FUN27(VAR23);
    memset(VAR2->VAR77, 0, sizeof(VAR2->VAR77));
}
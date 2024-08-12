FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    uint32_t VAR10;
    unsigned int VAR11;
    int VAR12, VAR13;
    struct DisasContext VAR14;
    struct VAR15 *VAR16 = &VAR14;
    uint32_t VAR17;
    target_ulong VAR18;
    int VAR19;
    int VAR20;
    if (VAR9->VAR21[VAR22] == 32)
    {
        VAR16->VAR23 = VAR24;
        VAR16->VAR25 = 0;
    }
    else
    {
        VAR16->VAR23 = VAR26;
        VAR16->VAR25 = 1;
    }
    VAR10 = VAR4->VAR27 & ~1;
    VAR16->VAR2 = VAR2;
    VAR16->VAR4 = VAR4;
    VAR16->VAR28 = VAR29;
    VAR16->VAR30 = VAR10;
    VAR16->VAR27 = VAR10;
    VAR16->VAR31 = VAR7->VAR31;
    VAR16->VAR32 = 1;
    VAR16->VAR33 = 1;
    VAR16->VAR34 = VAR4->VAR35 & VAR36;
    VAR16->VAR37 = 0;
    VAR16->VAR38 = 0;
    VAR16->VAR39 = 0;
    VAR16->VAR40 = 0;
    FUN3(VAR16, VAR41, 4);
    VAR16->VAR42 = -1;
    VAR16->VAR43 = VAR4->VAR35 & (VAR44 | VAR45 | VAR46 | VAR36 | VAR47);
    VAR16->VAR48 = !!(VAR4->VAR35 & 7);
    if (VAR16->VAR48)
    {
        VAR16->VAR49 = VAR50;
    }
    else
    {
        VAR16->VAR49 = VAR51;
    }
    VAR16->VAR52 = 0;
    if (FUN4(VAR53))
    {
        FUN5("" VAR54 ""
                 ""
                 ""
                 ""
                 ""
                 "",
                 VAR5, VAR16->VAR27, VAR16->VAR30, (VAR55)VAR4->VAR35, VAR9->VAR56, (unsigned)VAR4->VAR35 & 7, VAR9->VAR21[VAR57], VAR9->VAR21[VAR58], VAR9->VAR21[VAR59], VAR9->VAR60[0], VAR9->VAR60[1], VAR9->VAR60[2], VAR9->VAR60[3], VAR9->VAR60[4], VAR9->VAR60[5], VAR9->VAR60[6], VAR9->VAR60[7], VAR9->VAR60[8], VAR9->VAR60[9], VAR9->VAR60[10], VAR9->VAR60[11], VAR9->VAR60[12], VAR9->VAR60[13], VAR9->VAR60[14], VAR9->VAR60[15]);
        FUN5("");
        FUN5("", FUN6(VAR10));
    }
    VAR17 = (VAR10 & VAR61) + VAR62;
    VAR13 = -1;
    VAR19 = 0;
    VAR20 = VAR4->VAR63 & VAR64;
    if (VAR20 == 0)
    {
        VAR20 = VAR64;
    }
    FUN7(VAR4);
    do
    {
        FUN8(VAR9, VAR16);
        if (VAR5)
        {
            VAR12 = FUN9();
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                {
                    VAR65.VAR66[VAR13++] = 0;
                }
            }
            if (VAR16->VAR48 == 1)
            {
                VAR65.VAR67[VAR13] = VAR16->VAR30 | 1;
            }
            else
            {
                VAR65.VAR67[VAR13] = VAR16->VAR27;
            }
            VAR65.VAR66[VAR13] = 1;
            VAR65.VAR68[VAR13] = VAR19;
        }
        FUN10("", VAR16->VAR27);
        if (VAR19 + 1 == VAR20 && (VAR4->VAR63 & VAR69))
        {
            FUN11();
        }
        VAR16->VAR70 = 1;
        VAR11 = VAR16->FUN12(VAR9, VAR16);
        VAR16->VAR30 = VAR16->VAR27;
        VAR16->VAR27 += VAR11;
        if (VAR16->VAR70)
        {
            FUN13(VAR16);
        }
        VAR19++;
        if (VAR16->VAR48)
        {
            VAR16->VAR48--;
            if (VAR16->VAR48 == 0)
            {
                if (VAR4->VAR35 & 7)
                {
                    FUN14(VAR71, FUN15(0));
                }
                if (VAR16->VAR52 || !VAR16->VAR33 || (VAR16->VAR34 != (VAR4->VAR35 & VAR36)))
                {
                    FUN16(VAR16);
                }
                if (VAR16->VAR25)
                {
                    VAR16->VAR25 = 0;
                    FUN14(VAR72, FUN15(0));
                }
                if (VAR16->VAR49 == VAR73)
                {
                    VAR74 *VAR75 = FUN17();
                    FUN18(VAR16);
                    FUN19(VAR76, VAR77, 0, VAR75);
                    FUN20(VAR16, 1, VAR16->VAR78);
                    FUN21(VAR75);
                    FUN20(VAR16, 0, VAR16->VAR27);
                    VAR16->VAR28 = VAR79;
                    VAR16->VAR49 = VAR51;
                }
                else if (VAR16->VAR49 == VAR80)
                {
                    FUN18(VAR16);
                    FUN20(VAR16, 0, VAR16->VAR78);
                    VAR16->VAR28 = VAR79;
                    VAR16->VAR49 = VAR51;
                }
                else
                {
                    FUN22(VAR81, FUN15(VAR16->VAR27));
                    VAR16->VAR28 = VAR82;
                }
                break;
            }
        }
        if (!(VAR4->VAR27 & 1) && VAR7->VAR31)
        {
            break;
        }
    } while (!VAR16->VAR28 && !VAR16->VAR52 && !FUN23() && !VAR83 && (VAR16->VAR27 < VAR17) && VAR19 < VAR20);
    if (VAR16->VAR25)
    {
        FUN14(VAR72, FUN15(0));
    }
    VAR18 = VAR16->VAR27;
    if (VAR4->VAR63 & VAR69)
        FUN24();
    if (VAR16->VAR28 == VAR29 && (VAR16->VAR52 || !VAR16->VAR33 || (VAR16->VAR34 != (VAR4->VAR35 & VAR36))))
    {
        VAR16->VAR28 = VAR84;
        FUN25(VAR85, VAR18);
    }
    if (VAR16->VAR48 == 1)
    {
        FUN14(VAR71, FUN15(VAR16->VAR27 - VAR16->VAR30));
        FUN16(VAR16);
    }
    FUN18(VAR16);
    if (FUN26(VAR7->VAR31))
    {
        if (VAR16->VAR28 == VAR29)
        {
            FUN25(VAR85, VAR18);
        }
        FUN27(VAR86);
    }
    else
    {
        switch (VAR16->VAR28)
        {
        case VAR29:
            FUN20(VAR16, 1, VAR18);
            break;
        default:
        case VAR82:
        case VAR84:
            FUN28(0);
            break;
        case VAR87:
        case VAR79:
            break;
        }
    }
    FUN29(VAR4, VAR19);
    if (VAR5)
    {
        VAR12 = FUN9();
        VAR13++;
        while (VAR13 <= VAR12)
        {
            VAR65.VAR66[VAR13++] = 0;
        }
    }
    else
    {
        VAR4->VAR88 = VAR16->VAR27 - VAR10;
        VAR4->VAR89 = VAR19;
    }
    if (FUN4(VAR53))
    {
        FUN30(VAR9, VAR10, VAR16->VAR27 - VAR10, VAR9->VAR21[VAR22]);
        FUN5("", VAR16->VAR27 - VAR10, FUN9());
    }
}
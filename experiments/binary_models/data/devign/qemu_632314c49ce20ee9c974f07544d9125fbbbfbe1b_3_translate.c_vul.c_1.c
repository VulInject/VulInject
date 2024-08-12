FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    uint32_t VAR8;
    unsigned int VAR9;
    int VAR10, VAR11;
    struct DisasContext VAR12;
    struct VAR13 *VAR14 = &VAR12;
    uint32_t VAR15;
    target_ulong VAR16;
    int VAR17;
    int VAR18;
    FUN2(VAR19);
    if (VAR2->VAR20[VAR21] == 32)
    {
        VAR14->VAR22 = VAR23;
        VAR14->VAR24 = 0;
    }
    else
    {
        VAR14->VAR22 = VAR25;
        VAR14->VAR24 = 1;
    }
    VAR8 = VAR4->VAR26 & ~1;
    VAR14->VAR2 = VAR2;
    VAR14->VAR4 = VAR4;
    VAR7 = VAR27.VAR28 + VAR29;
    VAR14->VAR30 = VAR31;
    VAR14->VAR32 = VAR8;
    VAR14->VAR26 = VAR8;
    VAR14->VAR33 = VAR2->VAR33;
    VAR14->VAR34 = 1;
    VAR14->VAR35 = 1;
    VAR14->VAR36 = VAR4->VAR37 & VAR38;
    VAR14->VAR39 = 0;
    VAR14->VAR40 = 0;
    VAR14->VAR41 = 0;
    VAR14->VAR42 = 0;
    FUN3(VAR14, VAR43, 4);
    VAR14->VAR44 = -1;
    VAR14->VAR45 = VAR4->VAR37 & (VAR46 | VAR47 | VAR48 | VAR38 | VAR49);
    VAR14->VAR50 = !!(VAR4->VAR37 & 7);
    if (VAR14->VAR50)
    {
        VAR14->VAR51 = VAR52;
    }
    else
    {
        VAR14->VAR51 = VAR53;
    }
    VAR14->VAR54 = 0;
    if (FUN4(VAR55))
    {
        FUN5("" VAR56 ""
                 ""
                 ""
                 ""
                 ""
                 "",
                 VAR5, VAR14->VAR26, VAR14->VAR32, (VAR57)VAR4->VAR37, VAR2->VAR58, (unsigned)VAR4->VAR37 & 7, VAR2->VAR20[VAR59], VAR2->VAR20[VAR60], VAR2->VAR20[VAR61], VAR2->VAR62[0], VAR2->VAR62[1], VAR2->VAR62[2], VAR2->VAR62[3], VAR2->VAR62[4], VAR2->VAR62[5], VAR2->VAR62[6], VAR2->VAR62[7], VAR2->VAR62[8], VAR2->VAR62[9], VAR2->VAR62[10], VAR2->VAR62[11], VAR2->VAR62[12], VAR2->VAR62[13], VAR2->VAR62[14], VAR2->VAR62[15]);
        FUN5("");
        FUN5("", FUN6(VAR8));
    }
    VAR15 = (VAR8 & VAR63) + VAR64;
    VAR11 = -1;
    VAR17 = 0;
    VAR18 = VAR4->VAR65 & VAR66;
    if (VAR18 == 0)
    {
        VAR18 = VAR66;
    }
    FUN7();
    do
    {
        FUN8(VAR2, VAR14);
        if (VAR5)
        {
            VAR10 = VAR27.VAR67 - VAR27.VAR28;
            if (VAR11 < VAR10)
            {
                VAR11++;
                while (VAR11 < VAR10)
                {
                    VAR27.VAR68[VAR11++] = 0;
                }
            }
            if (VAR14->VAR50 == 1)
            {
                VAR27.VAR69[VAR11] = VAR14->VAR32 | 1;
            }
            else
            {
                VAR27.VAR69[VAR11] = VAR14->VAR26;
            }
            VAR27.VAR68[VAR11] = 1;
            VAR27.VAR70[VAR11] = VAR17;
        }
        FUN9("", VAR14->VAR26);
        if (VAR17 + 1 == VAR18 && (VAR4->VAR65 & VAR71))
        {
            FUN10();
        }
        VAR14->VAR72 = 1;
        VAR9 = VAR14->FUN11(VAR2, VAR14);
        VAR14->VAR32 = VAR14->VAR26;
        VAR14->VAR26 += VAR9;
        if (VAR14->VAR72)
        {
            FUN12(VAR14);
        }
        VAR17++;
        if (VAR14->VAR50)
        {
            VAR14->VAR50--;
            if (VAR14->VAR50 == 0)
            {
                if (VAR4->VAR37 & 7)
                {
                    FUN13(VAR73, FUN14(0));
                }
                if (VAR14->VAR54 || !VAR14->VAR35 || (VAR14->VAR36 != (VAR4->VAR37 & VAR38)))
                {
                    FUN15(VAR14);
                }
                if (VAR14->VAR24)
                {
                    VAR14->VAR24 = 0;
                    FUN13(VAR74, FUN14(0));
                }
                if (VAR14->VAR51 == VAR75)
                {
                    int VAR76;
                    VAR76 = FUN16();
                    FUN17(VAR14);
                    FUN18(VAR77, VAR78, 0, VAR76);
                    FUN19(VAR14, 1, VAR14->VAR79);
                    FUN20(VAR76);
                    FUN19(VAR14, 0, VAR14->VAR26);
                    VAR14->VAR30 = VAR80;
                    VAR14->VAR51 = VAR53;
                }
                else if (VAR14->VAR51 == VAR81)
                {
                    FUN17(VAR14);
                    FUN19(VAR14, 0, VAR14->VAR79);
                    VAR14->VAR30 = VAR80;
                    VAR14->VAR51 = VAR53;
                }
                else
                {
                    FUN21(VAR82, FUN14(VAR14->VAR26));
                    VAR14->VAR30 = VAR83;
                }
                break;
            }
        }
        if (!(VAR4->VAR26 & 1) && VAR2->VAR33)
        {
            break;
        }
    } while (!VAR14->VAR30 && !VAR14->VAR54 && VAR27.VAR67 < VAR7 && !VAR84 && (VAR14->VAR26 < VAR15) && VAR17 < VAR18);
    if (VAR14->VAR24)
    {
        FUN13(VAR74, FUN14(0));
    }
    VAR16 = VAR14->VAR26;
    if (VAR4->VAR65 & VAR71)
        FUN22();
    if (VAR14->VAR30 == VAR31 && (VAR14->VAR54 || !VAR14->VAR35 || (VAR14->VAR36 != (VAR4->VAR37 & VAR38))))
    {
        VAR14->VAR30 = VAR85;
        FUN23(VAR86, VAR16);
    }
    if (VAR14->VAR50 == 1)
    {
        FUN13(VAR73, FUN14(VAR14->VAR26 - VAR14->VAR32));
        FUN15(VAR14);
    }
    FUN17(VAR14);
    if (FUN24(VAR2->VAR33))
    {
        if (VAR14->VAR30 == VAR31)
        {
            FUN23(VAR86, VAR16);
        }
        FUN25(VAR87);
    }
    else
    {
        switch (VAR14->VAR30)
        {
        case VAR31:
            FUN19(VAR14, 1, VAR16);
            break;
        default:
        case VAR83:
        case VAR85:
            FUN26(0);
            break;
        case VAR88:
        case VAR80:
            break;
        }
    }
    FUN27(VAR4, VAR17);
    *VAR27.VAR67 = VAR89;
    if (VAR5)
    {
        VAR10 = VAR27.VAR67 - VAR27.VAR28;
        VAR11++;
        while (VAR11 <= VAR10)
        {
            VAR27.VAR68[VAR11++] = 0;
        }
    }
    else
    {
        VAR4->VAR90 = VAR14->VAR26 - VAR8;
        VAR4->VAR91 = VAR17;
    }
    if (FUN4(VAR55))
    {
        FUN28(VAR2, VAR8, VAR14->VAR26 - VAR8, VAR14->VAR2->VAR20[VAR21]);
        FUN5("", VAR14->VAR26 - VAR8, VAR27.VAR67 - VAR27.VAR28);
    }
}
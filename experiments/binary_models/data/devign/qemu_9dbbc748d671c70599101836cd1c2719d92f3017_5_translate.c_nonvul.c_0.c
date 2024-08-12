static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13;
    int VAR14, VAR15;
    target_ulong VAR16;
    target_ulong VAR17;
    int VAR18;
    int VAR19;
    if (FUN3(VAR4->VAR20))
    {
        FUN4(VAR2, VAR4, VAR5);
        return;
    }
    VAR16 = VAR4->VAR21;
    VAR11->VAR4 = VAR4;
    VAR11->VAR22 = VAR23;
    VAR11->VAR21 = VAR16;
    VAR11->VAR24 = VAR7->VAR24;
    VAR11->VAR25 = 0;
    VAR11->VAR26 = 0;
    VAR11->VAR27 = FUN5(VAR9, 3);
    VAR11->VAR28 = FUN6(VAR4->VAR20);
    VAR11->VAR29 = FUN7(VAR4->VAR20);
    VAR11->VAR30 = (FUN8(VAR4->VAR20) & 0xf) << 1;
    VAR11->VAR31 = FUN8(VAR4->VAR20) >> 4;
    VAR11->VAR32 = FUN9(VAR4->VAR20);
    VAR11->VAR33 = FUN10(VAR11->VAR32);
    VAR11->VAR34 = (VAR11->VAR33 == 0);
    VAR11->VAR35 = FUN11(VAR4->VAR20);
    VAR11->VAR36 = FUN12(VAR4->VAR20);
    VAR11->VAR37 = FUN13(VAR4->VAR20);
    VAR11->VAR38 = FUN14(VAR4->VAR20);
    VAR11->VAR39 = FUN15(VAR4->VAR20);
    VAR11->VAR40 = FUN16(VAR4->VAR20);
    VAR11->VAR41 = VAR2->VAR41;
    VAR11->VAR42 = VAR9->VAR42;
    VAR11->VAR43 = FUN17(VAR4->VAR20);
    VAR11->VAR44 = FUN18(VAR4->VAR20);
    VAR11->VAR45 = false;
    VAR11->VAR46 = false;
    VAR47 = FUN19();
    VAR48 = FUN19();
    VAR49 = FUN20();
    VAR50 = FUN20();
    VAR51 = VAR49;
    VAR52 = VAR50;
    VAR53 = FUN20();
    VAR17 = (VAR16 & VAR54) + VAR55;
    VAR15 = -1;
    VAR18 = 0;
    VAR19 = VAR4->VAR56 & VAR57;
    if (VAR19 == 0)
        VAR19 = VAR57;
    FUN21(VAR4);
    FUN22();
    if (VAR11->VAR30 || VAR11->VAR31)
    {
        TCGv_i32 VAR58 = FUN19();
        FUN23(VAR58, 0);
        FUN24(VAR58, VAR59);
    }
    do
    {
        if (VAR11->VAR21 >= 0xffff0000)
        {
            FUN25(VAR60);
            VAR11->VAR22 = VAR61;
            break;
        }
        if (VAR11->VAR21 >= 0xfffffff0 && FUN26(VAR11, VAR62))
        {
            FUN25(VAR63);
            VAR11->VAR22 = VAR61;
            break;
        }
        if (FUN27(!FUN28(&VAR7->VAR64)))
        {
            FUN29(VAR13, &VAR7->VAR64, VAR65)
            {
                if (VAR13->VAR21 == VAR11->VAR21)
                {
                    FUN30(VAR11, 0, VAR66);
                    VAR11->VAR21 += 2;
                    goto VAR67;
                }
            }
        }
        if (VAR5)
        {
            VAR14 = FUN31();
            if (VAR15 < VAR14)
            {
                VAR15++;
                while (VAR15 < VAR14)
                    VAR68.VAR69[VAR15++] = 0;
            }
            VAR68.VAR70[VAR15] = VAR11->VAR21;
            VAR71[VAR15] = (VAR11->VAR31 << 4) | (VAR11->VAR30 >> 1);
            VAR68.VAR69[VAR15] = 1;
            VAR68.VAR72[VAR15] = VAR18;
        }
        if (VAR18 + 1 == VAR19 && (VAR4->VAR56 & VAR73))
            FUN32();
        if (FUN27(FUN33(VAR74 | VAR75)))
        {
            FUN34(VAR11->VAR21);
        }
        if (VAR11->VAR43 && !VAR11->VAR44)
        {
            assert(VAR18 == 0);
            FUN35(VAR76, FUN36(VAR11->VAR46, 0, 0), FUN37(VAR11));
            goto VAR67;
        }
        if (VAR11->VAR28)
        {
            FUN38(VAR9, VAR11);
            if (VAR11->VAR30)
            {
                VAR11->VAR31 = (VAR11->VAR31 & 0xe) | ((VAR11->VAR30 >> 4) & 1);
                VAR11->VAR30 = (VAR11->VAR30 << 1) & 0x1f;
                if (VAR11->VAR30 == 0)
                {
                    VAR11->VAR31 = 0;
                }
            }
        }
        else
        {
            unsigned int VAR77 = FUN39(VAR9, VAR11->VAR21, VAR11->VAR29);
            VAR11->VAR21 += 4;
            FUN40(VAR11, VAR77);
        }
        if (VAR11->VAR25 && !VAR11->VAR22)
        {
            FUN41(VAR11->VAR78);
            VAR11->VAR25 = 0;
        }
        if (FUN42())
        {
            fprintf(VAR79, "" VAR80 "", VAR11->VAR21);
        }
        VAR18++;
    } while (!VAR11->VAR22 && !FUN43() && !VAR7->VAR24 && !VAR81 && !VAR11->VAR43 && VAR11->VAR21 < VAR17 && VAR18 < VAR19);
    if (VAR4->VAR56 & VAR73)
    {
        if (VAR11->VAR25)
        {
            FUN44(VAR7, "");
        }
        FUN45();
    }
    if (FUN27(VAR7->VAR24 || VAR11->VAR43))
    {
        if (VAR11->VAR25)
        {
            FUN46(VAR11);
            if (VAR11->VAR22 == VAR82)
            {
                FUN47(VAR11);
                FUN35(VAR83, FUN48(VAR11->VAR84, VAR11->VAR28), FUN37(VAR11));
            }
            else if (VAR11->VAR22 == VAR85)
            {
                FUN47(VAR11);
                FUN35(VAR86, FUN49(VAR11->VAR84), 2);
            }
            else if (VAR11->VAR22 == VAR87)
            {
                FUN47(VAR11);
                FUN35(VAR88, FUN50(), 3);
            }
            else if (VAR11->VAR43)
            {
                FUN51(VAR11);
            }
            else
            {
                FUN25(VAR66);
            }
            FUN41(VAR11->VAR78);
        }
        if (VAR11->VAR25 || !VAR11->VAR22)
        {
            FUN52(VAR11, VAR11->VAR21);
            VAR11->VAR25 = 0;
        }
        FUN46(VAR11);
        if (VAR11->VAR22 == VAR82 && !VAR11->VAR25)
        {
            FUN47(VAR11);
            FUN35(VAR83, FUN48(VAR11->VAR84, VAR11->VAR28), FUN37(VAR11));
        }
        else if (VAR11->VAR22 == VAR85 && !VAR11->VAR25)
        {
            FUN47(VAR11);
            FUN35(VAR86, FUN49(VAR11->VAR84), 2);
        }
        else if (VAR11->VAR22 == VAR87 && !VAR11->VAR25)
        {
            FUN47(VAR11);
            FUN35(VAR88, FUN50(), 3);
        }
        else if (VAR11->VAR43)
        {
            FUN51(VAR11);
        }
        else
        {
            FUN25(VAR66);
        }
    }
    else
    {
        FUN46(VAR11);
        switch (VAR11->VAR22)
        {
        case VAR23:
            FUN53(VAR11, 1, VAR11->VAR21);
            break;
        default:
        case VAR89:
        case VAR61:
            FUN54(0);
            break;
        case VAR90:
            break;
        case VAR91:
            FUN55(VAR92);
            break;
        case VAR93:
            FUN56(VAR92);
            break;
        case VAR82:
            FUN35(VAR83, FUN48(VAR11->VAR84, VAR11->VAR28), FUN37(VAR11));
            break;
        case VAR85:
            FUN35(VAR86, FUN49(VAR11->VAR84), 2);
            break;
        case VAR87:
            FUN35(VAR88, FUN50(), 3);
            break;
        }
        if (VAR11->VAR25)
        {
            FUN41(VAR11->VAR78);
            FUN46(VAR11);
            FUN53(VAR11, 1, VAR11->VAR21);
            VAR11->VAR25 = 0;
        }
    }
VAR67:
    FUN57(VAR4, VAR18);
    if (FUN33(VAR94))
    {
        FUN58("");
        FUN58("", FUN59(VAR16));
        FUN60(VAR9, VAR16, VAR11->VAR21 - VAR16, VAR11->VAR28 | (VAR11->VAR29 << 1));
        FUN58("");
    }
    if (VAR5)
    {
        VAR14 = FUN31();
        VAR15++;
        while (VAR15 <= VAR14)
            VAR68.VAR69[VAR15++] = 0;
    }
    else
    {
        VAR4->VAR95 = VAR11->VAR21 - VAR16;
        VAR4->VAR96 = VAR18;
    }
}
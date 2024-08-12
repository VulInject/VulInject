void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    DisasContext VAR9, *VAR10 = &VAR9;
    VAR11 **VAR12, *VAR13;
    target_ulong VAR14;
    int VAR15;
    int VAR16;
    VAR14 = VAR4->VAR17;
    VAR9.VAR18 = VAR14;
    VAR9.VAR4 = VAR4;
    VAR9.VAR19 = VAR20;
    VAR9.VAR21 = VAR2->VAR21;
    VAR9.VAR22 = VAR23;
    VAR9.VAR24 = VAR2->VAR25;
    VAR9.VAR26 = VAR27;
    VAR9.VAR28 = VAR29 || !VAR2->VAR30;
    VAR9.VAR31 = VAR2->VAR31;
    VAR9.VAR32 = VAR2->VAR32;
    VAR9.VAR33 = -1;
    VAR9.VAR34 = !!(VAR2->VAR35 & (1 << VAR36));
    VAR9.VAR37 = VAR9.VAR34 ? VAR38 : VAR39;
    VAR9.VAR40 = FUN4(VAR2, VAR2->VAR41);
    VAR9.VAR42 = !!(VAR2->VAR43 & VAR44);
    if (VAR2->VAR45 == VAR46 || VAR2->VAR45 == VAR47 || (VAR2->VAR45 & VAR48))
        VAR9.VAR49 = true;
    VAR9.VAR50 = !!VAR51;
    if ((VAR2->VAR43 & VAR52) && VAR53)
        VAR9.VAR54 = !!VAR53;
    else
        VAR9.VAR54 = false;
    if ((VAR2->VAR43 & VAR55) && VAR56)
        VAR9.VAR57 = !!VAR56;
    else
        VAR9.VAR57 = false;
    if ((VAR2->VAR43 & VAR58) && VAR59)
    {
        VAR9.VAR60 = !!VAR59;
    }
    else
    {
        VAR9.VAR60 = false;
    }
    if ((VAR2->VAR43 & VAR61) && VAR62)
    {
        VAR9.VAR63 = !!VAR62;
    }
    else
    {
        VAR9.VAR63 = false;
    }
    if ((VAR2->VAR43 & VAR64) && VAR65)
        VAR9.VAR66 = VAR67;
    else
        VAR9.VAR66 = 0;
    if ((VAR2->VAR43 & VAR68) && VAR69)
        VAR9.VAR66 |= VAR70;
    if (FUN5(VAR8->VAR66))
    {
        VAR9.VAR66 |= VAR71;
    }
    VAR65 = 1;
    VAR15 = 0;
    VAR16 = VAR4->VAR72 & VAR73;
    if (VAR16 == 0)
    {
        VAR16 = VAR73;
    }
    if (VAR16 > VAR74)
    {
        VAR16 = VAR74;
    }
    FUN6(VAR4);
    FUN7();
    while (VAR9.VAR19 == VAR20 && !FUN8())
    {
        FUN9(VAR9.VAR18);
        VAR15++;
        if (FUN5(FUN10(VAR8, VAR9.VAR18, VAR75)))
        {
            FUN11(VAR10);
            VAR9.VAR18 += 4;
            break;
        }
        FUN12("");
        FUN12("" VAR76 "", VAR9.VAR18, VAR9.VAR24, (int)VAR77);
        if (VAR15 == VAR16 && (VAR4->VAR72 & VAR78))
            FUN13();
        if (FUN5(FUN14(&VAR9)))
        {
            VAR9.VAR79 = FUN15(FUN16(VAR2, VAR9.VAR18));
        }
        else
        {
            VAR9.VAR79 = FUN16(VAR2, VAR9.VAR18);
        }
        FUN12("", VAR9.VAR79, FUN17(VAR9.VAR79), FUN18(VAR9.VAR79), FUN19(VAR9.VAR79), VAR9.VAR34 ? "" : "");
        VAR9.VAR18 += 4;
        VAR12 = VAR2->VAR80;
        VAR13 = VAR12[FUN17(VAR9.VAR79)];
        if (FUN20(VAR13))
        {
            VAR12 = FUN21(VAR13);
            VAR13 = VAR12[FUN18(VAR9.VAR79)];
            if (FUN20(VAR13))
            {
                VAR12 = FUN21(VAR13);
                VAR13 = VAR12[FUN19(VAR9.VAR79)];
            }
        }
        if (FUN5(VAR13->VAR13 == &VAR81))
        {
            FUN22(VAR82, ""
                                           "" VAR76 "",
                          FUN17(VAR9.VAR79), FUN18(VAR9.VAR79), FUN19(VAR9.VAR79), VAR9.VAR79, VAR9.VAR18 - 4, (int)VAR77);
        }
        else
        {
            uint32_t VAR83;
            if (FUN5(VAR13->VAR84 & (VAR85 | VAR86 | VAR87) && FUN23(VAR9.VAR79)))
            {
                VAR83 = VAR13->VAR88;
            }
            else
            {
                VAR83 = VAR13->VAR89;
            }
            if (FUN5((VAR9.VAR79 & VAR83) != 0))
            {
                FUN22(VAR82, ""
                                               "" VAR76 "",
                              VAR9.VAR79 & VAR83, FUN17(VAR9.VAR79), FUN18(VAR9.VAR79), FUN19(VAR9.VAR79), VAR9.VAR79, VAR9.VAR18 - 4);
                FUN24(VAR10, VAR90);
                break;
            }
        }
        (*(VAR13->VAR13))(&VAR9);
        VAR13->VAR91++;
        if (FUN5(VAR9.VAR66 & VAR67 && (VAR9.VAR18 <= 0x100 || VAR9.VAR18 > 0xF00) && VAR9.VAR19 != VAR92 && VAR9.VAR19 != VAR93 && VAR9.VAR19 != VAR94))
        {
            FUN25(VAR10, VAR95);
        }
        else if (FUN5(((VAR9.VAR18 & (VAR96 - 1)) == 0) || (VAR8->VAR66) || VAR97 || VAR15 >= VAR16))
        {
            break;
        }
        if (FUN26())
        {
            fprintf(VAR98, "", FUN17(VAR9.VAR79), FUN18(VAR9.VAR79), FUN19(VAR9.VAR79), VAR9.VAR79);
            FUN27(1);
        }
    }
    if (VAR4->VAR72 & VAR78)
        FUN28();
    if (VAR9.VAR19 == VAR20)
    {
        FUN29(&VAR9, 0, VAR9.VAR18);
    }
    else if (VAR9.VAR19 != VAR94)
    {
        if (FUN5(VAR8->VAR66))
        {
            FUN11(VAR10);
        }
        FUN30(0);
    }
    FUN31(VAR4, VAR15);
    VAR4->VAR99 = VAR9.VAR18 - VAR14;
    VAR4->VAR100 = VAR15;
    if (FUN32(VAR101) && FUN33(VAR14))
    {
        int VAR43;
        VAR43 = VAR2->VAR102;
        VAR43 |= VAR9.VAR34 << 16;
        FUN34("", FUN35(VAR14));
        FUN36(VAR8, VAR14, VAR9.VAR18 - VAR14, VAR43);
        FUN34("");
    }
}
FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    uint32_t VAR10;
    int VAR11, VAR12;
    struct DisasContext VAR13;
    struct VAR14 *VAR15 = &VAR13;
    uint32_t VAR16, VAR17;
    target_ulong VAR18;
    int VAR19;
    int VAR20;
    VAR10 = VAR4->VAR21;
    VAR15->VAR2 = VAR2;
    VAR15->VAR4 = VAR4;
    VAR17 = VAR15->VAR22 = VAR15->VAR23 = VAR4->VAR24;
    VAR15->VAR25 = VAR26;
    VAR15->VAR27 = 0;
    VAR15->VAR28 = !!(VAR15->VAR23 & VAR29);
    if (VAR15->VAR28)
    {
        VAR15->VAR27 = VAR30;
    }
    VAR15->VAR21 = VAR10;
    VAR15->VAR31 = VAR7->VAR31;
    VAR15->VAR32 = 0;
    VAR15->VAR33 = 0;
    VAR15->VAR34 = 0;
    if (VAR10 & 3)
    {
        FUN3(VAR7, "", VAR10);
    }
    if (FUN4(VAR35))
    {
        FUN5("");
        FUN6(FUN2(VAR2), 0);
    }
    VAR16 = (VAR10 & VAR36) + VAR37;
    VAR12 = -1;
    VAR19 = 0;
    VAR20 = VAR4->VAR38 & VAR39;
    if (VAR20 == 0)
        VAR20 = VAR39;
    FUN7(VAR4);
    do
    {
        if (FUN4(VAR35))
        {
            FUN8(VAR40[VAR41], VAR15->VAR21);
            FUN9();
        }
        FUN10(VAR9, VAR15);
        if (VAR5)
        {
            VAR11 = FUN11();
            if (VAR12 < VAR11)
            {
                VAR12++;
                while (VAR12 < VAR11)
                    VAR42.VAR43[VAR12++] = 0;
            }
            VAR42.VAR44[VAR12] = VAR15->VAR21;
            VAR42.VAR43[VAR12] = 1;
            VAR42.VAR45[VAR12] = VAR19;
        }
        FUN12("", VAR15->VAR21);
        if (VAR19 + 1 == VAR20 && (VAR4->VAR38 & VAR46))
            FUN13();
        VAR15->VAR47 = 1;
        FUN14(VAR15, FUN15(VAR9, VAR15->VAR21));
        if (VAR15->VAR47)
            VAR15->VAR23 &= ~VAR48;
        VAR15->VAR21 += 4;
        VAR19++;
        if (VAR15->VAR28)
        {
            VAR15->VAR28--;
            if (!VAR15->VAR28)
            {
                if (VAR15->VAR23 & VAR49)
                    FUN16(VAR15);
                if (VAR15->VAR23 & VAR50)
                    FUN17(VAR15);
                if (VAR15->VAR23 & VAR51)
                    FUN18(VAR15);
                VAR15->VAR23 &= ~VAR29;
                if (VAR15->VAR27 == VAR30)
                {
                    FUN19(VAR15, VAR52, FUN20(VAR15->VAR21));
                    VAR15->VAR25 = VAR53;
                }
                else if (VAR15->VAR27 == VAR54)
                {
                    FUN21(VAR15);
                    FUN22(VAR15, 0, VAR15->VAR55);
                    VAR15->VAR25 = VAR56;
                }
                else if (VAR15->VAR27 == VAR57)
                {
                    VAR58 *VAR59 = FUN23();
                    FUN21(VAR15);
                    FUN24(VAR60, VAR61, 0, VAR59);
                    FUN22(VAR15, 1, VAR15->VAR21);
                    FUN25(VAR59);
                    FUN22(VAR15, 0, VAR15->VAR55);
                    VAR15->VAR25 = VAR56;
                }
                break;
            }
        }
        if (VAR7->VAR31)
        {
            break;
        }
    } while (!VAR15->VAR25 && !VAR15->VAR32 && !FUN26() && !VAR62 && (VAR15->VAR21 < VAR16) && VAR19 < VAR20);
    VAR18 = VAR15->VAR21;
    if (VAR15->VAR27 == VAR54 || VAR15->VAR27 == VAR57)
    {
        if (VAR15->VAR23 & VAR29)
        {
            VAR15->VAR25 = VAR63;
            FUN8(VAR40[VAR41], VAR18);
            FUN27(VAR15);
        }
        else
            VAR18 = VAR15->VAR55;
    }
    if (VAR4->VAR38 & VAR46)
        FUN28();
    if (VAR15->VAR25 == VAR26 && (VAR15->VAR32 || VAR17 != VAR15->VAR23))
    {
        VAR15->VAR25 = VAR63;
        FUN8(VAR40[VAR41], VAR18);
    }
    FUN21(VAR15);
    if (FUN29(VAR7->VAR31))
    {
        TCGv_i32 VAR64 = FUN30(VAR65);
        if (VAR15->VAR25 != VAR53)
        {
            FUN8(VAR40[VAR41], VAR18);
        }
        FUN31(VAR66, VAR64);
        FUN32(VAR64);
    }
    else
    {
        switch (VAR15->VAR25)
        {
        case VAR26:
            FUN22(VAR15, 1, VAR18);
            break;
        default:
        case VAR53:
        case VAR63:
            FUN33(0);
            break;
        case VAR56:
            break;
        }
    }
    FUN34(VAR4, VAR19);
    if (VAR5)
    {
        VAR11 = FUN11();
        VAR12++;
        while (VAR12 <= VAR11)
            VAR42.VAR43[VAR12++] = 0;
    }
    else
    {
        VAR4->VAR67 = VAR15->VAR21 - VAR10;
        VAR4->VAR68 = VAR19;
    }
    if (FUN4(VAR35))
    {
        FUN5("");
        FUN35(VAR9, VAR10, VAR15->VAR21 - VAR10, 0);
        FUN5("", VAR15->VAR21 - VAR10, FUN11());
    }
    assert(!VAR15->VAR33);
}
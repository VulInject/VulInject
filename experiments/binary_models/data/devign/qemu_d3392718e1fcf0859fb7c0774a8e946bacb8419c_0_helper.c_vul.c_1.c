static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = FUN2(VAR2);
    uint32_t VAR7;
    uint32_t VAR8;
    bool VAR9 = false;
    bool VAR10 = false;
    bool VAR11;
    bool VAR12;
    bool VAR13 = false;
    bool VAR14 = false;
    bool VAR15;
    assert(FUN3(VAR4));
    VAR7 = VAR4->VAR16[15];
    if (VAR4->VAR17)
    {
        VAR7 |= 1;
    }
    FUN4(VAR18, "" VAR19 "", VAR7, VAR4->VAR20.VAR21);
    if ((VAR7 & VAR22) != VAR22)
    {
        FUN4(VAR23, ""
                                       "" VAR19 "",
                      VAR7);
    }
    if (FUN5(VAR4, VAR24))
    {
        if (!VAR4->VAR20.VAR25 && ((VAR7 & VAR26) || !(VAR7 & VAR27)))
        {
            VAR10 = 1;
            VAR7 &= ~VAR26;
        }
    }
    if (VAR4->VAR20.VAR21 != VAR28)
    {
        if (FUN5(VAR4, VAR24))
        {
            VAR14 = VAR7 & VAR26;
            if (FUN6(VAR4->VAR29) >= 0)
            {
                VAR4->VAR20.VAR30[VAR14] = 0;
            }
        }
        else
        {
            VAR4->VAR20.VAR30[VAR31] = 0;
        }
    }
    switch (FUN7(VAR4->VAR29, VAR4->VAR20.VAR21, VAR14))
    {
    case -1:
        VAR9 = true;
        break;
    case 0:
        break;
    case 1:
        VAR13 = true;
        break;
    default:
        FUN8();
    }
    VAR12 = !(VAR7 & VAR32);
    VAR11 = VAR7 & VAR33;
    VAR15 = FUN5(VAR4, VAR24) && (VAR7 & VAR34);
    if (FUN5(VAR4, VAR35))
    {
        if (!FUN5(VAR4, VAR24))
        {
            if ((VAR7 & VAR34) || (VAR7 & VAR26) || !(VAR7 & VAR27))
            {
                VAR9 = true;
            }
        }
        if (VAR7 & VAR36)
        {
            VAR9 = true;
        }
    }
    else
    {
        switch (VAR7 & 0xf)
        {
        case 1:
            break;
        case 13:
        case 9:
            if (!VAR13 && !(VAR4->VAR20.VAR37[VAR4->VAR20.VAR25] & VAR38))
            {
                VAR9 = true;
            }
            break;
        default:
            VAR9 = true;
        }
    }
    if (VAR10)
    {
        VAR4->VAR20.VAR39 |= VAR40;
        FUN9(VAR4->VAR29, VAR41, false);
        FUN10(VAR2, VAR7);
        FUN4(VAR18, ""
                                   "");
        return;
    }
    if (VAR9)
    {
        VAR4->VAR20.VAR42[VAR4->VAR20.VAR25] |= VAR43;
        FUN9(VAR4->VAR29, VAR44, VAR4->VAR20.VAR25);
        FUN10(VAR2, VAR7);
        FUN4(VAR18, ""
                                   "");
        return;
    }
    FUN11(VAR4, VAR11, VAR14);
    FUN12(VAR4, VAR15);
    {
        VAR45 *VAR46 = FUN13(VAR4, VAR15, !VAR12, VAR11);
        uint32_t VAR47 = *VAR46;
        if (!FUN14(VAR47, 8) && FUN5(VAR4, VAR35))
        {
            FUN4(VAR23, ""
                                           "");
        }
        if (VAR15 && ((VAR7 & VAR26) == 0 || (VAR7 & VAR27) == 0))
        {
            uint32_t VAR48 = 0xfefa125b;
            uint32_t VAR49 = FUN15(VAR6->VAR50, VAR47);
            if (VAR48 != VAR49)
            {
                VAR4->VAR20.VAR39 |= VAR51;
                FUN9(VAR4->VAR29, VAR41, false);
                FUN10(VAR2, VAR7);
                FUN4(VAR18, ""
                                           ""
                                           "");
                return;
            }
            VAR4->VAR16[4] = FUN15(VAR6->VAR50, VAR47 + 0x8);
            VAR4->VAR16[5] = FUN15(VAR6->VAR50, VAR47 + 0xc);
            VAR4->VAR16[6] = FUN15(VAR6->VAR50, VAR47 + 0x10);
            VAR4->VAR16[7] = FUN15(VAR6->VAR50, VAR47 + 0x14);
            VAR4->VAR16[8] = FUN15(VAR6->VAR50, VAR47 + 0x18);
            VAR4->VAR16[9] = FUN15(VAR6->VAR50, VAR47 + 0x1c);
            VAR4->VAR16[10] = FUN15(VAR6->VAR50, VAR47 + 0x20);
            VAR4->VAR16[11] = FUN15(VAR6->VAR50, VAR47 + 0x24);
            VAR47 += 0x28;
        }
        VAR4->VAR16[0] = FUN15(VAR6->VAR50, VAR47);
        VAR4->VAR16[1] = FUN15(VAR6->VAR50, VAR47 + 0x4);
        VAR4->VAR16[2] = FUN15(VAR6->VAR50, VAR47 + 0x8);
        VAR4->VAR16[3] = FUN15(VAR6->VAR50, VAR47 + 0xc);
        VAR4->VAR16[12] = FUN15(VAR6->VAR50, VAR47 + 0x10);
        VAR4->VAR16[14] = FUN15(VAR6->VAR50, VAR47 + 0x14);
        VAR4->VAR16[15] = FUN15(VAR6->VAR50, VAR47 + 0x18);
        if (VAR4->VAR16[15] & 1)
        {
            VAR4->VAR16[15] &= ~1U;
            if (!FUN5(VAR4, VAR35))
            {
                FUN4(VAR23, ""
                                               "");
            }
        }
        VAR8 = FUN15(VAR6->VAR50, VAR47 + 0x1c);
        if (FUN5(VAR4, VAR35))
        {
            bool VAR52 = (VAR8 & VAR53) != 0;
            if (VAR12 != VAR52)
            {
                FUN9(VAR4->VAR29, VAR44, VAR4->VAR20.VAR25);
                VAR4->VAR20.VAR42[VAR4->VAR20.VAR25] |= VAR43;
                FUN10(VAR2, VAR7);
                FUN4(VAR18, ""
                                           ""
                                           "");
                return;
            }
        }
        VAR47 += 0x20;
        if (VAR8 & VAR54)
        {
            VAR47 |= 4;
        }
        *VAR46 = VAR47;
    }
    FUN16(VAR4, VAR8, ~VAR54);
    if (VAR12 != FUN3(VAR4))
    {
        assert(!FUN5(VAR4, VAR35));
        FUN9(VAR4->VAR29, VAR44, false);
        VAR4->VAR20.VAR42[VAR4->VAR20.VAR25] |= VAR43;
        FUN17(VAR2);
        FUN10(VAR2, VAR7);
        FUN4(VAR18, ""
                                   "");
        return;
    }
    FUN18(VAR4);
    FUN4(VAR18, "");
}
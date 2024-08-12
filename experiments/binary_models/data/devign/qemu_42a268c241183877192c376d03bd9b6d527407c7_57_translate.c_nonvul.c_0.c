static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int32_t VAR6)
{
    int VAR7 = 0;
    TCGv VAR8 = FUN2();
    TCGv VAR9 = FUN2();
    if (VAR2->VAR10 & VAR11)
    {
        FUN3("" VAR12 "", VAR2->VAR13);
        FUN4(VAR2, VAR14);
        goto VAR15;
    }
    switch (VAR3)
    {
    case VAR16:
    case VAR17:
        FUN5(VAR8, VAR4);
        FUN5(VAR9, VAR5);
        VAR7 = 1;
        VAR2->VAR18 = FUN6(VAR2, VAR2->VAR13 + 4, VAR6);
        if (VAR4 <= VAR5 && VAR4 == 0)
        {
            FUN7(VAR19[31], VAR2->VAR13 + 4);
        }
        break;
    case VAR20:
    case VAR21:
        FUN5(VAR8, VAR4);
        FUN5(VAR9, VAR5);
        VAR7 = 1;
        VAR2->VAR18 = FUN6(VAR2, VAR2->VAR13 + 4, VAR6);
        break;
    case VAR22:
    case VAR23:
        if (VAR4 == 0 || VAR4 == VAR5)
        {
            FUN7(VAR19[31], VAR2->VAR13 + 4);
        }
        FUN5(VAR8, VAR4);
        FUN5(VAR9, VAR5);
        VAR7 = 1;
        VAR2->VAR18 = FUN6(VAR2, VAR2->VAR13 + 4, VAR6);
        break;
    case VAR24:
    case VAR25:
        VAR2->VAR18 = FUN6(VAR2, VAR2->VAR13 + 4, VAR6);
        break;
    case VAR26:
    case VAR27:
        if (VAR4 != 0)
        {
            FUN5(VAR8, VAR4);
            VAR7 = 1;
            VAR2->VAR18 = FUN6(VAR2, VAR2->VAR13 + 4, VAR6);
        }
        else
        {
            TCGv VAR28 = FUN2();
            TCGv VAR29 = FUN2();
            FUN5(VAR28, VAR5);
            FUN7(VAR29, VAR6);
            FUN8(VAR2, VAR18, VAR28, VAR29);
            FUN9(VAR28);
            FUN9(VAR29);
        }
        break;
    default:
        FUN10("");
        FUN4(VAR2, VAR14);
        goto VAR15;
    }
    if (VAR7 == 0)
    {
        switch (VAR3)
        {
        case VAR30:
            FUN7(VAR19[31], VAR2->VAR13 + 4);
        case VAR31:
            VAR2->VAR10 |= VAR32;
            break;
        case VAR25:
            FUN7(VAR19[31], VAR2->VAR13 + 4);
        case VAR24:
            VAR2->VAR10 |= VAR33;
            break;
        default:
            FUN10("");
            FUN4(VAR2, VAR14);
            goto VAR15;
        }
        FUN11(VAR2, 4);
    }
    else
    {
        VAR34 *VAR35 = FUN12();
        FUN13(VAR2, 0);
        switch (VAR3)
        {
        case VAR22:
            if (VAR4 == 0 && VAR5 != 0)
            {
                FUN14(FUN15(VAR36), VAR9, 0, VAR35);
            }
            else if (VAR4 != 0 && VAR5 != 0 && VAR4 == VAR5)
            {
                FUN14(FUN15(VAR37), VAR9, 0, VAR35);
            }
            else
            {
                FUN16(FUN15(VAR38), VAR8, VAR9, VAR35);
            }
            break;
        case VAR23:
            if (VAR4 == 0 && VAR5 != 0)
            {
                FUN14(FUN15(VAR39), VAR9, 0, VAR35);
            }
            else if (VAR4 != 0 && VAR5 != 0 && VAR4 == VAR5)
            {
                FUN14(FUN15(VAR40), VAR9, 0, VAR35);
            }
            else
            {
                FUN16(FUN15(VAR41), VAR8, VAR9, VAR35);
            }
            break;
        case VAR20:
            if (VAR4 == 0 && VAR5 != 0)
            {
                FUN14(FUN15(VAR36), VAR9, 0, VAR35);
            }
            else if (VAR4 != 0 && VAR5 != 0 && VAR4 == VAR5)
            {
                FUN14(FUN15(VAR37), VAR9, 0, VAR35);
            }
            else
            {
                FUN16(FUN15(VAR37), VAR8, VAR9, VAR35);
            }
            break;
        case VAR21:
            if (VAR4 == 0 && VAR5 != 0)
            {
                FUN14(FUN15(VAR39), VAR9, 0, VAR35);
            }
            else if (VAR4 != 0 && VAR5 != 0 && VAR4 == VAR5)
            {
                FUN14(FUN15(VAR40), VAR9, 0, VAR35);
            }
            else
            {
                FUN16(FUN15(VAR40), VAR8, VAR9, VAR35);
            }
            break;
        case VAR16:
        case VAR17:
            if (VAR4 >= VAR5)
            {
                TCGv VAR42 = FUN2();
                TCGv VAR43 = FUN2();
                TCGv VAR44 = FUN2();
                TCGv VAR45 = FUN2();
                FUN5(VAR8, VAR4);
                FUN5(VAR9, VAR5);
                FUN17(VAR42, VAR8);
                FUN18(VAR46, VAR45, VAR42, VAR8);
                FUN17(VAR43, VAR9);
                FUN18(VAR46, VAR44, VAR43, VAR9);
                FUN19(VAR45, VAR45, VAR44);
                FUN20(VAR44, VAR42, VAR43);
                FUN17(VAR44, VAR44);
                FUN21(VAR42, VAR42, VAR43);
                FUN21(VAR43, VAR44, VAR43);
                FUN22(VAR42, VAR43, VAR42);
                FUN23(VAR40, VAR44, VAR42, 0);
                FUN19(VAR44, VAR44, VAR45);
                if (VAR3 == VAR16)
                {
                    FUN14(FUN15(VAR46), VAR44, 0, VAR35);
                }
                else
                {
                    FUN14(FUN15(VAR47), VAR44, 0, VAR35);
                }
                FUN9(VAR45);
                FUN9(VAR44);
                FUN9(VAR43);
                FUN9(VAR42);
            }
            else if (VAR4 < VAR5 && VAR4 == 0)
            {
                if (VAR3 == VAR48)
                {
                    FUN14(FUN15(VAR47), VAR9, 0, VAR35);
                }
                else
                {
                    FUN14(FUN15(VAR46), VAR9, 0, VAR35);
                }
            }
            else
            {
                if (VAR3 == VAR49)
                {
                    FUN16(FUN15(VAR47), VAR8, VAR9, VAR35);
                }
                else
                {
                    FUN16(FUN15(VAR46), VAR8, VAR9, VAR35);
                }
            }
            break;
        case VAR26:
            FUN14(FUN15(VAR47), VAR8, 0, VAR35);
            break;
        case VAR27:
            FUN14(FUN15(VAR46), VAR8, 0, VAR35);
            break;
        default:
            FUN10("");
            FUN4(VAR2, VAR14);
            goto VAR15;
        }
        FUN24(VAR2, 1, VAR2->VAR18);
        FUN25(VAR35);
        VAR2->VAR10 |= VAR50;
        FUN26("");
    }
VAR15:
    FUN9(VAR8);
    FUN9(VAR9);
}
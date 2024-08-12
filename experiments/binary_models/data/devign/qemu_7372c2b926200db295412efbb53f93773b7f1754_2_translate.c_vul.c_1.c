static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, uint16_t VAR6, int VAR7, TCGv VAR8, VAR1 *VAR9, ea_what VAR10)
{
    TCGv VAR11;
    TCGv VAR12;
    uint32_t VAR13;
    switch ((VAR6 >> 3) & 7)
    {
    case 0:
        VAR11 = FUN2(VAR6, 0);
        if (VAR10 == VAR14)
        {
            FUN3(VAR7, VAR11, VAR8);
            return VAR15;
        }
        else
        {
            return FUN4(VAR11, VAR7, VAR10 == VAR16);
        }
    case 1:
        VAR11 = FUN5(VAR6, 0);
        if (VAR10 == VAR14)
        {
            FUN6(VAR11, VAR8);
            return VAR15;
        }
        else
        {
            return FUN4(VAR11, VAR7, VAR10 == VAR16);
        }
    case 2:
        VAR11 = FUN5(VAR6, 0);
        return FUN7(VAR5, VAR7, VAR11, VAR8, VAR10);
    case 3:
        VAR11 = FUN5(VAR6, 0);
        VAR12 = FUN7(VAR5, VAR7, VAR11, VAR8, VAR10);
        if (VAR10 == VAR14 || !VAR9)
            FUN8(VAR11, VAR11, FUN9(VAR7));
        return VAR12;
    case 4:
    {
        TCGv VAR17;
        if (VAR9 && VAR10 == VAR14)
        {
            VAR17 = *VAR9;
        }
        else
        {
            VAR17 = FUN10(VAR3, VAR5, VAR6, VAR7);
            if (FUN11(VAR17))
                return VAR17;
            if (VAR9)
                *VAR9 = VAR17;
        }
        VAR12 = FUN7(VAR5, VAR7, VAR17, VAR8, VAR10);
        if (VAR10 == VAR14 || !VAR9)
        {
            VAR11 = FUN5(VAR6, 0);
            FUN6(VAR11, VAR17);
        }
    }
        return VAR12;
    case 5:
    case 6:
        return FUN12(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10);
    case 7:
        switch (VAR6 & 7)
        {
        case 0:
        case 1:
        case 2:
        case 3:
            return FUN12(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10);
        case 4:
            switch (VAR7)
            {
            case VAR18:
                if (VAR10 == VAR16)
                {
                    VAR13 = FUN13(VAR3, VAR5->VAR19 + 1);
                }
                else
                {
                    VAR13 = FUN14(VAR3, VAR5->VAR19 + 1);
                }
                VAR5->VAR19 += 2;
                break;
            case VAR20:
                if (VAR10 == VAR16)
                {
                    VAR13 = FUN15(VAR3, VAR5->VAR19);
                }
                else
                {
                    VAR13 = FUN16(VAR3, VAR5->VAR19);
                }
                VAR5->VAR19 += 2;
                break;
            case VAR21:
                VAR13 = FUN17(VAR3, VAR5);
                break;
            default:
                FUN18(0, "");
            }
            return FUN19(VAR13);
        default:
            return VAR22;
        }
    }
    return VAR22;
}
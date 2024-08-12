static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = VAR12, VAR13, VAR14;
    VAR15 *VAR16 = VAR3;
    VAR5 *VAR17;
    VAR9->VAR2 = VAR2;
    if (!VAR7)
        return 0;
    VAR13 = FUN2(VAR2->VAR18, VAR2->VAR19, VAR2->VAR20);
    VAR17 = (VAR5 *)FUN3(VAR13);
    FUN4((VAR21 *)VAR16, VAR17, VAR2->VAR18, VAR2->VAR19, VAR2->VAR20);
    if (VAR2->VAR22 == VAR23)
    {
        FUN5(&VAR9->VAR24, VAR6, VAR7 * 8);
        if (VAR9->VAR25 > VAR26)
        {
            if (FUN6(VAR9) == VAR12)
                return VAR7;
            switch (VAR9->VAR27)
            {
            case VAR28:
                VAR11 = FUN7(VAR9);
                break;
            case VAR29:
                VAR11 = FUN8(VAR9);
                break;
            case VAR30:
            case VAR31:
                VAR11 = FUN9(VAR9);
                break;
            default:
                VAR11 = VAR12;
            }
            if (VAR11 == VAR12)
                return VAR7;
        }
        else
        {
            if (FUN10(VAR9) == VAR12)
                return VAR7;
            switch (VAR9->VAR27)
            {
            case VAR28:
                VAR11 = FUN11(VAR9);
                break;
            case VAR29:
                VAR11 = FUN8(VAR9);
                break;
            case VAR30:
            case VAR31:
                VAR11 = FUN9(VAR9);
                break;
            default:
                VAR11 = VAR12;
            }
            if (VAR11 == VAR12)
                return VAR7;
        }
    }
    else
    {
        uint32_t VAR32 = 0;
        int VAR33 = 0, VAR34 = 0;
        while (VAR34 < VAR7)
        {
            for (; VAR34 < VAR7 && VAR32 != 0x000001; VAR34++)
                VAR32 = ((VAR32 << 8) | VAR6[VAR34]) & 0xffffff;
            if (VAR32 != 0x000001)
                break;
            VAR33 = VAR6[VAR34++];
            FUN5(&VAR9->VAR24, VAR6 + VAR34, (VAR7 - VAR34) * 8);
            switch (VAR33)
            {
            case 0x0A:
                return 0;
            case 0x0B:
                FUN12(VAR2, VAR35, "");
                return -1;
            case 0x0C:
                FUN12(VAR2, VAR35, "");
                return -1;
            case 0x0D:
                break;
            case 0x0E:
                if (VAR9->VAR25 <= VAR36)
                    FUN12(VAR2, VAR35, "", VAR9->VAR25);
                FUN13(VAR2, &VAR9->VAR24);
                break;
            case 0x0F:
                FUN14(VAR2, &VAR9->VAR24);
                break;
            default:
                FUN12(VAR2, VAR35, "", VAR33);
            }
            VAR34 += FUN15(&VAR9->VAR24) * 8;
        }
        FUN16();
    }
    FUN12(VAR2, VAR37, "", FUN15(&VAR9->VAR24), VAR7 * 8);
    *VAR4 = VAR13;
    return VAR7;
}
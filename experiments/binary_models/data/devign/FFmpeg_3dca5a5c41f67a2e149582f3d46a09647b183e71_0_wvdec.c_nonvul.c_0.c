static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    int VAR9, VAR10, VAR11;
    uint32_t VAR12, VAR13;
    VAR6->VAR14 = FUN2(VAR4);
    if (VAR6->VAR15 && VAR6->VAR14 >= VAR6->VAR15)
        return VAR16;
    VAR8 = FUN3(VAR4, VAR6->VAR17, VAR18);
    if (VAR8 != VAR18)
        return (VAR8 < 0) ? VAR8 : VAR16;
    VAR8 = FUN4(&VAR6->VAR19, VAR6->VAR17);
    if (VAR8 < 0)
    {
        FUN5(VAR2, VAR20, "");
        return VAR8;
    }
    if (VAR6->VAR19.VAR21 < 0x402 || VAR6->VAR19.VAR21 > 0x410)
    {
        FUN5(VAR2, VAR20, "", VAR6->VAR19.VAR21);
        return VAR22;
    }
    if (!VAR6->VAR19.VAR23)
        return 0;
    VAR13 = VAR6->VAR19.VAR13;
    VAR10 = ((VAR13 & 3) + 1) << 3;
    VAR11 = 1 + !(VAR13 & VAR24);
    VAR12 = VAR13 & VAR24 ? VAR25 : VAR26;
    VAR9 = VAR27[(VAR13 >> 23) & 0xF];
    VAR6->VAR28 = !(VAR6->VAR19.VAR29 && VAR6->VAR19.final);
    if (VAR6->VAR28)
    {
        VAR11 = VAR6->VAR11;
        VAR12 = VAR6->VAR12;
    }
    if ((VAR9 == -1 || !VAR11) && !VAR6->VAR30)
    {
        int64_t VAR31 = FUN2(VAR4) + VAR6->VAR19.VAR32;
        if (!VAR4->VAR33)
        {
            FUN5(VAR2, VAR20, "");
            return VAR34;
        }
        while (FUN2(VAR4) < VAR31 && !FUN6(VAR4))
        {
            int VAR35, VAR36;
            VAR35 = FUN7(VAR4);
            VAR36 = (VAR35 & 0x80) ? FUN8(VAR4) : FUN7(VAR4);
            VAR36 <<= 1;
            if (VAR35 & 0x40)
                VAR36--;
            switch (VAR35 & 0x3F)
            {
            case 0xD:
                if (VAR36 <= 1)
                {
                    FUN5(VAR2, VAR20, "");
                    return VAR34;
                }
                VAR11 = FUN7(VAR4);
                switch (VAR36 - 2)
                {
                case 0:
                    VAR12 = FUN7(VAR4);
                    break;
                case 1:
                    VAR12 = FUN9(VAR4);
                    break;
                case 2:
                    VAR12 = FUN8(VAR4);
                    break;
                case 3:
                    VAR12 = FUN10(VAR4);
                    break;
                case 5:
                    FUN11(VAR4, 1);
                    VAR11 |= (FUN7(VAR4) & 0xF) << 8;
                    VAR12 = FUN8(VAR4);
                    break;
                default:
                    FUN5(VAR2, VAR20, "", VAR36);
                    return VAR34;
                }
                break;
            case 0x27:
                VAR9 = FUN8(VAR4);
                break;
            default:
                FUN11(VAR4, VAR36);
            }
            if (VAR35 & 0x40)
                FUN11(VAR4, 1);
        }
        if (VAR9 == -1)
        {
            FUN5(VAR2, VAR20, "");
            return VAR34;
        }
        FUN12(VAR4, VAR31 - VAR6->VAR19.VAR32, VAR37);
    }
    if (!VAR6->VAR10)
        VAR6->VAR10 = VAR10;
    if (!VAR6->VAR11)
        VAR6->VAR11 = VAR11;
    if (!VAR6->VAR12)
        VAR6->VAR12 = VAR12;
    if (!VAR6->VAR9)
        VAR6->VAR9 = VAR9;
    if (VAR13 && VAR10 != VAR6->VAR10)
    {
        FUN5(VAR2, VAR20, "", VAR10, VAR6->VAR10);
        return VAR34;
    }
    if (VAR13 && !VAR6->VAR28 && VAR11 != VAR6->VAR11)
    {
        FUN5(VAR2, VAR20, "", VAR11, VAR6->VAR11);
        return VAR34;
    }
    if (VAR13 && VAR9 != -1 && VAR9 != VAR6->VAR9)
    {
        FUN5(VAR2, VAR20, "", VAR9, VAR6->VAR9);
        return VAR34;
    }
    return 0;
}
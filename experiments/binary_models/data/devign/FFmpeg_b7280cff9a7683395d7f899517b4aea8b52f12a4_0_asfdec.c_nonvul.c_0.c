static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10 = 1;
    int VAR11 = FUN2(VAR4);
    int VAR12;
    int64_t VAR13, ts1 VAR14;
    VAR6->VAR15--;
    VAR6->VAR16 = VAR11 >> 7;
    VAR6->VAR17 = VAR6->VAR18[VAR11 & 0x7f];
    VAR9 = &VAR6->VAR19[VAR11 & 0x7f];
    FUN3(VAR6->VAR20 >> 4, VAR6->VAR21, 0);
    FUN3(VAR6->VAR20 >> 2, VAR6->VAR22, 0);
    FUN3(VAR6->VAR20, VAR6->VAR23, 0);
    FUN4(VAR6, "", VAR6->VAR16, VAR6->VAR17, VAR6->VAR21, VAR6->VAR22, VAR6->VAR23);
    if (VAR10 + VAR6->VAR23 > VAR6->VAR24)
    {
        FUN5(VAR2, VAR25, "", VAR6->VAR23);
        return VAR26;
    }
    if (VAR6->VAR23 >= 8)
    {
        int64_t VAR27 = FUN6(VAR4) + VAR6->VAR23;
        AVRational VAR28;
        VAR6->VAR29 = FUN7(VAR4);
        if (VAR6->VAR29 >= (1 << 24) || VAR6->VAR29 <= 0)
        {
            FUN5(VAR2, VAR25, "");
            return VAR26;
        }
        VAR6->VAR30 = FUN7(VAR4);
        for (VAR12 = 0; VAR12 < VAR9->VAR31; VAR12++)
        {
            VAR32 *VAR33 = &VAR9->VAR34[VAR12];
            int VAR35 = VAR33->VAR35;
            int64_t VAR36;
            if (VAR35 == 0xFFFF)
                VAR35 = FUN8(VAR4);
            VAR36 = FUN6(VAR4) + VAR35;
            if (VAR36 > VAR27)
            {
                FUN5(VAR2, VAR25, "");
                break;
            }
            switch (VAR33->VAR37)
            {
            case 0x50:
                break;
            case 0x54:
                VAR28.VAR11 = FUN2(VAR4);
                VAR28.VAR38 = FUN2(VAR4);
                if (VAR28.VAR11 > 0 && VAR28.VAR38 > 0 && VAR6->VAR17 >= 0)
                {
                    VAR2->VAR19[VAR6->VAR17]->VAR39 = VAR28;
                }
                break;
            case 0x2A:
                FUN9(VAR4, 8);
                VAR13 = FUN10(VAR4);
                VAR40 = FUN10(VAR4);
                if (VAR13 != -1)
                    VAR6->VAR30 = VAR13 / 10000;
                else
                    VAR6->VAR30 = VAR41;
                break;
            case 0x5B:
            case 0xB7:
            case 0xCC:
            case 0xC0:
            case 0xA0:
                break;
            }
            FUN11(VAR4, VAR36, VAR42);
        }
        FUN11(VAR4, VAR27, VAR42);
        VAR10 += VAR6->VAR23;
    }
    else if (VAR6->VAR23 == 1)
    {
        VAR6->VAR43 = VAR6->VAR22;
        VAR6->VAR22 = 0;
        VAR6->VAR30 = VAR6->VAR44;
        VAR6->VAR45 = FUN2(VAR4);
        VAR10++;
    }
    else if (VAR6->VAR23 != 0)
    {
        FUN5(VAR2, VAR25, "", VAR6->VAR23);
        return VAR26;
    }
    if (VAR6->VAR46 & 0x01)
    {
        FUN3(VAR6->VAR47 >> 6, VAR6->VAR48, 0);
        if (VAR10 > VAR6->VAR24)
        {
            FUN5(VAR2, VAR25, "");
            return VAR26;
        }
        else if (VAR6->VAR48 > VAR6->VAR24 - VAR10)
        {
            if (VAR6->VAR48 > VAR6->VAR24 - VAR10 + VAR6->VAR49)
            {
                FUN5(VAR2, VAR25, "", VAR6->VAR24, VAR10);
                return VAR26;
            }
            else
            {
                int VAR50 = VAR6->VAR48 - (VAR6->VAR24 - VAR10);
                VAR6->VAR24 += VAR50;
                VAR6->VAR49 -= VAR50;
            }
        }
    }
    else
    {
        VAR6->VAR48 = VAR6->VAR24 - VAR10;
    }
    if (VAR6->VAR23 == 1)
    {
        VAR6->VAR51 = VAR6->VAR48;
        if (VAR6->VAR51 > VAR6->VAR24)
            return VAR26;
    }
    VAR6->VAR24 -= VAR10;
    return 0;
}
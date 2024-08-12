static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    unsigned int VAR6;
    unsigned int VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int VAR13;
    int VAR14;
    unsigned char VAR15, VAR16, VAR17;
    unsigned char VAR18[768];
    uint32_t VAR19[256];
    if (VAR2->VAR12->VAR20)
        return VAR2->VAR12->VAR21 ? VAR2->VAR12->VAR21 : VAR22;
    if (VAR9->VAR23)
    {
        VAR6 = FUN2(VAR12);
        if (VAR6 == 2)
        {
            return FUN3(VAR24);
        }
        else if (VAR6 == 1)
        {
            VAR5 = FUN4(VAR12, VAR18, 768);
            if (VAR5 < 0)
            {
                return VAR5;
            }
            else if (VAR5 != 768)
            {
                FUN5(VAR2, VAR25, "");
                return FUN3(VAR24);
            }
            VAR14 = 2;
            for (VAR13 = 0; VAR13 < 768; VAR13++)
                if (VAR18[VAR13] > 63)
                {
                    VAR14 = 0;
                    break;
                }
            for (VAR13 = 0; VAR13 < 256; VAR13++)
            {
                VAR15 = VAR18[VAR13 * 3] << VAR14;
                VAR16 = VAR18[VAR13 * 3 + 1] << VAR14;
                VAR17 = VAR18[VAR13 * 3 + 2] << VAR14;
                VAR19[VAR13] = (VAR15 << 16) | (VAR16 << 8) | (VAR17);
            }
        }
        if (VAR2->VAR12->VAR20)
        {
            FUN5(VAR2, VAR25, "");
            return VAR2->VAR12->VAR21 ? VAR2->VAR12->VAR21 : VAR22;
        }
        VAR7 = FUN2(VAR12);
        if (VAR7 < 4 || VAR7 > VAR26 - 4)
        {
            FUN5(VAR2, VAR25, "", VAR7);
            return VAR27;
        }
        FUN6(VAR12, 4);
        VAR7 -= 4;
        VAR5 = FUN7(VAR12, VAR4, VAR7);
        if (VAR5 < 0)
            return VAR5;
        else if (VAR5 != VAR7)
        {
            FUN5(VAR2, VAR25, "");
            return FUN3(VAR24);
        }
        if (VAR6 == 1)
        {
            VAR28 *VAR29;
            VAR29 = FUN8(VAR4, VAR30, VAR31);
            if (VAR5 < 0)
                return VAR5;
            memcpy(VAR29, VAR19, VAR31);
            VAR4->VAR32 |= VAR33;
        }
        VAR4->VAR34 = VAR9->VAR35;
        VAR4->VAR36 = 1;
    }
    else
    {
        if (VAR9->VAR37)
            VAR7 = VAR9->VAR38;
        else
            VAR7 = VAR9->VAR39;
        VAR5 = FUN7(VAR12, VAR4, VAR7);
        if (VAR5 < 0)
            return VAR5;
        VAR4->VAR34 = VAR9->VAR40;
        VAR4->VAR36 = VAR7 / VAR9->VAR41;
        VAR9->VAR37 ^= 1;
    }
    if (VAR9->VAR42)
        VAR9->VAR23 ^= 1;
    return VAR5;
}
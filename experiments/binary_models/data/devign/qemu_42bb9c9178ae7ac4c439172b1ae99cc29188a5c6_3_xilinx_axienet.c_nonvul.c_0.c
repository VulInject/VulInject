static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    static const unsigned char VAR9[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    static const unsigned char VAR10[3] = {0x01, 0x00, 0x52};
    uint32_t VAR11[VAR12] = {0};
    int VAR13 = VAR8->VAR14 & (1 << 31);
    int VAR15, VAR16, VAR17, VAR18 = 0;
    uint32_t VAR19;
    uint16_t VAR20;
    int VAR21;
    FUN3(FUN4("", VAR22, VAR6));
    VAR15 = ~VAR5[0] & 0x1;
    VAR16 = memcmp(VAR5, VAR9, 6) == 0;
    VAR17 = !VAR15 && !VAR16;
    if (VAR17 && (memcmp(VAR10, VAR5, sizeof VAR10) == 0))
    {
        VAR18 = 1;
    }
    if (!(VAR8->VAR23[1] & VAR24))
    {
        if (VAR6 > 1518 && VAR6 <= 1522 && !(VAR8->VAR23[1] & VAR25))
        {
            return VAR6;
        }
    }
    if (!VAR13)
    {
        if (VAR15)
        {
            if (!FUN5(VAR5, VAR8->VAR26[0], VAR8->VAR26[1]))
            {
                return VAR6;
            }
        }
        else
        {
            if (VAR16)
            {
                if (VAR8->VAR27[VAR28] & VAR29)
                {
                    return VAR6;
                }
            }
            else
            {
                int VAR30 = 1;
                if (VAR8->VAR27[VAR28] & VAR31)
                {
                    return VAR6;
                }
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    if (FUN5(VAR5, VAR8->VAR32[VAR21][0], VAR8->VAR32[VAR21][1]))
                    {
                        VAR30 = 0;
                        break;
                    }
                }
                if (VAR30)
                {
                    return VAR6;
                }
            }
        }
    }
    if (FUN6(VAR8) && FUN7(VAR8))
    {
        if (VAR15)
        {
            if (!FUN5(VAR5, VAR8->VAR33[0], VAR8->VAR33[1]))
            {
                return VAR6;
            }
        }
        else
        {
            if (VAR16)
            {
                if (VAR8->VAR27[VAR28] & VAR29)
                {
                    return VAR6;
                }
            }
            else
            {
                int VAR34, VAR35;
                if (!memcmp(VAR5, VAR10, 3))
                {
                    return VAR6;
                }
                VAR34 = (VAR5[4] & 0x7f) << 8;
                VAR34 |= VAR5[5];
                VAR35 = 1 << (VAR34 & 0x1f);
                VAR34 >>= 5;
                if (!(VAR8->VAR36[VAR34] & VAR35))
                {
                    return VAR6;
                }
            }
        }
    }
    if (VAR6 < 12)
    {
        VAR8->VAR27[VAR37] |= VAR38;
        FUN8(VAR8);
        return -1;
    }
    if (VAR6 > (VAR8->VAR39 - 4))
    {
        VAR6 = VAR8->VAR39 - 4;
    }
    memcpy(VAR8->VAR40, VAR5, VAR6);
    memset(VAR8->VAR40 + VAR6, 0, 4);
    if (VAR8->VAR23[1] & VAR41)
    {
        VAR6 += 4;
    }
    VAR11[0] = 5 << 28;
    VAR19 = FUN9(VAR6 - 14, (VAR4 *)VAR8->VAR40 + 14);
    VAR19 = (VAR19 & 0xffff) + (VAR19 >> 16);
    VAR20 = (VAR19 & 0xffff) + (VAR19 >> 16);
    VAR11[3] = VAR20;
    VAR11[4] = VAR6 & 0xffff;
    VAR8->VAR42.VAR43 += VAR6;
    VAR8->VAR42.VAR44++;
    if (VAR17)
    {
        VAR8->VAR42.VAR45++;
        VAR11[2] |= 1 | (VAR18 << 1);
    }
    else if (VAR16)
    {
        VAR8->VAR42.VAR46++;
        VAR11[2] |= 1 << 3;
    }
    VAR11[2] |= 1 << 6;
    VAR8->VAR47 = VAR6;
    VAR8->VAR48 = 0;
    for (VAR21 = 0; VAR21 < FUN10(VAR11); ++VAR21)
    {
        VAR11[VAR21] = FUN11(VAR11[VAR21]);
    }
    VAR8->VAR49 = VAR50;
    memcpy(VAR8->VAR51, VAR11, VAR8->VAR49);
    FUN12(VAR8);
    FUN8(VAR8);
    return VAR6;
}
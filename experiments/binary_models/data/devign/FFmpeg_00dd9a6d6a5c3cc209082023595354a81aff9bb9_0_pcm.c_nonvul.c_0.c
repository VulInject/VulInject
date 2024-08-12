static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR7 *VAR19;
    VAR20 *VAR21;
    VAR14 = FUN2(VAR2->VAR22) / 8;
    VAR18 = 1;
    if (VAR23 == VAR2->VAR22)
    {
        if (VAR2->VAR24 != 20 && VAR2->VAR24 != 24)
        {
            FUN3(VAR2, VAR25, "");
            return FUN4(VAR26);
        }
        VAR18 = 2;
        VAR14 = VAR2->VAR24 * 2 / 8;
    }
    else if (VAR2->VAR22 == VAR27)
    {
        VAR18 = 2;
        VAR14 = 5;
    }
    if (VAR14 == 0)
    {
        FUN3(VAR2, VAR25, "");
        return FUN4(VAR26);
    }
    VAR16 = VAR2->VAR28 * VAR14;
    if (VAR16 && VAR9 % VAR16)
    {
        if (VAR9 < VAR16)
        {
            FUN3(VAR2, VAR25, "");
            return -1;
        }
        else
            VAR9 -= VAR9 % VAR16;
    }
    VAR16 = VAR9 / VAR14;
    VAR12->VAR29.VAR30 = VAR16 * VAR18 / VAR2->VAR28;
    if ((VAR17 = VAR2->FUN5(VAR2, &VAR12->VAR29)) < 0)
    {
        FUN3(VAR2, VAR25, "");
        return VAR17;
    }
    VAR19 = VAR12->VAR29.VAR3[0];
    switch (VAR2->VAR31->VAR32)
    {
    case VAR33:
        FUN6(32, VAR34, VAR8, VAR19, VAR16, 0, 0x80000000)
        break;
    case VAR35:
        FUN6(32, VAR36, VAR8, VAR19, VAR16, 0, 0x80000000)
        break;
    case VAR37:
        FUN6(32, VAR38, VAR8, VAR19, VAR16, 8, 0)
        break;
    case VAR39:
        FUN6(32, VAR40, VAR8, VAR19, VAR16, 8, 0)
        break;
    case VAR41:
        FUN6(32, VAR38, VAR8, VAR19, VAR16, 8, 0x800000)
        break;
    case VAR42:
        FUN6(32, VAR40, VAR8, VAR19, VAR16, 8, 0x800000)
        break;
    case VAR43:
        for (; VAR16 > 0; VAR16--)
        {
            uint32_t VAR44 = FUN7(&VAR8);
            VAR44 >>= 4;
            FUN8(VAR19, VAR45[(VAR44 >> 8) & 0xff] + (VAR45[VAR44 & 0xff] << 8));
            VAR19 += 2;
        }
        break;
    case VAR46:
    {
        int av_unused VAR47;
        VAR16 /= VAR2->VAR28;
        for (VAR15 = 0; VAR15 < VAR2->VAR28; VAR15++)
        {
            VAR19 = VAR12->VAR29.VAR48[VAR15];
            VAR47 = VAR16;
            FUN6(16, VAR49, VAR8, VAR19, VAR47, 0, 0)
            memcpy(VAR19, VAR8, VAR16 * 2);
            VAR8 += VAR16 * 2;
        }
        break;
    }
    case VAR50:
        FUN6(16, VAR49, VAR8, VAR19, VAR16, 0, 0x8000)
        break;
    case VAR51:
        FUN6(16, VAR52, VAR8, VAR19, VAR16, 0, 0x8000)
        break;
    case VAR53:
        for (; VAR16 > 0; VAR16--)
            *VAR19++ = *VAR8++ + 128;
        break;
    case VAR54:
        FUN6(64, VAR55, VAR8, VAR19, VAR16, 0, 0)
        break;
    case VAR56:
    case VAR57:
        FUN6(32, VAR34, VAR8, VAR19, VAR16, 0, 0)
        break;
    case VAR58:
        FUN6(16, VAR49, VAR8, VAR19, VAR16, 0, 0)
        break;
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR59:
        FUN6(64, VAR63, VAR8, VAR19, VAR16, 0, 0)
        break;
    case VAR60:
    case VAR61:
        FUN6(32, VAR36, VAR8, VAR19, VAR16, 0, 0)
        break;
    case VAR62:
        FUN6(16, VAR52, VAR8, VAR19, VAR16, 0, 0)
        break;
    case VAR54:
    case VAR57:
    case VAR56:
    case VAR58:
    case VAR64:
        memcpy(VAR19, VAR8, VAR16 * VAR14);
        break;
    case VAR65:
        for (; VAR16 > 0; VAR16--)
        {
            int VAR44 = *VAR8++;
            if (VAR44 < 128)
                VAR44 = 128 - VAR44;
            *VAR19++ = VAR44;
        }
        break;
    case VAR66:
    case VAR67:
        for (; VAR16 > 0; VAR16--)
        {
            FUN8(VAR19, VAR12->VAR68[*VAR8++]);
            VAR19 += 2;
        }
        break;
    case VAR23:
    {
        const VAR7 *VAR69;
        VAR21 = (VAR20 *)VAR12->VAR29.VAR3[0];
        VAR16 /= VAR2->VAR28;
        switch (VAR2->VAR24)
        {
        case 20:
            while (VAR16--)
            {
                VAR15 = VAR2->VAR28;
                VAR69 = VAR8 + 4 * VAR15;
                while (VAR15--)
                {
                    *VAR21++ = (FUN9(&VAR8) << 16) + ((*VAR69 & 0xf0) << 8);
                    *VAR21++ = (FUN9(&VAR8) << 16) + ((*VAR69++ & 0x0f) << 12);
                }
                VAR8 = VAR69;
            }
            break;
        case 24:
            while (VAR16--)
            {
                VAR15 = VAR2->VAR28;
                VAR69 = VAR8 + 4 * VAR15;
                while (VAR15--)
                {
                    *VAR21++ = (FUN9(&VAR8) << 16) + ((*VAR69++) << 8);
                    *VAR21++ = (FUN9(&VAR8) << 16) + ((*VAR69++) << 8);
                }
                VAR8 = VAR69;
            }
            break;
        }
        break;
    }
    case VAR27:
    {
        int VAR70;
        VAR16 /= VAR2->VAR28;
        for (VAR15 = 0; VAR15 < VAR2->VAR28; VAR15++)
        {
            VAR21 = (VAR20 *)VAR12->VAR29.VAR48[VAR15];
            for (VAR70 = 0; VAR70 < VAR16; VAR70++)
            {
                *VAR21++ = (VAR8[2] << 28) | (VAR8[1] << 20) | (VAR8[0] << 12) | ((VAR8[2] & 0x0F) << 8) | VAR8[1];
                *VAR21++ = (VAR8[4] << 24) | (VAR8[3] << 16) | ((VAR8[2] & 0xF0) << 8) | (VAR8[4] << 4) | (VAR8[3] >> 4);
                VAR8 += 5;
            }
        }
        break;
    }
    default:
        return -1;
    }
    *VAR4 = 1;
    *(VAR71 *)VAR3 = VAR12->VAR29;
    return VAR9;
}
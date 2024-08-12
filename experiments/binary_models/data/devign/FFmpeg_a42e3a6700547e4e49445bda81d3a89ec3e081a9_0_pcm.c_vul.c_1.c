static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    VAR7 *VAR21;
    VAR22 *VAR23;
    VAR16 = FUN2(VAR2->VAR24) / 8;
    VAR20 = 1;
    if (VAR2->VAR25->VAR26 == VAR27)
    {
        if (VAR2->VAR28 != 20 && VAR2->VAR28 != 24)
        {
            FUN3(VAR2, VAR29, "");
            return FUN4(VAR30);
        }
        VAR20 = 2;
        VAR16 = VAR2->VAR28 * 2 / 8;
    }
    else if (VAR2->VAR24 == VAR31)
    {
        VAR20 = 2;
        VAR16 = 5;
    }
    if (VAR16 == 0)
    {
        FUN3(VAR2, VAR29, "");
        return FUN4(VAR30);
    }
    VAR18 = VAR2->VAR32 * VAR16;
    if (VAR18 && VAR9 % VAR18)
    {
        if (VAR9 < VAR18)
        {
            FUN3(VAR2, VAR29, "");
            return -1;
        }
        else
            VAR9 -= VAR9 % VAR18;
    }
    VAR18 = VAR9 / VAR16;
    VAR15->VAR33 = VAR18 * VAR20 / VAR2->VAR32;
    if ((VAR19 = FUN5(VAR2, VAR15, 0)) < 0)
    {
        FUN3(VAR2, VAR29, "");
        return VAR19;
    }
    VAR21 = VAR15->VAR3[0];
    switch (VAR2->VAR25->VAR26)
    {
    case VAR34:
        FUN6(32, VAR35, VAR8, VAR21, VAR18, 0, 0x80000000)
        break;
    case VAR36:
        FUN6(32, VAR37, VAR8, VAR21, VAR18, 0, 0x80000000)
        break;
    case VAR38:
        FUN6(32, VAR39, VAR8, VAR21, VAR18, 8, 0)
        break;
    case VAR40:
        FUN6(32, VAR41, VAR8, VAR21, VAR18, 8, 0)
        break;
    case VAR42:
        FUN6(32, VAR39, VAR8, VAR21, VAR18, 8, 0x800000)
        break;
    case VAR43:
        FUN6(32, VAR41, VAR8, VAR21, VAR18, 8, 0x800000)
        break;
    case VAR44:
        for (; VAR18 > 0; VAR18--)
        {
            uint32_t VAR45 = FUN7(&VAR8);
            VAR45 >>= 4;
            FUN8(VAR21, VAR46[(VAR45 >> 8) & 0xff] + (VAR46[VAR45 & 0xff] << 8));
            VAR21 += 2;
        }
        break;
    case VAR47:
    {
        int av_unused VAR48;
        VAR18 /= VAR2->VAR32;
        for (VAR17 = 0; VAR17 < VAR2->VAR32; VAR17++)
        {
            VAR21 = VAR15->VAR49[VAR17];
            VAR48 = VAR18;
            FUN6(16, VAR50, VAR8, VAR21, VAR48, 0, 0)
            memcpy(VAR21, VAR8, VAR18 * 2);
            VAR8 += VAR18 * 2;
        }
        break;
    }
    case VAR51:
        FUN6(16, VAR50, VAR8, VAR21, VAR18, 0, 0x8000)
        break;
    case VAR52:
        FUN6(16, VAR53, VAR8, VAR21, VAR18, 0, 0x8000)
        break;
    case VAR54:
        for (; VAR18 > 0; VAR18--)
            *VAR21++ = *VAR8++ + 128;
        break;
    case VAR55:
        FUN6(64, VAR56, VAR8, VAR21, VAR18, 0, 0)
        break;
    case VAR57:
    case VAR58:
        FUN6(32, VAR35, VAR8, VAR21, VAR18, 0, 0)
        break;
    case VAR59:
        FUN6(16, VAR50, VAR8, VAR21, VAR18, 0, 0)
        break;
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR60:
        FUN6(64, VAR64, VAR8, VAR21, VAR18, 0, 0)
        break;
    case VAR61:
    case VAR62:
        FUN6(32, VAR37, VAR8, VAR21, VAR18, 0, 0)
        break;
    case VAR63:
        FUN6(16, VAR53, VAR8, VAR21, VAR18, 0, 0)
        break;
    case VAR55:
    case VAR58:
    case VAR57:
    case VAR59:
    case VAR65:
        memcpy(VAR21, VAR8, VAR18 * VAR16);
        break;
    case VAR66:
        for (; VAR18 > 0; VAR18--)
        {
            int VAR45 = *VAR8++;
            if (VAR45 < 128)
                VAR45 = 128 - VAR45;
            *VAR21++ = VAR45;
        }
        break;
    case VAR67:
    case VAR68:
        for (; VAR18 > 0; VAR18--)
        {
            FUN8(VAR21, VAR12->VAR69[*VAR8++]);
            VAR21 += 2;
        }
        break;
    case VAR27:
    {
        const VAR7 *VAR70;
        VAR23 = (VAR22 *)VAR15->VAR3[0];
        VAR18 /= VAR2->VAR32;
        switch (VAR2->VAR28)
        {
        case 20:
            while (VAR18--)
            {
                VAR17 = VAR2->VAR32;
                VAR70 = VAR8 + 4 * VAR17;
                while (VAR17--)
                {
                    *VAR23++ = (FUN9(&VAR8) << 16) + ((*VAR70 & 0xf0) << 8);
                    *VAR23++ = (FUN9(&VAR8) << 16) + ((*VAR70++ & 0x0f) << 12);
                }
                VAR8 = VAR70;
            }
            break;
        case 24:
            while (VAR18--)
            {
                VAR17 = VAR2->VAR32;
                VAR70 = VAR8 + 4 * VAR17;
                while (VAR17--)
                {
                    *VAR23++ = (FUN9(&VAR8) << 16) + ((*VAR70++) << 8);
                    *VAR23++ = (FUN9(&VAR8) << 16) + ((*VAR70++) << 8);
                }
                VAR8 = VAR70;
            }
            break;
        }
        break;
    }
    case VAR31:
    {
        int VAR71;
        VAR18 /= VAR2->VAR32;
        for (VAR17 = 0; VAR17 < VAR2->VAR32; VAR17++)
        {
            VAR23 = (VAR22 *)VAR15->VAR49[VAR17];
            for (VAR71 = 0; VAR71 < VAR18; VAR71++)
            {
                *VAR23++ = (VAR8[2] << 28) | (VAR8[1] << 20) | (VAR8[0] << 12) | ((VAR8[2] & 0x0F) << 8) | VAR8[1];
                *VAR23++ = (VAR8[4] << 24) | (VAR8[3] << 16) | ((VAR8[2] & 0xF0) << 8) | (VAR8[4] << 4) | (VAR8[3] >> 4);
                VAR8 += 5;
            }
        }
        break;
    }
    default:
        return -1;
    }
    *VAR4 = 1;
    return VAR9;
}
static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    short *VAR18;
    const VAR7 *VAR19, *VAR20, *VAR21[VAR22];
    VAR7 *VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    VAR32 *VAR33;
    VAR18 = VAR3;
    VAR19 = VAR8;
    if (VAR2->VAR34 != VAR2->VAR35->VAR36[0])
    {
        FUN2(VAR2, VAR37, "");
        return -1;
        if (VAR2->VAR38 <= 0 || VAR2->VAR38 > VAR22)
        {
            FUN2(VAR2, VAR37, "");
            return -1;
            VAR14 = FUN3(VAR2->VAR39) / 8;
            if (VAR40 == VAR2->VAR39)
                VAR14 = VAR2->VAR41 * 2 / 8;
            else if (VAR2->VAR39 == VAR42)
                VAR14 = 5;
            VAR16 = VAR2->VAR38 * VAR14;
            if (VAR16 && VAR9 % VAR16)
            {
                if (VAR9 < VAR16)
                {
                    FUN2(VAR2, VAR37, "");
                    return -1;
                }
                else
                    VAR9 -= VAR9 % VAR16;
                VAR9 = FUN4(VAR9, *VAR4 / 2);
                *VAR4 = 0;
                VAR16 = VAR9 / VAR14;
                switch (VAR2->VAR35->VAR43)
                {
                case VAR44:
                    FUN5(VAR32, VAR45, VAR19, VAR18, VAR16, 0, 0x80000000)
                    break;
                case VAR46:
                    FUN5(VAR32, VAR47, VAR19, VAR18, VAR16, 0, 0x80000000)
                    break;
                case VAR48:
                    FUN5(VAR26, VAR49, VAR19, VAR18, VAR16, 8, 0)
                    break;
                case VAR50:
                    FUN5(VAR26, VAR51, VAR19, VAR18, VAR16, 8, 0)
                    break;
                case VAR52:
                    FUN5(VAR32, VAR49, VAR19, VAR18, VAR16, 8, 0x800000)
                    break;
                case VAR53:
                    FUN5(VAR32, VAR51, VAR19, VAR18, VAR16, 8, 0x800000)
                    break;
                case VAR54:
                    for (; VAR16 > 0; VAR16--)
                    {
                        uint32_t VAR55 = FUN6(&VAR19);
                        VAR55 >>= 4;
                        *VAR18++ = VAR56[(VAR55 >> 8) & 0xff] + (VAR56[VAR55 & 0xff] << 8);
                        break;
                    case VAR57:
                        VAR16 /= VAR2->VAR38;
                        for (VAR15 = 0; VAR15 < VAR2->VAR38; VAR15++)
                            VAR21[VAR15] = &VAR19[VAR15 * VAR16 * 2];
                        for (; VAR16 > 0; VAR16--)
                            for (VAR15 = 0; VAR15 < VAR2->VAR38; VAR15++)
                                *VAR18++ = FUN7(&VAR21[VAR15]);
                        VAR19 = VAR21[VAR2->VAR38 - 1];
                        break;
                    case VAR58:
                        FUN5(VAR30, VAR59, VAR19, VAR18, VAR16, 0, 0x8000)
                        break;
                    case VAR60:
                        FUN5(VAR30, VAR61, VAR19, VAR18, VAR16, 0, 0x8000)
                        break;
                    case VAR62:
                        VAR23 = (VAR7 *)VAR18;
                        for (; VAR16 > 0; VAR16--)
                        {
                            *VAR23++ = *VAR19++ + 128;
                            VAR18 = (short *)VAR23;
                            break;
                        case VAR63:
                            FUN5(VAR28, VAR64, VAR19, VAR18, VAR16, 0, 0)
                            break;
                        case VAR65:
                        case VAR66:
                            FUN5(VAR26, VAR45, VAR19, VAR18, VAR16, 0, 0)
                            break;
                        case VAR67:
                            FUN5(VAR24, VAR59, VAR19, VAR18, VAR16, 0, 0)
                            break;
                        case VAR68:
                        case VAR69:
                        case VAR70:
                        case VAR71:
                        case VAR68:
                            FUN5(VAR28, VAR72, VAR19, VAR18, VAR16, 0, 0)
                            break;
                        case VAR69:
                        case VAR70:
                            FUN5(VAR26, VAR47, VAR19, VAR18, VAR16, 0, 0)
                            break;
                        case VAR71:
                            FUN5(VAR24, VAR61, VAR19, VAR18, VAR16, 0, 0)
                            break;
                        case VAR63:
                        case VAR66:
                        case VAR65:
                        case VAR67:
                        case VAR73:
                            memcpy(VAR18, VAR19, VAR16 * VAR14);
                            VAR19 += VAR16 * VAR14;
                            VAR18 = (short *)((VAR7 *)VAR3 + VAR16 * VAR14);
                            break;
                        case VAR74:
                            for (; VAR16 > 0; VAR16--)
                            {
                                int VAR75 = *VAR19++;
                                if (VAR75 & 128)
                                    VAR75 -= 128;
                                else
                                    VAR75 = -VAR75;
                                *VAR18++ = VAR75 << 8;
                                break;
                            case VAR76:
                            case VAR77:
                                for (; VAR16 > 0; VAR16--)
                                {
                                    *VAR18++ = VAR12->VAR78[*VAR19++];
                                    break;
                                case VAR40:
                                    VAR27 = VAR3;
                                    VAR16 /= VAR2->VAR38;
                                    switch (VAR2->VAR41)
                                    {
                                    case 20:
                                        while (VAR16--)
                                        {
                                            VAR15 = VAR2->VAR38;
                                            VAR20 = VAR19 + 4 * VAR15;
                                            while (VAR15--)
                                            {
                                                *VAR27++ = (FUN8(&VAR19) << 16) + ((*VAR20 & 0xf0) << 8);
                                                *VAR27++ = (FUN8(&VAR19) << 16) + ((*VAR20++ & 0x0f) << 12);
                                                VAR19 = VAR20;
                                                break;
                                            case 24:
                                                while (VAR16--)
                                                {
                                                    VAR15 = VAR2->VAR38;
                                                    VAR20 = VAR19 + 4 * VAR15;
                                                    while (VAR15--)
                                                    {
                                                        *VAR27++ = (FUN8(&VAR19) << 16) + ((*VAR20++) << 8);
                                                        *VAR27++ = (FUN8(&VAR19) << 16) + ((*VAR20++) << 8);
                                                        VAR19 = VAR20;
                                                        break;
                                                    default:
                                                        FUN2(VAR2, VAR37, "");
                                                        return -1;
                                                        break;
                                                        VAR18 = (short *)VAR27;
                                                        break;
                                                    case VAR42:
                                                        VAR27 = VAR3;
                                                        VAR16 /= VAR2->VAR38;
                                                        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
                                                        {
                                                            for (VAR15 = 0, VAR20 = VAR19 + VAR17 * 5; VAR15 < VAR2->VAR38; VAR15++, VAR20 += VAR16 * 5)
                                                            {
                                                                *VAR27++ = (VAR20[2] << 28) | (VAR20[1] << 20) | (VAR20[0] << 12) | ((VAR20[2] & 0xF) << 8) | VAR20[1];
                                                                for (VAR15 = 0, VAR20 = VAR19 + VAR17 * 5; VAR15 < VAR2->VAR38; VAR15++, VAR20 += VAR16 * 5)
                                                                {
                                                                    *VAR27++ = (VAR20[4] << 24) | (VAR20[3] << 16) | ((VAR20[2] & 0xF0) << 8) | (VAR20[4] << 4) | (VAR20[3] >> 4);
                                                                    VAR19 += VAR16 * VAR2->VAR38 * 5;
                                                                    VAR18 = (short *)VAR27;
                                                                    break;
                                                                default:
                                                                    return -1;
                                                                    *VAR4 = (VAR7 *)VAR18 - (VAR7 *)VAR3;
                                                                    return VAR19 - VAR8
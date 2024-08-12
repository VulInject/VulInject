int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR4 = VAR2->VAR10;
    VAR5 = VAR2->VAR11;
    VAR6 = VAR2->VAR12;
    VAR7 = VAR2->VAR13;
    VAR8 = VAR2->VAR14;
    VAR9 = FUN2(VAR2->VAR10);
    if (VAR9 > 0 && VAR6 > 0 && VAR3 > 0)
        return (VAR3 * 8) / (VAR9 * VAR6);
    VAR9 = VAR2->VAR15;
    switch (VAR4)
    {
    case VAR16:
        return 32;
    case VAR17:
        return 64;
    case VAR18:
        return 128;
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
        return 160;
    case VAR24:
        return 256;
    case VAR25:
    case VAR26:
        return 320;
    case VAR27:
        return 384;
    case VAR28:
        return 512;
    case VAR29:
        return 1024;
    case VAR30:
    case VAR31:
        return 1152;
    case VAR32:
        return 1536;
    }
    if (VAR5 > 0)
    {
        if (VAR4 == VAR33)
            return 256 * VAR5 / 245;
        if (VAR6 > 0)
        {
            if (VAR4 == VAR34)
                return (480 << (VAR5 / 22050)) / VAR6;
        }
    }
    if (VAR7 > 0)
    {
        if (VAR4 == VAR35)
        {
            switch (VAR7)
            {
            case 20:
                return 160;
            case 19:
                return 144;
            case 29:
                return 288;
            case 37:
                return 480;
            }
        }
    }
    if (VAR3 > 0)
    {
        if (VAR4 == VAR36)
            return 240 * (VAR3 / 32);
        if (VAR4 == VAR37)
            return 256 * (VAR3 / 64);
        if (VAR9 > 0)
        {
            if (VAR4 == VAR38)
                return VAR3 * 8 / VAR9;
        }
        if (VAR6 > 0)
        {
            switch (VAR4)
            {
            case VAR39:
            case VAR40:
                return (VAR3 - 4 * VAR6) * 2 / VAR6;
            case VAR41:
                return (VAR3 - 4) * 2 / VAR6;
            case VAR42:
                return (VAR3 - 8) * 2 / VAR6;
            case VAR43:
                return (VAR3 / 128) * 224 / VAR6;
            case VAR44:
                return (VAR3 - 6 - VAR6) / VAR6;
            case VAR45:
                return (VAR3 - 8) / VAR6;
            case VAR46:
                return (VAR3 - 2 * VAR6) / VAR6;
            case VAR47:
                return 3 * VAR3 / VAR6;
            case VAR48:
                return 6 * VAR3 / VAR6;
            case VAR49:
                return 2 * (VAR3 / (5 * VAR6));
            }
            if (VAR8)
            {
                if (VAR4 == VAR50)
                {
                    if (VAR8 == 3)
                        return VAR3 / VAR6;
                    else
                        return VAR3 * 2 / VAR6;
                }
            }
            if (VAR7 > 0)
            {
                int VAR51 = VAR3 / VAR7;
                switch (VAR2->VAR10)
                {
                case VAR52:
                    return VAR51 * (1 + (VAR7 - 4 * VAR6) / (4 * VAR6) * 8);
                case VAR53:
                    return VAR51 * (((VAR7 - 16) * 2 / 3 * 4) / VAR6);
                case VAR54:
                    return VAR51 * (1 + (VAR7 - 4 * VAR6) * 2 / VAR6);
                case VAR55:
                    return VAR51 * (2 + (VAR7 - 7 * VAR6) * 2 / VAR6);
                }
            }
            if (VAR9 > 0)
            {
                switch (VAR2->VAR10)
                {
                case VAR56:
                    return 2 * (VAR3 / ((VAR9 * 2 / 8) * VAR6));
                case VAR57:
                    return VAR3 / ((FUN3(VAR6, 2) * VAR9) / 8);
                case VAR58:
                    return 2 * (VAR3 / ((VAR9 + 4) / 4)) / VAR6;
                }
            }
        }
    }
    return 0;
}
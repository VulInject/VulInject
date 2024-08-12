FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    unsigned VAR7 = 8 * (VAR2 & 0x3);
    uint32_t VAR8 = ~(((1ULL << (VAR4 * 8)) - 1) << VAR7);
    uint32_t VAR9 = VAR3;
    VAR9 <<= VAR7;
    switch (VAR2 & ~0x3)
    {
    case VAR10:
        VAR6->VAR11 = (VAR6->VAR11 & VAR8) | VAR9;
        FUN2(VAR6->VAR11, VAR8, VAR9);
        if (!(VAR8 & 0xFF000000) && FUN3(VAR6->VAR12) && VAR6->VAR13 && VAR6->VAR14 && FUN4(VAR6->VAR15) == VAR16)
        {
            FUN5(VAR6);
            break;
        case VAR17:
            if (!FUN3(VAR6->VAR12))
            {
                FUN2(VAR6->VAR14, VAR8, VAR9);
                FUN2(VAR6->VAR13, VAR8 >> 16, VAR9 >> 16);
                break;
            case VAR18:
                FUN2(VAR6->VAR19, VAR8, VAR9);
                break;
            case VAR20:
                if (!(VAR6->VAR21 & VAR22))
                {
                    VAR9 &= ~VAR23;
                    FUN2(VAR6->VAR24, VAR8, VAR9);
                    FUN2(VAR6->VAR25, VAR8 >> 16, VAR9 >> 16);
                    if ((VAR8 & 0xFF000000) || !FUN6(VAR6))
                    {
                        break;
                        FUN7(VAR6);
                        break;
                    case VAR26:
                        if (FUN8(VAR6, VAR2 - VAR26))
                        {
                            FUN9(VAR6, VAR9 >> VAR7, VAR4);
                            break;
                        case VAR27:
                            if (!(VAR8 & 0xFF0000))
                            {
                                FUN10(VAR6, VAR9 >> 16);
                                FUN2(VAR6->VAR15, VAR8, VAR9);
                                FUN2(VAR6->VAR28, VAR8 >> 8, VAR9 >> 8);
                                FUN2(VAR6->VAR29, VAR8 >> 24, VAR9 >> 24);
                                if (!(VAR6->VAR12 & VAR30) || ((VAR6->VAR28 >> 1) & 0x7) < 5 || !(VAR6->VAR21 & (1 << (31 - ((VAR6->VAR28 >> 1) & 0x7)))))
                                {
                                    VAR6->VAR28 &= ~VAR31;
                                    break;
                                case VAR32:
                                    if (!(VAR8 & 0xFF000000))
                                    {
                                        FUN11(VAR6, VAR9 >> 24);
                                        FUN2(VAR6->VAR33, VAR8, VAR9);
                                        FUN2(VAR6->VAR34, VAR8 >> 16, VAR9 >> 16);
                                        if (VAR6->VAR33 & VAR35)
                                        {
                                            VAR6->VAR33 |= VAR36;
                                        }
                                        else
                                        {
                                            VAR6->VAR33 &= ~VAR36;
                                            break;
                                        case VAR37:
                                            if (VAR6->VAR38 & VAR39)
                                            {
                                                VAR9 &= ~VAR40;
                                                VAR6->VAR41 &= VAR8 | ~VAR9;
                                                VAR6->VAR42 &= (VAR8 >> 16) | ~(VAR9 >> 16);
                                                if (VAR6->VAR42)
                                                {
                                                    VAR6->VAR41 |= VAR43;
                                                }
                                                else
                                                {
                                                    VAR6->VAR41 &= ~VAR43;
                                                    FUN12(VAR6);
                                                    break;
                                                case VAR44:
                                                    FUN2(VAR6->VAR38, VAR8, VAR9);
                                                    FUN2(VAR6->VAR45, VAR8 >> 16, VAR9 >> 16);
                                                    VAR6->VAR41 &= VAR6->VAR38;
                                                    VAR6->VAR42 &= VAR6->VAR45;
                                                    if (VAR6->VAR42)
                                                    {
                                                        VAR6->VAR41 |= VAR43;
                                                    }
                                                    else
                                                    {
                                                        VAR6->VAR41 &= ~VAR43;
                                                        FUN12(VAR6);
                                                        break;
                                                    case VAR46:
                                                        FUN2(VAR6->VAR47, VAR8, VAR9);
                                                        FUN2(VAR6->VAR48, VAR8 >> 16, VAR9 >> 16);
                                                        FUN12(VAR6);
                                                        break;
                                                    case VAR49:
                                                        FUN2(VAR6->VAR50, VAR8, VAR9);
                                                        break;
                                                    case VAR51:
                                                        VAR6->VAR52 = (VAR6->VAR52 & (0xFFFFFFFF00000000ULL | (VAR53)VAR8)) | (VAR53)VAR9;
                                                        break;
                                                    case VAR51 + 4:
                                                        VAR6->VAR52 = (VAR6->VAR52 & (0x00000000FFFFFFFFULL | ((VAR53)VAR8 << 32))) | ((VAR53)VAR9 << 32);
                                                        break;
                                                    case VAR54:
                                                        VAR6->VAR55 |= VAR9;
                                                        VAR6->VAR42 |= (VAR9 >> 16) & VAR6->VAR45;
                                                        if (VAR6->VAR55)
                                                        {
                                                            VAR6->VAR42 |= VAR56;
                                                            if (VAR6->VAR42)
                                                            {
                                                                VAR6->VAR41 |= VAR43;
                                                                FUN12(VAR6);
                                                                break;
                                                            default:
                                                                FUN13("", VAR4, (int)VAR2, VAR9 >> VAR7, VAR9 >> VAR7);
                                                                break;
                                                                FUN14("", VAR4, (int)VAR2, VAR9 >> VAR7, VAR9 >> VAR7)
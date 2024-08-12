void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (VAR5->VAR6 <= VAR7)
    {
        FUN2("", VAR5->VAR6, VAR3);
        switch (VAR5->VAR6)
        {
        case VAR8:
            if (VAR3 == VAR9 || VAR3 == VAR10 || VAR3 == VAR11 || VAR3 == VAR12 || VAR3 == VAR13)
            {
                VAR5->VAR14[VAR5->VAR6] = VAR3;
            }
            break;
        case VAR15:
        case VAR16:
        case VAR17:
        case VAR18:
        case VAR19:
        case VAR20:
            VAR5->VAR14[VAR5->VAR6] = VAR3;
            FUN3(VAR5);
            break;
        case VAR21:
            if (VAR5->VAR14[VAR17] == 4)
            {
                VAR3 &= (VAR5->VAR22 >> 2);
            }
            else
            {
                VAR3 &= VAR5->VAR22;
            }
            VAR5->VAR14[VAR5->VAR6] = VAR3;
            VAR5->VAR23 = (VAR3 << 16);
            FUN4(VAR5);
            break;
        case VAR24:
            if ((VAR3 & VAR25) && !(VAR5->VAR14[VAR24] & VAR25))
            {
                int VAR26, VAR27;
                VAR5->VAR14[VAR18] = 0;
                VAR5->VAR14[VAR19] = 0;
                VAR5->VAR14[VAR20] = 0;
                VAR5->VAR14[VAR24] |= VAR25;
                FUN3(VAR5);
                if (!(VAR3 & VAR28))
                {
                    memset(VAR5->VAR29, 0, VAR5->VAR14[VAR16] * VAR5->VAR30);
                }
                VAR5->VAR31[VAR32] = (VAR5->VAR31[VAR32] & ~0x0c) | 0x04 | VAR33;
                VAR5->VAR34[VAR35] |= 3;
                VAR5->VAR34[VAR36] = VAR5->VAR30 >> 3;
                VAR5->VAR34[VAR37] = (VAR5->VAR14[VAR15] >> 3) - 1;
                VAR26 = VAR5->VAR14[VAR16] - 1;
                VAR5->VAR34[VAR38] = VAR26;
                VAR5->VAR34[VAR39] = (VAR5->VAR34[VAR39] & ~0x42) | ((VAR26 >> 7) & 0x02) | ((VAR26 >> 3) & 0x40);
                VAR5->VAR34[VAR40] = 0xff;
                VAR5->VAR34[VAR39] |= 0x10;
                VAR5->VAR34[VAR41] |= 0x40;
                if (VAR5->VAR14[VAR17] == 4)
                {
                    VAR27 = 0;
                    VAR5->VAR42[VAR43] &= ~8;
                }
                else
                {
                    VAR27 = 2;
                    VAR5->VAR42[VAR44] |= VAR45;
                    VAR5->VAR42[VAR46] |= VAR47;
                }
                VAR5->VAR31[VAR48] = (VAR5->VAR31[VAR48] & ~0x60) | (VAR27 << 5);
                VAR5->VAR34[VAR41] &= ~0x9f;
            }
            else
            {
                VAR5->VAR23 = 0;
            }
            VAR5->VAR49 = (VAR3 & VAR50) > 0;
            VAR5->VAR14[VAR5->VAR6] = VAR3;
            FUN4(VAR5);
            break;
        default:
            break;
        }
    }
}
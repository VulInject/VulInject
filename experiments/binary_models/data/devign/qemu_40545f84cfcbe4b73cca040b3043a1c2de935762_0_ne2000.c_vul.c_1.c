static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6, VAR7;
    VAR2 &= 0xf;
    FUN2("", VAR2, VAR3);
    if (VAR2 == VAR8)
    {
        VAR5->VAR9 = VAR3;
        if (VAR3 & VAR10)
        {
            VAR5->VAR11 &= ~VAR12;
            if ((VAR3 & (VAR13 | VAR14)) && VAR5->VAR15 == 0)
            {
                VAR5->VAR11 |= VAR16;
                FUN3(VAR5);
            }
            if (VAR3 & VAR17)
            {
                FUN4(VAR5->VAR18, VAR5->VAR19 + (VAR5->VAR20 << 8), VAR5->VAR21);
                VAR5->VAR22 = VAR23;
                VAR5->VAR11 |= VAR24;
                FUN3(VAR5);
            }
        }
    }
    else
    {
        VAR7 = VAR5->VAR9 >> 6;
        VAR6 = VAR2 | (VAR7 << 4);
        switch (VAR6)
        {
        case VAR25:
            VAR5->VAR26 = VAR3 << 8;
            break;
        case VAR27:
            VAR5->VAR28 = VAR3 << 8;
            break;
        case VAR29:
            VAR5->VAR30 = VAR3;
            break;
        case VAR31:
            VAR5->VAR32 = VAR3;
            FUN3(VAR5);
            break;
        case VAR33:
            VAR5->VAR20 = VAR3;
            break;
        case VAR34:
            VAR5->VAR21 = (VAR5->VAR21 & 0xff00) | VAR3;
            break;
        case VAR35:
            VAR5->VAR21 = (VAR5->VAR21 & 0x00ff) | (VAR3 << 8);
            break;
        case VAR36:
            VAR5->VAR37 = (VAR5->VAR37 & 0xff00) | VAR3;
            break;
        case VAR38:
            VAR5->VAR37 = (VAR5->VAR37 & 0x00ff) | (VAR3 << 8);
            break;
        case VAR39:
            VAR5->VAR15 = (VAR5->VAR15 & 0xff00) | VAR3;
            break;
        case VAR40:
            VAR5->VAR15 = (VAR5->VAR15 & 0x00ff) | (VAR3 << 8);
            break;
        case VAR41:
            VAR5->VAR42 = VAR3;
            break;
        case VAR43:
            VAR5->VAR11 &= ~(VAR3 & 0x7f);
            FUN3(VAR5);
            break;
        case VAR44 ... VAR44 + 5:
            VAR5->VAR45[VAR6 - VAR44] = VAR3;
            break;
        case VAR46:
            VAR5->VAR47 = VAR3;
            break;
        case VAR48 ... VAR48 + 7:
            VAR5->VAR49[VAR6 - VAR48] = VAR3;
            break;
        }
    }
}
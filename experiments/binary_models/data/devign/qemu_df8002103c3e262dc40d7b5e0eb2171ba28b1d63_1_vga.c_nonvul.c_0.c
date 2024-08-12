void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6;
    if (FUN2(VAR5, VAR2))
    {
        return;
    }
    FUN3("", VAR2, VAR3);
    switch (VAR2)
    {
    case VAR7:
        if (VAR5->VAR8 == 0)
        {
            VAR3 &= 0x3f;
            VAR5->VAR9 = VAR3;
        }
        else
        {
            VAR6 = VAR5->VAR9 & 0x1f;
            switch (VAR6)
            {
            case VAR10 ... VAR11:
                VAR5->VAR12[VAR6] = VAR3 & 0x3f;
                break;
            case VAR13:
                VAR5->VAR12[VAR6] = VAR3 & ~0x10;
                break;
            case VAR14:
                VAR5->VAR12[VAR6] = VAR3;
                break;
            case VAR15:
                VAR5->VAR12[VAR6] = VAR3 & ~0xc0;
                break;
            case VAR16:
                VAR5->VAR12[VAR6] = VAR3 & ~0xf0;
                break;
            case VAR17:
                VAR5->VAR12[VAR6] = VAR3 & ~0xf0;
                break;
            default:
                break;
            }
        }
        VAR5->VAR8 ^= 1;
        break;
    case VAR18:
        VAR5->VAR19 = VAR3 & ~0x10;
        VAR5->FUN4(VAR5);
        break;
    case VAR20:
        VAR5->VAR21 = VAR3 & 7;
        break;
    case VAR22:
        FUN3("", VAR5->VAR21, VAR3);
        VAR5->VAR23[VAR5->VAR21] = VAR3 & VAR24[VAR5->VAR21];
        if (VAR5->VAR21 == VAR25)
        {
            VAR5->FUN4(VAR5);
        }
        FUN5(VAR5);
        break;
    case VAR26:
        VAR5->VAR27 = VAR3;
        VAR5->VAR28 = 0;
        VAR5->VAR29 = 3;
        break;
    case VAR30:
        VAR5->VAR31 = VAR3;
        VAR5->VAR28 = 0;
        VAR5->VAR29 = 0;
        break;
    case VAR32:
        VAR5->VAR33[VAR5->VAR28] = VAR3;
        if (++VAR5->VAR28 == 3)
        {
            memcpy(&VAR5->VAR34[VAR5->VAR31 * 3], VAR5->VAR33, 3);
            VAR5->VAR28 = 0;
            VAR5->VAR31++;
        }
        break;
    case VAR35:
        VAR5->VAR36 = VAR3 & 0x0f;
        break;
    case VAR37:
        FUN3("", VAR5->VAR36, VAR3);
        VAR5->VAR38[VAR5->VAR36] = VAR3 & VAR39[VAR5->VAR36];
        FUN5(VAR5);
        break;
    case VAR40:
    case VAR41:
        VAR5->VAR42 = VAR3;
        break;
    case VAR43:
    case VAR44:
        FUN3("", VAR5->VAR42, VAR3);
        if ((VAR5->VAR45[VAR46] & VAR47) && VAR5->VAR42 <= VAR48)
        {
            if (VAR5->VAR42 == VAR48)
            {
                VAR5->VAR45[VAR48] = (VAR5->VAR45[VAR48] & ~0x10) | (VAR3 & 0x10);
            }
            return;
        }
        VAR5->VAR45[VAR5->VAR42] = VAR3;
        switch (VAR5->VAR42)
        {
        case VAR49:
        case VAR50:
        case VAR51:
        case VAR52:
        case VAR48:
        case VAR46:
        case VAR53:
            VAR5->FUN4(VAR5);
            break;
        }
        break;
    case VAR54:
    case VAR55:
        VAR5->VAR56 = VAR3 & 0x10;
        break;
    }
}
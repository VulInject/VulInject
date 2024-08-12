static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    VAR6 = (VAR2 >> VAR5->VAR7) & (VAR8 - 1);
    FUN2("", VAR6, VAR5->VAR9[VAR6], VAR3);
    switch (VAR6)
    {
    case VAR10:
    case VAR11:
        VAR5->VAR12[VAR13] &= ~VAR14;
        break;
    case VAR15:
        if (VAR5->VAR16)
        {
            VAR5->VAR17[VAR5->VAR18++] = VAR3 & 0xff;
        }
        else if ((VAR5->VAR12[VAR13] & VAR19) == 0)
        {
            uint8_t VAR20;
            VAR20 = VAR3 & 0xff;
            VAR5->VAR21--;
            fprintf(VAR22, "");
        }
        else
        {
            VAR5->VAR21++;
            VAR5->VAR23[VAR5->VAR24++] = VAR3 & 0xff;
        }
        break;
    case VAR25:
        VAR5->VAR12[VAR6] = VAR3;
        if (VAR3 & VAR26)
        {
            VAR5->VAR27 = 1;
            VAR5->VAR12[VAR10] = VAR5->VAR9[VAR10];
            VAR5->VAR12[VAR11] = VAR5->VAR9[VAR11];
        }
        else
        {
            VAR5->VAR27 = 0;
        }
        switch (VAR3 & VAR28)
        {
        case VAR29:
            FUN2("", VAR3);
            break;
        case VAR30:
            FUN2("", VAR3);
            VAR5->VAR12[VAR31] = VAR32;
            VAR5->VAR12[VAR33] = 0;
            VAR5->VAR12[VAR34] = 0;
            break;
        case VAR35:
            FUN2("", VAR3);
            FUN3(VAR5);
            break;
        case VAR36:
            FUN2("", VAR3);
            VAR5->VAR12[VAR31] = VAR37;
            if (!(VAR5->VAR9[VAR38] & VAR39))
            {
                FUN4(VAR5);
            }
            break;
        case VAR40:
            FUN5(VAR5);
            break;
        case VAR41:
            FUN2("", VAR3);
            FUN6(VAR5);
            break;
        case VAR42:
            FUN2("", VAR3);
            FUN6(VAR5);
            VAR5->VAR12[VAR31] = VAR43;
            VAR5->VAR12[VAR33] = 0;
            break;
        case VAR44:
            FUN2("", VAR3);
            break;
        case VAR45:
            FUN2("", VAR3);
            FUN7(VAR5);
            break;
        case VAR46:
            FUN2("", VAR3);
            FUN8(VAR5);
            break;
        case VAR47:
            FUN2("", VAR3);
            break;
        default:
            FUN2("", VAR3);
            break;
        }
        break;
    case VAR48 ... VAR49:
        break;
    case VAR38:
        VAR5->VAR12[VAR6] = VAR3;
        break;
    case VAR50 ... VAR51:
        break;
    case VAR52:
        VAR5->VAR12[VAR6] = VAR3 & VAR53;
        break;
    case VAR54 ... VAR55:
        VAR5->VAR12[VAR6] = VAR3;
        break;
    default:
        break;
    }
    VAR5->VAR9[VAR6] = VAR3;
}
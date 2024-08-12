static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    switch (VAR6[0] >> 5)
    {
    case 0:
        VAR2->VAR7 = VAR6[4];
        break;
    case 1:
    case 2:
        VAR2->VAR7 = FUN2(&VAR6[7]);
        break;
    case 4:
        VAR2->VAR7 = FUN3(&VAR6[10]) & 0xffffffffULL;
        break;
    case 5:
        VAR2->VAR7 = FUN3(&VAR6[6]) & 0xffffffffULL;
        break;
    default:
        return -1;
    }
    switch (VAR6[0])
    {
    case VAR8:
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
        VAR2->VAR7 = 0;
        break;
    case VAR35:
        break;
    case VAR36:
    case VAR37:
        VAR2->VAR7 = VAR4->VAR38;
        break;
    case VAR39:
        VAR2->VAR7 = 8;
        break;
    case VAR40:
        VAR2->VAR7 = 6;
        break;
    case VAR41:
        if (VAR4->VAR42 == VAR43)
        {
            VAR2->VAR7 = VAR6[10] | (VAR6[9] << 8);
        }
        else
        {
            VAR2->VAR7 = VAR6[9] | (VAR6[8] << 8);
        }
        break;
    case VAR44:
        if (VAR2->VAR7 == 0)
        {
            VAR2->VAR7 = 256;
        }
    case VAR45:
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
        VAR2->VAR7 *= VAR4->VAR38;
        break;
    case VAR51:
    case VAR52:
        if (VAR2->VAR7 == 0)
        {
            VAR2->VAR7 = 256;
        }
    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
        VAR2->VAR7 *= VAR4->VAR38;
        break;
    case VAR57:
        if (VAR4->VAR42 == VAR43 && (VAR6[1] & 16))
        {
            VAR2->VAR7 = 12;
        }
        else
        {
            VAR2->VAR7 = (VAR6[1] & 16) == 0 ? 0 : (VAR6[1] & 32 ? 8 : 4);
        }
        break;
    case VAR58:
    case VAR59:
    case VAR60:
        VAR2->VAR7 = VAR6[4] | (VAR6[3] << 8);
        break;
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR64:
        VAR2->VAR7 = VAR6[8] | (VAR6[7] << 8) | (VAR6[6] << 16);
        break;
    case VAR65:
        VAR2->VAR7 = FUN3(&VAR6[5]) & 0xffffffffULL;
        break;
    case VAR66:
        if (VAR4->VAR42 == VAR43)
        {
            VAR2->VAR7 = FUN4(VAR6[9] | (VAR6[8] << 8), VAR6[10], VAR6[1] & 0x1f);
        }
        break;
    case VAR67:
    case VAR68:
    case VAR69:
    case VAR70:
    case VAR71:
        if (VAR4->VAR42 == VAR43)
        {
            VAR2->VAR7 = VAR6[9] | (VAR6[8] << 8);
        }
        break;
    }
    return 0;
}
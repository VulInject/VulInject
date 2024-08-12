static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR2->VAR7 = FUN2(VAR6);
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
        VAR2->VAR7 = 0;
        break;
    case VAR33:
    case VAR34:
    case VAR35:
        if ((VAR6[1] & 2) == 0)
        {
            VAR2->VAR7 = 0;
        }
        else if ((VAR6[1] & 4) == 1)
        {
            VAR2->VAR7 = 1;
        }
        VAR2->VAR7 *= VAR4->VAR36;
        break;
    case VAR37:
        break;
    case VAR38:
    case VAR39:
        VAR2->VAR7 = VAR4->VAR36;
        break;
    case VAR40:
        VAR2->VAR7 = 8;
        break;
    case VAR41:
        VAR2->VAR7 = 6;
        break;
    case VAR42:
        if (VAR4->VAR43 == VAR44)
        {
            VAR2->VAR7 = VAR6[10] | (VAR6[9] << 8);
        }
        else
        {
            VAR2->VAR7 = VAR6[9] | (VAR6[8] << 8);
        }
        break;
    case VAR45:
        if (VAR2->VAR7 == 0)
        {
            VAR2->VAR7 = 256;
        }
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
        VAR2->VAR7 *= VAR4->VAR36;
        break;
    case VAR52:
    case VAR53:
        if (VAR2->VAR7 == 0)
        {
            VAR2->VAR7 = 256;
        }
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
        VAR2->VAR7 *= VAR4->VAR36;
        break;
    case VAR58:
        if (VAR4->VAR43 == VAR44 && (VAR6[1] & 16))
        {
            VAR2->VAR7 = 12;
        }
        else
        {
            VAR2->VAR7 = (VAR6[1] & 16) == 0 ? 0 : (VAR6[1] & 32 ? 8 : 4);
        }
        break;
    case VAR59:
    case VAR60:
    case VAR61:
        VAR2->VAR7 = VAR6[4] | (VAR6[3] << 8);
        break;
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
        VAR2->VAR7 = VAR6[8] | (VAR6[7] << 8) | (VAR6[6] << 16);
        break;
    case VAR66:
        VAR2->VAR7 = FUN3(&VAR6[5]) & 0xffffffffULL;
        break;
    case VAR67:
        if (VAR4->VAR43 == VAR44)
        {
            VAR2->VAR7 = FUN4(VAR6[9] | (VAR6[8] << 8), VAR6[10], VAR6[1] & 0x1f);
        }
        break;
    case VAR68:
    case VAR69:
    case VAR70:
    case VAR71:
    case VAR72:
        if (VAR4->VAR43 == VAR44)
        {
            VAR2->VAR7 = VAR6[9] | (VAR6[8] << 8);
        }
        break;
    case VAR73:
        if (VAR4->VAR43 == VAR44)
        {
            VAR2->VAR7 = 0;
        }
        else
        {
            VAR2->VAR7 = FUN5(VAR4, VAR6);
        }
        break;
    case VAR74:
        VAR2->VAR7 = FUN6(VAR4, VAR6);
        break;
    }
    return 0;
}
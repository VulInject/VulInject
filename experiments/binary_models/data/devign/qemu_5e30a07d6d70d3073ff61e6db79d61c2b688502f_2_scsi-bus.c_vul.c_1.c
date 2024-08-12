static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    switch (VAR4[0] >> 5)
    {
    case 0:
        VAR2->VAR4.VAR5 = VAR4[4];
        VAR2->VAR4.VAR6 = 6;
        if (VAR2->VAR4.VAR5 == 0)
            VAR2->VAR4.VAR5 = 256;
        break;
    case 1:
    case 2:
        VAR2->VAR4.VAR5 = VAR4[8] | (VAR4[7] << 8);
        VAR2->VAR4.VAR6 = 10;
        break;
    case 4:
        VAR2->VAR4.VAR5 = VAR4[13] | (VAR4[12] << 8) | (VAR4[11] << 16) | (VAR4[10] << 24);
        VAR2->VAR4.VAR6 = 16;
        break;
    case 5:
        VAR2->VAR4.VAR5 = VAR4[9] | (VAR4[8] << 8) | (VAR4[7] << 16) | (VAR4[6] << 24);
        VAR2->VAR4.VAR6 = 12;
        break;
    default:
        FUN2(VAR2->VAR7->VAR8, VAR2->VAR9, VAR2->VAR10, VAR4[0]);
        return -1;
    }
    switch (VAR4[0])
    {
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
        VAR2->VAR4.VAR5 = 0;
        break;
    case VAR30:
        break;
    case VAR31:
        VAR2->VAR4.VAR5 = 1;
        break;
    case VAR32:
        VAR2->VAR4.VAR5 = 8;
        break;
    case VAR33:
        VAR2->VAR4.VAR5 = 6;
        break;
    case VAR34:
        VAR2->VAR4.VAR5 = 20;
        break;
    case VAR35:
        VAR2->VAR4.VAR5 *= 40;
        break;
    case VAR36:
        VAR2->VAR4.VAR5 *= 8;
        break;
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
        VAR2->VAR4.VAR5 *= VAR2->VAR7->VAR44;
        break;
    case VAR45:
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
        VAR2->VAR4.VAR5 *= VAR2->VAR7->VAR44;
        break;
    case VAR51:
        VAR2->VAR4.VAR5 = VAR4[4] | (VAR4[3] << 8);
        break;
    case VAR52:
    case VAR53:
        if (VAR2->VAR7->VAR54 == VAR55)
        {
            VAR2->VAR4.VAR5 = VAR4[9] | (VAR4[8] << 8);
        }
        break;
    }
    return 0;
}
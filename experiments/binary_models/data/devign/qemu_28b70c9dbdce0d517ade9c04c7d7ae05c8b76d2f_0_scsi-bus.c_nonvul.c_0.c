static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    switch (VAR6[0])
    {
    case VAR7:
    case VAR8:
        VAR2->VAR9 = 0;
        break;
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
        VAR2->VAR9 = VAR6[4] | (VAR6[3] << 8) | (VAR6[2] << 16);
        if (VAR6[1] & 0x01)
        {
            VAR2->VAR9 *= VAR4->VAR14;
        }
        break;
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
        VAR2->VAR9 = VAR6[14] | (VAR6[13] << 8) | (VAR6[12] << 16);
        if (VAR6[1] & 0x01)
        {
            VAR2->VAR9 *= VAR4->VAR14;
        }
        break;
    case VAR19:
    case VAR20:
        VAR2->VAR9 = 0;
        break;
    case VAR21:
        VAR2->VAR9 = VAR6[13] | (VAR6[12] << 8);
        break;
    case VAR22:
        VAR2->VAR9 = VAR6[8] | (VAR6[7] << 8);
        break;
    case VAR23:
        VAR2->VAR9 = VAR6[4] | (VAR6[3] << 8);
        break;
    default:
        return FUN2(VAR2, VAR4, VAR6);
    }
    return 0;
}
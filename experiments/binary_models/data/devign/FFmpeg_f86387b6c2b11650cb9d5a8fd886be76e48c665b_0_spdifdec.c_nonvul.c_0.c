static int FUN1(VAR1 *VAR2, enum IEC61937DataType VAR3, const char *VAR4, int *VAR5, enum VAR6 *VAR7)
{
    AACADTSHeaderInfo VAR8;
    GetBitContext VAR9;
    switch (VAR3 & 0xff)
    {
    case VAR10:
        *VAR5 = VAR11 << 2;
        *VAR7 = VAR12;
        break;
    case VAR13:
        *VAR5 = VAR14[1][0];
        *VAR7 = VAR15;
        break;
    case VAR16:
        *VAR5 = VAR14[1][0];
        *VAR7 = VAR17;
        break;
    case VAR18:
        *VAR5 = 4608;
        *VAR7 = VAR17;
        break;
    case VAR19:
        FUN2(&VAR9, VAR4, VAR20 * 8);
        if (FUN3(&VAR9, &VAR8) < 0)
        {
            if (VAR2)
                FUN4(VAR2, VAR21, "");
            return VAR22;
        }
        *VAR5 = VAR8.VAR23 << 2;
        *VAR7 = VAR24;
        break;
    case VAR25:
        *VAR5 = VAR14[0][0];
        *VAR7 = VAR15;
        break;
    case VAR26:
        *VAR5 = VAR14[0][1];
        *VAR7 = VAR27;
        break;
    case VAR28:
        *VAR5 = VAR14[0][2];
        *VAR7 = VAR17;
        break;
    case VAR29:
        *VAR5 = 2048;
        *VAR7 = VAR30;
        break;
    case VAR31:
        *VAR5 = 4096;
        *VAR7 = VAR30;
        break;
    case VAR32:
        *VAR5 = 8192;
        *VAR7 = VAR30;
        break;
    default:
        if (VAR2)
        {
            FUN5(VAR2, "", VAR3);
        }
        return VAR33;
    }
    return 0;
}
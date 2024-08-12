static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11.VAR12;
    VAR13 *VAR14 = FUN2(VAR10);
    unsigned int VAR15;
    FUN3(8);
    VAR15 = VAR4[2] & 0x7;
    if (VAR15 == 0 || VAR15 > 5)
    {
        VAR6[2] = VAR16;
        return;
    }
    VAR15 = VAR4[3] & 0x7;
    switch (VAR15)
    {
    case VAR17:
        break;
    case VAR18:
        VAR6[2] = VAR14->FUN4(VAR10, VAR19, 1);
        break;
    case VAR20:
        VAR6[2] = VAR14->FUN4(VAR10, VAR21, 1);
        break;
    case VAR22:
        VAR6[2] = VAR14->FUN4(VAR10, VAR23, 1);
        break;
    default:
        VAR6[2] = VAR16;
    }
    if (VAR6[2])
    {
        VAR6[2] = VAR16;
        return;
    }
    VAR15 = (VAR4[3] >> 4) & 0x7;
    switch (VAR15)
    {
    case VAR24:
    case VAR25:
        break;
    case VAR26:
        if (!VAR14->FUN4(VAR10, VAR27, 1))
        {
            VAR6[2] = VAR16;
            return;
        }
        break;
    default:
        VAR6[2] = VAR16;
        return;
    }
    VAR2->VAR28 = 1;
    VAR2->VAR29 = VAR4[2] & VAR30;
    VAR2->VAR31 = VAR4[3] & VAR32;
    VAR2->VAR33 = VAR4[4];
    VAR2->VAR34 &= ~VAR4[5];
    VAR2->VAR35 = VAR4[6] | (((VAR36)VAR4[7]) << 8);
    if (VAR2->VAR37 & FUN5(VAR2))
    {
        FUN6(VAR2);
    }
    else
    {
        VAR2->VAR37 = 0;
    }
}
void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    uint32_t VAR4;
    int VAR5;
    uint32_t VAR6;
    if (FUN2(VAR2))
    {
        FUN3(VAR2);
        return;
    }
    switch (VAR2->VAR7)
    {
    case VAR8:
        VAR5 = VAR9;
        VAR3 = 0x04;
        VAR4 = VAR10;
        if (VAR2->VAR11)
            VAR6 = 2;
        else
            VAR6 = 4;
        break;
    case VAR12:
        if (VAR13)
        {
            if (VAR2->VAR11)
            {
                VAR4 = FUN4(VAR2->VAR14[15] - 2) & 0xff;
            }
            else
            {
                VAR4 = FUN5(VAR2->VAR14[15] - 4) & 0xffffff;
            }
            if (((VAR4 == 0x123456 && !VAR2->VAR11) || (VAR4 == 0xab && VAR2->VAR11)) && (VAR2->VAR15 & VAR16) != VAR17)
            {
                VAR2->VAR14[0] = FUN6(VAR2);
                return;
            }
        }
        VAR5 = VAR18;
        VAR3 = 0x08;
        VAR4 = VAR10;
        VAR6 = 0;
        break;
    case VAR19:
        if (VAR2->VAR11 && VAR13)
        {
            VAR4 = FUN4(VAR2->VAR14[15]) & 0xff;
            if (VAR4 == 0xab && (VAR2->VAR15 & VAR16) != VAR17)
            {
                VAR2->VAR14[15] += 2;
                VAR2->VAR14[0] = FUN6(VAR2);
                return;
            }
        }
    case VAR20:
        VAR5 = VAR21;
        VAR3 = 0x0c;
        VAR4 = VAR22 | VAR10;
        VAR6 = 4;
        break;
    case VAR23:
        VAR5 = VAR21;
        VAR3 = 0x10;
        VAR4 = VAR22 | VAR10;
        VAR6 = 8;
        break;
    case VAR24:
        VAR5 = VAR25;
        VAR3 = 0x18;
        VAR4 = VAR22 | VAR10;
        VAR6 = 4;
        break;
    case VAR26:
        VAR5 = VAR27;
        VAR3 = 0x1c;
        VAR4 = VAR22 | VAR10 | VAR28;
        VAR6 = 4;
        break;
    default:
        FUN7(VAR2, "", VAR2->VAR7);
        return;
    }
    if (VAR2->VAR29.VAR30 & (1 << 13))
    {
        VAR3 += 0xffff0000;
    }
    FUN8(VAR2, VAR5);
    VAR2->VAR31 = FUN9(VAR2);
    VAR2->VAR32 = 0;
    VAR2->VAR15 = (VAR2->VAR15 & ~VAR16) | VAR5;
    VAR2->VAR15 |= VAR4;
    if (FUN10(VAR2, VAR33))
    {
        VAR2->VAR11 = (VAR2->VAR29.VAR30 & (1 << 30)) != 0;
    }
    VAR2->VAR14[14] = VAR2->VAR14[15] + VAR6;
    VAR2->VAR14[15] = VAR3;
    VAR2->VAR34 |= VAR35;
}
static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    uint8_t VAR6, VAR7, VAR8;
    int VAR9;
    VAR2->VAR5 = VAR2->VAR10[1] & 1;
    VAR5 = FUN2(VAR2);
    VAR7 = VAR2->VAR10[2];
    VAR6 = VAR2->VAR10[3];
    VAR8 = VAR2->VAR10[4];
    FUN3("", VAR2->VAR5, VAR6, VAR7, VAR8, FUN4(VAR6, VAR7, VAR8, VAR5->VAR11));
    VAR9 = 0;
    switch (FUN5(VAR5, VAR6, VAR7, VAR8, VAR2->VAR12 & 0x40))
    {
    case 2:
        FUN6(VAR2, 0x40, 0x00, 0x00);
        VAR2->VAR10[3] = VAR7;
        VAR2->VAR10[4] = VAR6;
        VAR2->VAR10[5] = VAR8;
        return;
    case 3:
        FUN6(VAR2, 0x40, 0x80, 0x00);
        VAR2->VAR10[3] = VAR7;
        VAR2->VAR10[4] = VAR6;
        VAR2->VAR10[5] = VAR8;
        return;
    case 4:
        FUN6(VAR2, 0x40, 0x00, 0x00);
        VAR2->VAR10[3] = VAR7;
        VAR2->VAR10[4] = VAR6;
        VAR2->VAR10[5] = VAR8;
        return;
    case 1:
        VAR9 = 1;
        break;
    default:
        break;
    }
    VAR2->VAR13 = VAR3;
    VAR2->VAR14 = 0;
    FUN7(VAR2->VAR15, VAR16);
    if (VAR2->VAR10[0] & 0x80)
        VAR2->VAR15 |= VAR17;
    else
        VAR2->VAR15 &= ~VAR17;
    if (VAR9)
        VAR2->VAR15 |= VAR18;
    else
        VAR2->VAR15 &= ~VAR18;
    if (VAR2->VAR10[5] == 00)
    {
        VAR2->VAR19 = VAR2->VAR10[8];
    }
    else
    {
        int VAR20;
        VAR2->VAR19 = 128 << VAR2->VAR10[5];
        VAR20 = (VAR5->VAR11 - VAR8 + 1);
        if (VAR2->VAR10[0] & 0x80)
            VAR20 += VAR5->VAR11;
        VAR2->VAR19 *= VAR20;
    }
    VAR2->VAR21 = VAR2->VAR10[6];
    if (VAR2->VAR22)
    {
        int VAR23;
        VAR23 = FUN8(VAR2->VAR24);
        VAR23 = (VAR23 >> 2) & 3;
        FUN3("", VAR23, VAR3, (128 << VAR2->VAR10[5]) * (VAR5->VAR11 - VAR8 + 1), VAR2->VAR19);
        if (((VAR3 == VAR25 || VAR3 == VAR26 || VAR3 == VAR27) && VAR23 == 0) || (VAR3 == VAR28 && VAR23 == 2) || (VAR3 == VAR29 && VAR23 == 1))
        {
            VAR2->VAR30 |= VAR31;
            FUN9(VAR2->VAR24);
            FUN10(VAR2->VAR24);
            return;
        }
        else
        {
            FUN11("", VAR23, VAR3);
        }
    }
    FUN3("");
    FUN12(VAR2, 0x00);
    return;
}
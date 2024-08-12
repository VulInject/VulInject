static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    uint8_t VAR6, VAR7, VAR8;
    FUN2(VAR2, VAR2->VAR9[1] & VAR10);
    VAR5 = FUN3(VAR2);
    VAR7 = VAR2->VAR9[2];
    VAR6 = VAR2->VAR9[3];
    VAR8 = VAR2->VAR9[4];
    FUN4("", FUN5(VAR2), VAR6, VAR7, VAR8, FUN6(VAR6, VAR7, VAR8, VAR5->VAR11, FUN7(VAR5)));
    switch (FUN8(VAR5, VAR6, VAR7, VAR8, VAR2->VAR12 & VAR13))
    {
    case 2:
        FUN9(VAR2, VAR14, 0x00, 0x00);
        VAR2->VAR9[3] = VAR7;
        VAR2->VAR9[4] = VAR6;
        VAR2->VAR9[5] = VAR8;
        return;
    case 3:
        FUN9(VAR2, VAR14, VAR15, 0x00);
        VAR2->VAR9[3] = VAR7;
        VAR2->VAR9[4] = VAR6;
        VAR2->VAR9[5] = VAR8;
        return;
    case 4:
        FUN9(VAR2, VAR14, 0x00, 0x00);
        VAR2->VAR9[3] = VAR7;
        VAR2->VAR9[4] = VAR6;
        VAR2->VAR9[5] = VAR8;
        return;
    case 1:
        VAR2->VAR16 |= VAR17;
        break;
    default:
        break;
    }
    if (VAR2->VAR18 && (VAR2->VAR19 & VAR20) != VAR5->VAR21)
    {
        FUN4("", VAR2->VAR19 & VAR20, VAR5->VAR21);
        FUN9(VAR2, VAR14, VAR22, 0x00);
        VAR2->VAR9[3] = VAR7;
        VAR2->VAR9[4] = VAR6;
        VAR2->VAR9[5] = VAR8;
        return;
    }
    VAR2->VAR23 = VAR3;
    VAR2->VAR24 = 0;
    VAR2->VAR25 |= VAR26;
    if (VAR2->VAR9[0] & 0x80)
        VAR2->VAR27 |= VAR28;
    else
        VAR2->VAR27 &= ~VAR28;
    if (VAR2->VAR9[5] == 00)
    {
        VAR2->VAR29 = VAR2->VAR9[8];
    }
    else
    {
        int VAR30;
        VAR2->VAR29 = 128 << (VAR2->VAR9[5] > 7 ? 7 : VAR2->VAR9[5]);
        VAR30 = (VAR2->VAR9[6] - VAR8 + 1);
        if (VAR2->VAR9[0] & 0x80)
            VAR30 += VAR2->VAR9[6];
        VAR2->VAR29 *= VAR30;
    }
    VAR2->VAR31 = VAR2->VAR9[6];
    if (VAR2->VAR32 & VAR33)
    {
        int VAR34;
        VAR34 = FUN10(VAR2->VAR35);
        VAR34 = (VAR34 >> 2) & 3;
        FUN4("", VAR34, VAR3, (128 << VAR2->VAR9[5]) * (VAR5->VAR11 - VAR8 + 1), VAR2->VAR29);
        if (((VAR3 == VAR36 || VAR3 == VAR37 || VAR3 == VAR38) && VAR34 == 0) || (VAR3 == VAR39 && VAR34 == 2) || (VAR3 == VAR40 && VAR34 == 1))
        {
            VAR2->VAR25 &= ~VAR41;
            FUN11(VAR2->VAR35);
            FUN12(VAR2->VAR35);
            return;
        }
        else
        {
            FUN4("", VAR34, VAR3);
        }
    }
    FUN4("");
    VAR2->VAR25 |= VAR42;
    if (VAR3 != VAR39)
        VAR2->VAR25 |= VAR43;
    FUN13(VAR2);
}
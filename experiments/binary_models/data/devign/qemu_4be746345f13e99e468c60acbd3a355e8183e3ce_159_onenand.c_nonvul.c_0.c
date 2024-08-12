static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    void *VAR5;
    VAR4 = (VAR2->VAR6[VAR7] & 3) +
          ((((VAR2->VAR6[VAR7] >> 2) & 0x3f) +
            (((VAR2->VAR6[VAR8] & 0xfff) |
              (VAR2->VAR6[VAR8] >> 15 ? VAR2->VAR9 : 0))
             << 6))
           << (VAR10 - 9));
    VAR5 = (VAR2->VAR11 & 8) ? VAR2->VAR12[(VAR2->VAR11 >> 2) & 1][0] : VAR2->VAR13[0];
    VAR5 += (VAR2->VAR11 & 3) << 9;
    VAR5 = (VAR2->VAR11 & 8) ? VAR2->VAR12[(VAR2->VAR11 >> 2) & 1][1] : VAR2->VAR13[1];
    VAR5 += (VAR2->VAR11 & 3) << 4;
    switch (VAR2->VAR14)
    {
    case 0x00:
        FUN2(VAR15, VAR16)
        FUN3() if (FUN4(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR20;
        FUN5()
        if (FUN6(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR20;
        VAR2->VAR21 |= VAR22 | VAR23;
        break;
    case 0x13:
        FUN2(VAR15, VAR16)
        FUN5() if (FUN6(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR20;
        VAR2->VAR21 |= VAR22 | VAR23;
        break;
    case 0x80:
        FUN2(VAR15, VAR16)
        FUN3() if (FUN7(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR24;
        FUN5()
        if (FUN8(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR24;
        VAR2->VAR21 |= VAR22 | VAR25;
        break;
    case 0x1a:
        FUN2(VAR15, VAR16)
        FUN5() if (FUN8(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR24;
        VAR2->VAR21 |= VAR22 | VAR25;
        break;
    case 0x1b:
        FUN5()
        FUN2(VAR15, VAR16) if (FUN4(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR24;
        FUN2(VAR26, VAR27)
        if (FUN7(VAR2, VAR4, VAR2->VAR17, VAR5)) VAR2->VAR18 |= VAR19 | VAR24;
        VAR2->VAR21 |= VAR22 | VAR25;
        break;
    case 0x23:
        VAR2->VAR21 |= VAR22;
        for (VAR3 = VAR2->VAR28[0]; VAR3 <= VAR2->VAR28[1]; VAR3++)
        {
            if (VAR3 >= VAR2->VAR29)
            {
                VAR2->VAR18 |= VAR19;
                break;
            }
            if (VAR2->VAR30[VAR3] == VAR31)
                break;
            VAR2->VAR32 = VAR2->VAR30[VAR3] = VAR33;
        }
        break;
    case 0x27:
        VAR2->VAR21 |= VAR22;
        for (VAR3 = 0; VAR3 < VAR2->VAR29; VAR3++)
        {
            if (VAR3 >= VAR2->VAR29)
            {
                VAR2->VAR18 |= VAR19;
                break;
            }
            if (VAR2->VAR30[VAR3] == VAR31)
                break;
            VAR2->VAR32 = VAR2->VAR30[VAR3] = VAR33;
        }
        break;
    case 0x2a:
        VAR2->VAR21 |= VAR22;
        for (VAR3 = VAR2->VAR28[0]; VAR3 <= VAR2->VAR28[1]; VAR3++)
        {
            if (VAR3 >= VAR2->VAR29)
            {
                VAR2->VAR18 |= VAR19;
                break;
            }
            if (VAR2->VAR30[VAR3] == VAR31)
                break;
            VAR2->VAR32 = VAR2->VAR30[VAR3] = VAR34;
        }
        break;
    case 0x2c:
        VAR2->VAR21 |= VAR22;
        for (VAR3 = VAR2->VAR28[0]; VAR3 <= VAR2->VAR28[1]; VAR3++)
        {
            if (VAR3 >= VAR2->VAR29)
            {
                VAR2->VAR18 |= VAR19;
                break;
            }
            if (VAR2->VAR30[VAR3] == VAR33)
                continue;
            VAR2->VAR32 = VAR2->VAR30[VAR3] = VAR31;
        }
        break;
    case 0x71:
        VAR2->VAR21 |= VAR22;
        break;
    case 0x95:
        FUN9(VAR2->VAR35);
    case 0x94:
        VAR4 = ((VAR2->VAR6[VAR15] & 0xfff) | (VAR2->VAR6[VAR15] >> 15 ? VAR2->VAR9 : 0)) << (VAR36 - 9);
        if (FUN10(VAR2, VAR4, 1 << (VAR36 - 9)))
            VAR2->VAR18 |= VAR19 | VAR37;
        VAR2->VAR21 |= VAR22 | VAR38;
        break;
    case 0xb0:
        break;
    case 0x30:
        VAR2->VAR21 |= VAR22 | VAR38;
        break;
    case 0xf0:
        FUN11(VAR2, 0);
        break;
    case 0xf3:
        FUN11(VAR2, 0);
        break;
    case 0x65:
        VAR2->VAR21 |= VAR22;
        VAR2->VAR39 = NULL;
        VAR2->VAR40 = VAR2->VAR41;
        VAR2->VAR42 = 1 << (VAR36 - 9);
        VAR2->VAR6[VAR15] = 0;
        VAR2->VAR43 = 1;
        break;
    default:
        VAR2->VAR18 |= VAR19;
        VAR2->VAR21 |= VAR22;
        fprintf(VAR44, "", VAR45, VAR2->VAR14);
    }
    FUN12(VAR2);
}
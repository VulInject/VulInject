int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    const VAR11 *VAR12 = FUN2(VAR2);
    int VAR13 = -1;
    assert(VAR12 != NULL);
    switch (VAR5)
    {
    case VAR14 | VAR15:
        VAR2->VAR16 = VAR6;
        FUN3(VAR2->VAR16);
        VAR13 = 0;
        break;
    case VAR17 | VAR18:
        VAR13 = FUN4(VAR2, VAR6, VAR10, VAR8);
        break;
    case VAR17 | VAR19:
        VAR10[0] = VAR2->VAR20->VAR21;
        VAR13 = 1;
        break;
    case VAR14 | VAR22:
        VAR13 = FUN5(VAR2, VAR6);
        FUN6(VAR2->VAR16, VAR6, VAR13);
        break;
    case VAR17 | VAR23:
        VAR10[0] = 0;
        if (VAR2->VAR20->VAR24 & 0x40)
        {
            VAR10[0] |= 1 << VAR25;
        }
        if (VAR2->VAR26)
        {
            VAR10[0] |= 1 << VAR27;
        }
        VAR10[1] = 0x00;
        VAR13 = 2;
        break;
    case VAR14 | VAR28:
        if (VAR6 == VAR27)
        {
            VAR2->VAR26 = 0;
            VAR13 = 0;
        }
        FUN7(VAR2->VAR16, VAR6, VAR13);
        break;
    case VAR14 | VAR29:
        if (VAR6 == VAR27)
        {
            VAR2->VAR26 = 1;
            VAR13 = 0;
        }
        FUN8(VAR2->VAR16, VAR6, VAR13);
        break;
    case VAR30 | VAR31:
        if (VAR7 < 0 || VAR7 >= VAR2->VAR32)
        {
            break;
        }
        VAR10[0] = VAR2->VAR33[VAR7];
        VAR13 = 1;
        break;
    case VAR34 | VAR35:
        VAR13 = FUN9(VAR2, VAR7, VAR6);
        FUN10(VAR2->VAR16, VAR7, VAR6, VAR13);
        break;
    }
    return VAR13;
}
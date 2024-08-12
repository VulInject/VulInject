int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 = VAR2->VAR5.VAR6;
    VAR7 = VAR2->VAR5.VAR8;
    VAR2->VAR9 = VAR10;
    VAR2->VAR11 = VAR12;
    VAR2->VAR13 = VAR14;
    VAR2->VAR15 = VAR16;
    if (VAR2->VAR17->VAR18 == VAR19)
        VAR2->VAR20 = VAR21;
    else
        VAR2->VAR20 = VAR22;
    if (VAR2->VAR17->VAR23 == VAR24)
    {
        VAR2->VAR25 = VAR26;
        VAR2->VAR27 = VAR28;
        VAR2->VAR29 = VAR30;
    }
    else
    {
        VAR2->VAR25 = VAR31;
        VAR2->VAR27 = VAR32;
        VAR2->VAR29 = VAR33;
    }
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR2);
    FUN7(VAR2);
    switch (VAR2->VAR29)
    {
    case VAR33:
        for (VAR3 = 0; VAR3 < 64; VAR3++)
            VAR2->VAR34[VAR3] = VAR3;
        break;
    case VAR30:
        for (VAR3 = 0; VAR3 < 64; VAR3++)
            VAR2->VAR34[VAR3] = (VAR3 & 0x38) | ((VAR3 & 6) >> 1) | ((VAR3 & 1) << 2);
        break;
    case VAR35:
        for (VAR3 = 0; VAR3 < 64; VAR3++)
            VAR2->VAR34[VAR3] = VAR36[VAR3];
        break;
    case VAR37:
        for (VAR3 = 0; VAR3 < 64; VAR3++)
            VAR2->VAR34[VAR3] = ((VAR3 & 7) << 3) | (VAR3 >> 3);
        break;
    default:
        fprintf(VAR38, "");
        return -1;
    }
    FUN8(VAR2, &VAR2->VAR39, VAR40);
    FUN8(VAR2, &VAR2->VAR41, VAR40);
    FUN8(VAR2, &VAR2->VAR42, VAR43);
    FUN8(VAR2, &VAR2->VAR44, VAR45);
    return 0;
}
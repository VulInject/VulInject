static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR4->VAR2 = VAR2;
    VAR4->VAR7 = VAR8;
    VAR4->VAR9 = VAR2->VAR9;
    VAR4->VAR10 = VAR2->VAR10;
    switch (VAR2->VAR11->VAR12)
    {
    case VAR13:
        VAR4->VAR14 = 0;
        VAR4->VAR15 = 0;
        break;
    case VAR16:
        VAR4->VAR17 = 4;
        VAR4->VAR18 = 1;
        VAR4->VAR19 = 1;
        break;
    case VAR20:
        VAR4->VAR21 = 1;
        VAR4->VAR18 = 1;
        VAR4->VAR22 = 1;
        break;
    case VAR23:
        VAR4->VAR21 = 1;
        VAR4->VAR18 = 1;
        VAR4->VAR22 = 2;
        break;
    case VAR24:
        VAR4->VAR21 = 1;
        VAR4->VAR18 = 1;
        VAR4->VAR22 = 3;
        break;
    case VAR25:
        VAR4->VAR21 = 1;
        VAR4->VAR18 = 1;
        VAR4->VAR22 = 4;
        break;
    case VAR26:
        VAR4->VAR27 = 1;
        break;
    default:
        return -1;
    }
    if (VAR2->VAR11->VAR12 != VAR13 && VAR2->VAR11->VAR12 != VAR16)
        if (FUN2(VAR4) < 0)
            return -1;
    for (VAR6 = 0; VAR6 < 64; VAR6++)
        VAR4->VAR28[VAR6] = VAR29[VAR6];
    if (VAR4->VAR21)
        FUN3(VAR4);
    else
        FUN4(VAR4);
    return 0;
}
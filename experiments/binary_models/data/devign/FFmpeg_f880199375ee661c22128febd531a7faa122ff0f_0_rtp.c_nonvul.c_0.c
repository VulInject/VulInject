static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    if (VAR2->VAR11 != 1)
        return -1;
    VAR10 = VAR2->VAR12[0];
    VAR6 = FUN2(VAR10->VAR13);
    if (VAR6 < 0)
        VAR6 = VAR14;
    VAR4->VAR6 = VAR6;
    VAR4->VAR15 = 0;
    VAR4->VAR16 = VAR4->VAR15;
    VAR4->VAR17 = 0;
    VAR4->VAR18 = 1;
    VAR7 = FUN3(&VAR2->VAR19);
    if (VAR7 <= 12)
        return VAR20;
    VAR4->VAR21 = VAR7 - 12;
    switch (VAR10->VAR13->VAR22)
    {
    case VAR23:
    case VAR24:
        VAR4->VAR25 = VAR4->VAR26 + 4;
        VAR4->VAR27 = 0;
        break;
    case VAR28:
        VAR4->VAR27 = 0;
        break;
    case VAR29:
        VAR8 = VAR4->VAR21 / VAR30;
        if (VAR8 < 1)
            VAR8 = 1;
        VAR4->VAR21 = VAR8 * VAR30;
        VAR4->VAR25 = VAR4->VAR26;
        break;
    default:
        VAR4->VAR25 = VAR4->VAR26;
        break;
    }
    return 0;
}
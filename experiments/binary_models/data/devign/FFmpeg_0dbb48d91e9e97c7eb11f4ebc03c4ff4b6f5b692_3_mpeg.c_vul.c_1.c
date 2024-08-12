static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR4->VAR15 = 0;
    VAR4->VAR16 = (VAR2->VAR17 == &VAR18);
    VAR4->VAR19 = (VAR2->VAR17 == &VAR20);
    if (VAR4->VAR16)
        VAR4->VAR21 = 2324;
    else
        VAR4->VAR21 = 2048;
    VAR4->VAR22 = VAR4->VAR21 - 7;
    if (VAR4->VAR19)
        VAR4->VAR22 -= 2;
    VAR4->VAR23 = 0;
    VAR4->VAR24 = 0;
    VAR8 = VAR25;
    VAR10 = 0x80;
    VAR9 = VAR26;
    VAR4->VAR27 = -1;
    for (VAR7 = 0; VAR7 < VAR2->VAR28; VAR7++)
    {
        VAR12 = VAR2->VAR29[VAR7];
        VAR14 = FUN2(sizeof(VAR13));
        if (!VAR14)
            goto VAR30;
        VAR12->VAR5 = VAR14;
        switch (VAR12->VAR31.VAR32)
        {
        case VAR33:
            if (VAR12->VAR31.VAR34 == VAR35)
                VAR14->VAR36 = VAR10++;
            else
                VAR14->VAR36 = VAR8++;
            VAR14->VAR37 = 4 * 1024;
            VAR4->VAR23++;
            break;
        case VAR38:
            if (VAR4->VAR27 == -1)
                VAR4->VAR27 = VAR7;
            VAR14->VAR36 = VAR9++;
            VAR14->VAR37 = 46 * 1024;
            VAR4->VAR24++;
            break;
        default:
            FUN3();
        }
    }
    if (VAR4->VAR27 == -1)
        VAR4->VAR27 = 0;
    VAR6 = 2000;
    for (VAR7 = 0; VAR7 < VAR2->VAR28; VAR7++)
    {
        VAR12 = VAR2->VAR29[VAR7];
        VAR6 += VAR12->VAR31.VAR39;
    }
    VAR4->VAR40 = (VAR6 + (8 * 50) - 1) / (8 * 50);
    if (VAR4->VAR16 || VAR4->VAR19)
        VAR4->VAR41 = 1;
    else
        VAR4->VAR41 = 2 * VAR6 / VAR4->VAR21 / 8;
    if (VAR4->VAR41 == 0)
        VAR4->VAR41 = 1;
    if (VAR4->VAR19)
        VAR4->VAR42 = VAR4->VAR41 * 40;
    else if (VAR4->VAR16)
        VAR4->VAR42 = VAR4->VAR41 * 40;
    else
        VAR4->VAR42 = VAR4->VAR41 * 5;
    for (VAR7 = 0; VAR7 < VAR2->VAR28; VAR7++)
    {
        VAR14 = VAR2->VAR29[VAR7]->VAR5;
        VAR14->VAR43 = 0;
        VAR14->VAR15 = 0;
        VAR14->VAR44 = VAR45;
        VAR14->VAR46 = VAR45;
    }
    VAR4->VAR47 = 0;
    return 0;
VAR30:
    for (VAR7 = 0; VAR7 < VAR2->VAR28; VAR7++)
    {
        FUN4(VAR2->VAR29[VAR7]->VAR5);
    }
    return -VAR48;
}
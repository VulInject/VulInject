static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (VAR2->VAR5 - VAR2->VAR6 < 36)
        FUN2(&VAR2->VAR6);
    VAR2->VAR7 = FUN3(&VAR2->VAR6);
    VAR2->VAR8 = FUN3(&VAR2->VAR6);
    VAR2->VAR9 = FUN3(&VAR2->VAR6);
    VAR2->VAR10 = FUN3(&VAR2->VAR6);
    VAR2->VAR11 = FUN3(&VAR2->VAR6);
    VAR2->VAR12 = FUN3(&VAR2->VAR6);
    VAR2->VAR13 = FUN3(&VAR2->VAR6);
    VAR2->VAR14 = FUN3(&VAR2->VAR6);
    VAR2->VAR15 = FUN2(&VAR2->VAR6);
    if (VAR2->VAR5 - VAR2->VAR6 < 2 * VAR2->VAR15)
        for (VAR3 = 0; VAR3 < VAR2->VAR15; VAR3++)
        {
            uint8_t VAR16 = FUN4(&VAR2->VAR6);
            VAR2->VAR17[VAR3] = (VAR16 & 0x7f) + 1;
            VAR2->VAR18 = FUN5(VAR2->VAR17[VAR3], VAR2->VAR18);
            VAR2->VAR19[VAR3] = !!(VAR16 & 0x80);
            VAR2->VAR20[VAR3] = FUN4(&VAR2->VAR6);
            VAR2->VAR21[VAR3] = FUN4(&VAR2->VAR6);
        }
    VAR2->VAR22 = FUN6(VAR2->VAR7 - VAR2->VAR13, VAR2->VAR11);
    VAR2->VAR23 = FUN6(VAR2->VAR8 - VAR2->VAR14, VAR2->VAR12);
    VAR2->VAR24 = FUN7(VAR2->VAR22 * VAR2->VAR23 * sizeof(VAR25));
    if (!VAR2->VAR24)
        return FUN8(VAR26);
    for (VAR3 = 0; VAR3 < VAR2->VAR22 * VAR2->VAR23; VAR3++)
    {
        VAR25 *VAR24 = VAR2->VAR24 + VAR3;
        VAR24->VAR27 = FUN7(VAR2->VAR15 * sizeof(VAR28));
        if (!VAR24->VAR27)
            return FUN8(VAR26);
    }
    VAR2->VAR29->VAR7 = VAR2->VAR7 - VAR2->VAR9;
    VAR2->VAR29->VAR8 = VAR2->VAR8 - VAR2->VAR10;
    switch (VAR2->VAR15)
    {
    case 1:
        if (VAR2->VAR18 > 8)
        {
            VAR2->VAR29->VAR30 = VAR31;
        }
        else
            VAR2->VAR29->VAR30 = VAR32;
        break;
    case 3:
        if (VAR2->VAR18 > 8)
        {
            VAR2->VAR29->VAR30 = VAR33;
        }
        else
            VAR2->VAR29->VAR30 = VAR34;
        break;
    case 4:
        VAR2->VAR29->VAR30 = VAR35;
        break;
    }
    if (VAR2->VAR36.VAR37[0])
        VAR2->VAR29->FUN9(VAR2->VAR29, &VAR2->VAR36);
    if ((VAR4 = VAR2->VAR29->FUN10(VAR2->VAR29, &VAR2->VAR36)) < 0)
        return VAR4;
    VAR2->VAR36.VAR38 = VAR39;
    VAR2->VAR36.VAR40 = 1;
    return 0;
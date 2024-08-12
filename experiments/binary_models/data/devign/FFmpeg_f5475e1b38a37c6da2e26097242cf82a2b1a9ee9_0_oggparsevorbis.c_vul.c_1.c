FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR5->VAR9 + VAR3;
    VAR10 *VAR11 = VAR2->VAR9[VAR3];
    VAR12 *VAR13;
    if (VAR8->VAR14 > 2)
        return 0;
    if (VAR8->VAR14 == 0)
    {
        VAR8->private = FUN2(sizeof(VAR12));
        if (!VAR8->private)
            return 0;
    }
    VAR13 = VAR8->private;
    VAR13->VAR15[VAR8->VAR14] = VAR8->VAR16;
    VAR13->VAR17[VAR8->VAR14] = FUN2(VAR8->VAR16);
    memcpy(VAR13->VAR17[VAR8->VAR14], VAR8->VAR18 + VAR8->VAR19, VAR8->VAR16);
    if (VAR8->VAR18[VAR8->VAR19] == 1)
    {
        VAR20 *VAR21 = VAR8->VAR18 + VAR8->VAR19 + 11;
        VAR11->VAR22->VAR23 = *VAR21++;
        VAR11->VAR22->VAR24 = FUN3(VAR21);
        VAR21 += 8;
        VAR11->VAR22->VAR25 = FUN3(VAR21);
        VAR11->VAR22->VAR26 = VAR27;
        VAR11->VAR22->VAR28 = VAR29;
        VAR11->VAR30.VAR31 = 1;
        VAR11->VAR30.VAR32 = VAR11->VAR22->VAR24;
    }
    else if (VAR8->VAR18[VAR8->VAR19] == 3)
    {
        FUN4(VAR2, VAR8->VAR18 + VAR8->VAR19 + 7, VAR8->VAR16 - 8);
    }
    else
    {
        VAR11->VAR22->VAR33 = FUN5(VAR2, VAR13, &VAR11->VAR22->VAR34);
    }
    return VAR8->VAR14 < 3;
}
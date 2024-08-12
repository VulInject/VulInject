static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *const VAR14 = VAR2->VAR15;
    VAR9 *VAR16, *VAR17, *VAR18;
    unsigned long VAR19;
    int VAR20, VAR21, VAR22, VAR23;
    int VAR24;
    int VAR25 = VAR11;
    int VAR26 = 0;
    if (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '')
    {
        int VAR27, VAR28, VAR29;
        VAR10 += 4;
        for (VAR20 = 0; VAR20 < 256; VAR20++)
        {
            VAR27 = *VAR10++;
            VAR28 = *VAR10++;
            VAR29 = *VAR10++;
            VAR14->VAR30[VAR20] = (VAR27 << 16) | (VAR28 << 8) | VAR29;
        }
        VAR26 = 1;
        VAR11 -= 768 + 4;
    }
    if ((VAR23 = FUN2(VAR2, VAR8, VAR31)) < 0)
    {
        FUN3(VAR2, VAR32, "");
        return VAR23;
    }
    memcpy(VAR8->VAR3[1], VAR14->VAR30, VAR33);
    VAR8->VAR34 = VAR26;
    VAR16 = VAR8->VAR3[0];
    VAR17 = VAR14->VAR35;
    VAR18 = VAR14->VAR36->VAR3[0];
    VAR24 = VAR8->VAR37[0];
    if (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '')
        VAR22 = -1;
    else
        VAR22 = VAR10[4];
    VAR19 = VAR14->VAR19;
    if ((VAR22 != 4 && VAR22 != -1) && FUN4(VAR14->VAR35, &VAR19, VAR10 + 9, VAR11 - 9) != VAR38)
    {
        FUN3(VAR2, VAR32, "");
        return VAR39;
    }
    switch (VAR22)
    {
    case -1:
        VAR8->VAR40 = 0;
        VAR8->VAR41 = VAR42;
        if (VAR14->VAR36->VAR3[0])
            memcpy(VAR8->VAR3[0], VAR14->VAR36->VAR3[0], VAR8->VAR37[0] * VAR2->VAR43);
        else
        {
            memset(VAR8->VAR3[0], 0, VAR8->VAR37[0] * VAR2->VAR43);
            VAR8->VAR40 = 1;
            VAR8->VAR41 = VAR44;
        }
        break;
    case 2:
    case 4:
        VAR8->VAR40 = 1;
        VAR8->VAR41 = VAR44;
        for (VAR21 = 0; VAR21 < VAR2->VAR43; VAR21++)
        {
            memcpy(VAR16, VAR17, VAR2->VAR45);
            VAR16 += VAR24;
            VAR17 += VAR2->VAR45;
        }
        break;
    case 3:
    case 5:
        if (!VAR18)
        {
            FUN3(VAR2, VAR32, "");
            return VAR46;
        }
        VAR8->VAR40 = 0;
        VAR8->VAR41 = VAR42;
        for (VAR21 = 0; VAR21 < VAR2->VAR43; VAR21++)
        {
            for (VAR20 = 0; VAR20 < VAR2->VAR45; VAR20++)
                VAR16[VAR20] = VAR17[VAR20] ^ VAR18[VAR20];
            VAR18 += VAR24;
            VAR16 += VAR24;
            VAR17 += VAR2->VAR45;
        }
        break;
    case 12:
    case 13:
        VAR8->VAR40 = 0;
        VAR8->VAR41 = VAR42;
        FUN5(VAR2, VAR14, VAR8->VAR3[0], VAR8->VAR37[0], VAR17, VAR14->VAR36->VAR3[0]);
        break;
    default:
        FUN3(VAR2, VAR32, "", VAR10[4]);
        return VAR46;
    }
    FUN6(VAR14->VAR36);
    if ((VAR23 = FUN7(VAR14->VAR36, VAR8)) < 0)
        return VAR23;
    *VAR4 = 1;
    return VAR25;
}
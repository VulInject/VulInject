static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR4;
    struct VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = FUN2(VAR2->VAR9);
    VAR10 *VAR11 = &VAR2->VAR11;
    VAR12 *VAR13 = VAR2->VAR9;
    int VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    if (VAR11->VAR19 < 2 || VAR11->VAR20 < 3)
    {
        VAR3 = VAR21;
        goto VAR22;
    }
    VAR6 = (void *)VAR11->VAR23[VAR11->VAR20 - 2].VAR24;
    if (!VAR13->VAR25.VAR6)
    {
        VAR3 = VAR26;
        goto VAR22;
    }
    if (VAR11->VAR19 > 2 && VAR11->VAR20 > 3)
    {
        VAR3 = VAR26;
        goto VAR22;
    }
    VAR16 = FUN3(VAR15, 1);
    VAR16->VAR2 = VAR2;
    VAR16->VAR27.VAR28 = '';
    VAR16->VAR27.VAR29 = VAR11->VAR30[1].VAR31;
    VAR16->VAR27.VAR32 = VAR11->VAR30[1].VAR24;
    VAR16->VAR27.VAR33 = 0;
    if (VAR11->VAR19 > 2)
    {
        VAR16->VAR27.VAR34 = VAR35;
        VAR16->VAR27.VAR36 = VAR11->VAR19 - 2;
        for (VAR14 = 0; VAR14 < VAR16->VAR27.VAR36; VAR14++)
        {
            VAR16->VAR27.VAR33 += VAR11->VAR30[VAR14 + 2].VAR31;
        }
        VAR16->VAR27.VAR37 = VAR11->VAR30 + 2;
    }
    else if (VAR11->VAR20 > 3)
    {
        VAR16->VAR27.VAR34 = VAR38;
        VAR16->VAR27.VAR36 = VAR11->VAR20 - 3;
        for (VAR14 = 0; VAR14 < VAR16->VAR27.VAR36; VAR14++)
        {
            VAR16->VAR27.VAR33 += VAR11->VAR23[VAR14].VAR31;
        }
        VAR16->VAR27.VAR37 = VAR11->VAR23;
    }
    else
    {
        VAR16->VAR27.VAR34 = VAR39;
    }
    VAR16->VAR27.VAR40 = VAR11->VAR23[VAR11->VAR20 - 3].VAR24;
    VAR16->VAR27.VAR41 = VAR11->VAR23[VAR11->VAR20 - 3].VAR31;
    VAR18 = FUN4(VAR13->VAR13, VAR42, &VAR16->VAR27, VAR43, VAR16);
    if (!VAR18)
    {
        FUN5(VAR16);
        VAR3 = VAR26;
        goto VAR22;
    }
    return -VAR44;
    FUN6();
VAR22:
    if (VAR6)
    {
        FUN7(VAR8, &VAR6->VAR45, 255);
    }
    return VAR3;
}
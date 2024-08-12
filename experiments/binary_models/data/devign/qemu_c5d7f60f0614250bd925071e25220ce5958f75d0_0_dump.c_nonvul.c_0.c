static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, bool VAR5, int64_t VAR6, int64_t VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11;
    int VAR12;
    VAR8 *VAR13 = NULL;
    int VAR14;
    if (FUN2())
    {
        FUN3(VAR15);
        VAR2->VAR16 = true;
    }
    else
    {
        VAR2->VAR16 = false;
    }
    FUN4();
    VAR12 = 0;
    for (VAR11 = VAR17; VAR11 != NULL; VAR11 = VAR11->VAR18)
    {
        VAR12++;
    }
    VAR2->VAR9 = VAR9;
    VAR2->VAR3 = VAR3;
    VAR2->VAR5 = VAR5;
    VAR2->VAR6 = VAR6;
    VAR2->VAR7 = VAR7;
    FUN5(&VAR2->VAR19);
    FUN6(&VAR2->VAR19);
    VAR2->VAR20 = FUN7(VAR2);
    if (VAR2->VAR20 == -1)
    {
        FUN8(VAR9, VAR21, "");
        goto VAR22;
    }
    VAR14 = FUN9(&VAR2->VAR23);
    if (VAR14 < 0)
    {
        FUN8(VAR9, VAR24);
        goto VAR22;
    }
    VAR2->VAR25 = FUN10(VAR2->VAR23.VAR26, VAR2->VAR23.VAR27, VAR12);
    if (VAR14 < 0)
    {
        FUN8(VAR9, VAR24);
        goto VAR22;
    }
    FUN11(&VAR2->VAR28);
    if (VAR4)
    {
        FUN12(&VAR2->VAR28, &VAR13);
        if (VAR13 != NULL)
        {
            FUN13(VAR9, VAR13);
            goto VAR22;
        }
    }
    else
    {
        FUN14(&VAR2->VAR28);
    }
    if (VAR2->VAR5)
    {
        FUN15(&VAR2->VAR28, VAR2->VAR6, VAR2->VAR7);
    }
    VAR2->VAR29 = 1;
    if (VAR2->VAR28.VAR30 < VAR31 - 2)
    {
        VAR2->VAR29 += VAR2->VAR28.VAR30;
        VAR2->VAR32 = false;
    }
    else
    {
        VAR2->VAR32 = true;
        VAR2->VAR29 = VAR33;
        VAR2->VAR34 = 1;
        if (VAR2->VAR28.VAR30 <= VAR35 - 1)
        {
            VAR2->VAR34 += VAR2->VAR28.VAR30;
        }
        else
        {
            VAR2->VAR34 = VAR35;
        }
    }
    if (VAR2->VAR23.VAR26 == VAR36)
    {
        if (VAR2->VAR32)
        {
            VAR2->VAR37 = sizeof(VAR38) + sizeof(VAR39) * VAR2->VAR34 + sizeof(VAR40) + VAR2->VAR25;
        }
        else
        {
            VAR2->VAR37 = sizeof(VAR38) + sizeof(VAR39) * VAR2->VAR29 + VAR2->VAR25;
        }
    }
    else
    {
        if (VAR2->VAR32)
        {
            VAR2->VAR37 = sizeof(VAR41) + sizeof(VAR42) * VAR2->VAR34 + sizeof(VAR43) + VAR2->VAR25;
        }
        else
        {
            VAR2->VAR37 = sizeof(VAR41) + sizeof(VAR42) * VAR2->VAR29 + VAR2->VAR25;
        }
    }
    return 0;
VAR22:
    FUN16(&VAR2->VAR19);
    if (VAR2->VAR16)
    {
        FUN17();
    }
    return -1;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char *VAR5 = VAR2->VAR6;
    int VAR7, VAR8, VAR9;
    int8_t VAR10, VAR11;
    int VAR12;
    StyleBox VAR13;
    VAR4->VAR14 = 0;
    VAR4->VAR15 = 0;
    VAR8 = VAR16;
    if (VAR2->VAR17 < VAR8)
        return -1;
    VAR5 += 4;
    VAR11 = *VAR5++;
    VAR10 = *VAR5++;
    if (VAR11 == 0)
    {
        if (VAR10 == 0)
            VAR4->VAR18.VAR19 = VAR20;
        if (VAR10 == 1)
            VAR4->VAR18.VAR19 = VAR21;
        if (VAR10 == -1)
            VAR4->VAR18.VAR19 = VAR22;
    }
    if (VAR11 == 1)
    {
        if (VAR10 == 0)
            VAR4->VAR18.VAR19 = VAR23;
        if (VAR10 == 1)
            VAR4->VAR18.VAR19 = VAR24;
        if (VAR10 == -1)
            VAR4->VAR18.VAR19 = VAR25;
    }
    if (VAR11 == -1)
    {
        if (VAR10 == 0)
            VAR4->VAR18.VAR19 = VAR26;
        if (VAR10 == 1)
            VAR4->VAR18.VAR19 = VAR27;
        if (VAR10 == -1)
            VAR4->VAR18.VAR19 = VAR28;
    }
    VAR4->VAR18.VAR29 = FUN2(VAR5);
    VAR5 += 4;
    VAR5 += 8;
    VAR5 += 4;
    VAR12 = FUN3(VAR5);
    VAR5 += 2;
    VAR13.VAR30 = *VAR5++;
    VAR4->VAR18.VAR31 = VAR13.VAR30 & VAR32;
    VAR4->VAR18.VAR33 = VAR13.VAR30 & VAR34;
    VAR4->VAR18.VAR35 = VAR13.VAR30 & VAR36;
    VAR4->VAR18.VAR37 = *VAR5++;
    VAR4->VAR18.VAR38 = FUN2(VAR5);
    VAR5 += 4;
    VAR5 += 4;
    VAR5 += 4;
    VAR4->VAR15 = FUN3(VAR5);
    VAR5 += 2;
    for (VAR7 = 0; VAR7 < VAR4->VAR15; VAR7++)
    {
        VAR8 += 3;
        if (VAR2->VAR17 < VAR8)
        {
            FUN4(VAR4);
            VAR4->VAR15 = 0;
            return -1;
        }
        VAR4->VAR39 = FUN5(sizeof(*VAR4->VAR39));
        if (!VAR4->VAR39)
        {
            FUN4(VAR4);
            return FUN6(VAR40);
        }
        VAR4->VAR39->VAR41 = FUN3(VAR5);
        VAR5 += 2;
        VAR9 = *VAR5++;
        VAR8 = VAR8 + VAR9;
        if (VAR2->VAR17 < VAR8)
        {
            FUN4(VAR4);
            VAR4->VAR15 = 0;
            return -1;
        }
        VAR4->VAR39->VAR42 = FUN5(VAR9 + 1);
        if (!VAR4->VAR39->VAR42)
        {
            FUN4(VAR4);
            return FUN6(VAR40);
        }
        memcpy(VAR4->VAR39->VAR42, VAR5, VAR9);
        VAR4->VAR39->VAR42[VAR9] = '';
        FUN7(&VAR4->VAR43, &VAR4->VAR14, VAR4->VAR39);
        if (!VAR4->VAR43)
        {
            FUN4(VAR4);
            return FUN6(VAR40);
        }
        VAR5 = VAR5 + VAR9;
    }
    for (VAR7 = 0; VAR7 < VAR4->VAR15; VAR7++)
    {
        if (VAR12 == VAR4->VAR43[VAR7]->VAR41)
            VAR4->VAR18.VAR42 = VAR4->VAR43[VAR7]->VAR42;
    }
    return 0;
}
static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9;
    *VAR6 = 0;
    VAR4->VAR10 = 0;
    VAR4->VAR11 = 0;
    VAR4->VAR12 = 0;
    VAR2->VAR13.VAR14 = VAR15;
    VAR2->VAR13.VAR16 = 0;
    for (VAR9 = 0; VAR9 < 5; VAR9++)
    {
        VAR2->VAR13.VAR17[VAR9] = VAR15;
        VAR2->VAR13.VAR18[VAR9] = 0;
    }
    VAR4->VAR19 = FUN2(VAR8, 3);
    if (VAR4->VAR19 & 0x01 && VAR4->VAR19 != 0x01)
        VAR4->VAR10 = FUN2(VAR8, 2);
    if (VAR4->VAR19 & 0x04)
        VAR4->VAR11 = FUN2(VAR8, 2);
    if (VAR4->VAR19 == 0x02)
        VAR4->VAR12 = FUN2(VAR8, 2);
    if (FUN3(VAR8))
        *VAR6 |= VAR20;
    VAR4->VAR21 = FUN2(VAR8, 5);
    if (FUN3(VAR8))
    {
        *VAR6 |= VAR22;
        VAR4->VAR23 = FUN2(VAR8, 8);
    }
    if (FUN3(VAR8))
    {
        *VAR6 |= VAR24;
        VAR4->VAR25 = FUN2(VAR8, 8);
    }
    if (FUN3(VAR8))
    {
        *VAR6 |= VAR26;
        VAR4->VAR27 = FUN2(VAR8, 5);
        VAR4->VAR28 = FUN2(VAR8, 2);
    }
    if (VAR4->VAR19 == 0x00)
    {
        VAR4->VAR29 = FUN2(VAR8, 5);
        if (FUN3(VAR8))
        {
            *VAR6 |= VAR30;
            VAR4->VAR31 = FUN2(VAR8, 8);
        }
        if (FUN3(VAR8))
        {
            *VAR6 |= VAR32;
            VAR4->VAR33 = FUN2(VAR8, 8);
        }
        if (FUN3(VAR8))
        {
            *VAR6 |= VAR26;
            VAR4->VAR34 = FUN2(VAR8, 5);
            VAR4->VAR35 = FUN2(VAR8, 2);
        }
    }
    if (FUN3(VAR8))
        *VAR6 |= VAR36;
    if (FUN3(VAR8))
        *VAR6 |= VAR37;
    if (FUN3(VAR8))
    {
        *VAR6 |= VAR38;
        VAR4->VAR39 = FUN2(VAR8, 14);
    }
    if (FUN3(VAR8))
    {
        *VAR6 |= VAR40;
        VAR4->VAR41 = FUN2(VAR8, 14);
    }
    if (FUN3(VAR8))
    {
        *VAR6 |= VAR42;
        VAR4->VAR43 = FUN2(VAR8, 6);
        for (VAR9 = 0; VAR9 < (VAR4->VAR43 + 1); VAR9++)
            FUN4(VAR8, 8);
    }
    VAR4->VAR44 = VAR45[VAR4->VAR19];
    return 0;
}
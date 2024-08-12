static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR7.VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    FUN2(VAR4, 1, "", VAR15);
    assert(VAR4->VAR16 < VAR4->VAR7.VAR17);
    if (VAR4->VAR16 == 0)
    {
        VAR4->VAR18 = NULL;
    }
    else
    {
        VAR4->VAR18 = (VAR19 *)(VAR6 + VAR4->VAR16);
    }
    VAR4->VAR20 = (VAR21 *)((VAR5 *)VAR4->VAR22 + VAR4->VAR22->VAR23);
    FUN2(VAR4, 1, "", VAR15, FUN3(VAR4->VAR24));
    VAR14 = VAR4->VAR24;
    VAR4->VAR24 = VAR25;
    switch (VAR14)
    {
    case VAR25:
        break;
    case VAR26:
        FUN4(VAR4);
        break;
    case VAR27:
        for (VAR13 = 0; VAR13 < VAR28; VAR13++)
        {
            if (!VAR4->VAR29[VAR13].VAR30)
            {
                continue;
            }
            FUN5(VAR4, VAR13, 0, VAR31);
        }
        FUN6(VAR4, 1, VAR31);
        VAR10 = FUN7(sizeof(VAR9) * (VAR32 + 1));
        for (VAR11 = 0, VAR12 = 0; VAR11 < VAR32; VAR11++)
        {
            if (VAR4->VAR33.VAR10[VAR11] == 0)
            {
                continue;
            }
            VAR10[VAR12].VAR34.VAR35 = VAR4->VAR33.VAR10[VAR11];
            VAR10[VAR12].VAR34.VAR36 = VAR37;
            VAR10[VAR12].VAR38 = VAR39;
            VAR12++;
        }
        if (VAR4->VAR40)
        {
            VAR10[VAR12].VAR34.VAR35 = VAR4->VAR40;
            VAR10[VAR12].VAR34.VAR36 = VAR41;
            VAR10[VAR12].VAR38 = VAR39;
            VAR12++;
        }
        FUN8(VAR4, VAR10, VAR12);
        FUN9(VAR10);
        break;
    case VAR42:
        FUN10(VAR4, VAR4->VAR43.VAR24, 1);
        break;
    }
    FUN2(VAR4, 1, "", VAR15);
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    x265_picture VAR11;
    x265_picture VAR12 = {{0}};
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17 = 0;
    int VAR18;
    int VAR19;
    int VAR20;
    FUN2(VAR9->VAR21, &VAR11);
    if (VAR6)
    {
        for (VAR20 = 0; VAR20 < 3; VAR20++)
        {
            VAR11.VAR22[VAR20] = VAR6->VAR23[VAR20];
            VAR11.VAR24[VAR20] = VAR6->VAR25[VAR20];
        }
        VAR11.VAR26 = VAR6->VAR26;
        VAR11.VAR27 = FUN3(VAR2->VAR28)->VAR29[0].VAR30 + 1;
        VAR11.VAR31 = VAR6->VAR32 == VAR33 ? VAR34 : VAR6->VAR32 == VAR35 ? VAR36
                                                                            : VAR6->VAR32 == VAR37   ? VAR38
                                                                                                                    : VAR39;
    }
    VAR19 = FUN4(VAR9->VAR40, &VAR14, &VAR18, VAR6 ? &VAR11 : NULL, &VAR12);
    if (VAR19 < 0)
        return VAR41;
    if (!VAR18)
        return 0;
    for (VAR20 = 0; VAR20 < VAR18; VAR20++)
        VAR17 += VAR14[VAR20].VAR42;
    VAR19 = FUN5(VAR4, VAR17);
    if (VAR19 < 0)
    {
        FUN6(VAR2, VAR43, "");
        return VAR19;
    }
    VAR16 = VAR4->VAR23;
    for (VAR20 = 0; VAR20 < VAR18; VAR20++)
    {
        memcpy(VAR16, VAR14[VAR20].VAR17, VAR14[VAR20].VAR42);
        VAR16 += VAR14[VAR20].VAR42;
        if (FUN7(VAR14[VAR20].VAR44))
            VAR4->VAR45 |= VAR46;
    }
    VAR4->VAR26 = VAR12.VAR26;
    VAR4->VAR47 = VAR12.VAR47;
    switch (VAR12.VAR31)
    {
    case VAR48:
    case VAR34:
        VAR2->VAR49->VAR32 = VAR33;
        break;
    case VAR36:
        VAR2->VAR49->VAR32 = VAR35;
        break;
    case VAR38:
        VAR2->VAR49->VAR32 = VAR37;
        break;
    }
    *VAR7 = 1;
    return 0;
}
static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR3);
    VAR6 *VAR7 = FUN3(VAR5);
    VAR1 *VAR8;
    VAR9 *VAR10, *VAR11;
    int VAR12;
    VAR8 = FUN4(sizeof(*VAR8));
    VAR8->VAR13 = FUN5(VAR3->VAR13);
    VAR8->VAR14 = VAR5->VAR15;
    if (VAR5->VAR16)
    {
        VAR8->VAR17 = VAR18;
    }
    else if (VAR5->VAR19)
    {
        VAR8->VAR17 = VAR20;
    }
    else
    {
        VAR8->VAR17 = VAR21;
    }
    if (VAR5->VAR22)
    {
        VAR8->VAR23 = VAR18;
    }
    else if (VAR5->VAR24)
    {
        VAR8->VAR23 = VAR20;
    }
    else
    {
        VAR8->VAR23 = VAR21;
    }
    VAR8->VAR25 = VAR5->VAR26;
    VAR8->VAR27 = VAR5->VAR28.VAR29;
    VAR8->VAR30 = VAR5->VAR28.VAR31;
    VAR8->VAR32 = FUN6(VAR5->VAR33);
    VAR10 = NULL;
    for (VAR12 = 0; VAR12 < VAR5->VAR28.VAR34; VAR12++)
    {
        VAR11 = FUN4(sizeof(*VAR11));
        VAR11->VAR35 = FUN6(VAR5->VAR28.VAR36 + VAR12 * VAR37);
        VAR11->VAR38 = VAR10;
        VAR10 = VAR11;
    }
    VAR8->VAR39 = VAR10;
    VAR10 = NULL;
    for (VAR12 = VAR5->VAR28.VAR34; VAR12 < VAR5->VAR28.VAR40; VAR12++)
    {
        VAR11 = FUN4(sizeof(*VAR11));
        VAR11->VAR35 = FUN6(VAR5->VAR28.VAR36 + VAR12 * VAR37);
        VAR11->VAR38 = VAR10;
        VAR10 = VAR11;
    }
    VAR8->VAR41 = VAR10;
    VAR8->VAR42 = FUN7(VAR5);
    if (!FUN8(VAR7, VAR43))
    {
        VAR8->VAR44 = VAR20;
    }
    else if (!VAR8->VAR42)
    {
        VAR8->VAR44 = VAR18;
    }
    else
    {
        VAR8->VAR44 = VAR21;
    }
    VAR3->VAR45 = 1;
    return VAR8;
}
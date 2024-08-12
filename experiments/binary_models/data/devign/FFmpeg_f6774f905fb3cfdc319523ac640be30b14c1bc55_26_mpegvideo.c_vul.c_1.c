int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6;
    FUN2(!VAR4->VAR7.VAR8[0]);
    FUN2(VAR5->VAR7.VAR8[0]);
    VAR5->VAR9.VAR7 = &VAR5->VAR7;
    VAR4->VAR9.VAR7 = &VAR4->VAR7;
    VAR6 = FUN3(&VAR4->VAR9, &VAR5->VAR9);
    if (VAR6 < 0)
        goto VAR10;
    VAR6 = FUN4(VAR4, VAR5);
    if (VAR6 < 0)
        goto VAR10;
    if (VAR5->VAR11)
    {
        VAR4->VAR12 = FUN5(VAR5->VAR12);
        if (!VAR4->VAR12)
            goto VAR10;
        VAR4->VAR11 = VAR4->VAR12->VAR13;
    }
    VAR4->VAR14 = VAR5->VAR14;
    VAR4->VAR15 = VAR5->VAR15;
    VAR4->VAR16 = VAR5->VAR16;
    VAR4->VAR17 = VAR5->VAR17;
    VAR4->VAR18 = VAR5->VAR18;
    VAR4->VAR19 = VAR5->VAR19;
    VAR4->VAR20 = VAR5->VAR20;
    return 0;
VAR10:
    FUN6(VAR2, VAR4);
    return VAR6;
}
static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    uint32_t VAR8;
    uint32_t VAR9;
    uint16_t VAR10;
    int VAR11;
    VAR2->VAR12 |= VAR13;
    FUN2(VAR7, 4);
    VAR9 = FUN3(VAR7);
    FUN2(VAR7, 4);
    FUN2(VAR7, 4);
    VAR8 = FUN3(VAR7);
    if ((VAR8 != 4) && (VAR8 != 2))
        FUN4(VAR2, "" VAR14 "", VAR8);
    VAR4->VAR15 = FUN3(VAR7);
    VAR4->VAR16 = FUN3(VAR7);
    VAR4->VAR17 = FUN3(VAR7);
    VAR4->VAR18 = FUN5(VAR7);
    FUN2(VAR7, 2);
    VAR4->VAR19 = FUN6(VAR4->VAR18, sizeof(VAR20));
    if (!VAR4->VAR19)
    {
        VAR11 = FUN7(VAR21);
        goto VAR22;
    }
    for (VAR10 = 0; VAR10 < VAR4->VAR18; VAR10++)
    {
        VAR20 *VAR23 = &VAR4->VAR19[VAR10];
        VAR23->VAR24 = FUN5(VAR7);
        VAR23->VAR25 = FUN5(VAR7);
        VAR23->VAR26 = FUN3(VAR7);
        VAR23->VAR27 = FUN5(VAR7);
        VAR23->VAR28 = FUN5(VAR7);
        VAR23->VAR29 = VAR23->VAR27 * VAR23->VAR26 * VAR23->VAR25;
        VAR23->VAR30 = VAR31 * VAR23->VAR25;
        VAR23->VAR32 = 64;
        VAR23->VAR33 = FUN8(VAR23->VAR24, VAR23->VAR27);
        VAR23->VAR34 = -1;
        VAR23->VAR35 = 0;
        VAR23->VAR36 = 0;
        if (VAR23->VAR28 & VAR37)
            FUN9(VAR2, VAR38, ""
                                      "",
                   VAR23->VAR28);
        if (!VAR23->VAR25 || VAR23->VAR26 <= 0 || VAR23->VAR25 >= VAR39 / VAR31)
        {
            FUN9(VAR2, VAR40, "" VAR41 "", VAR10);
            VAR11 = VAR42;
            goto VAR22;
        }
    }
    VAR4->VAR43 = FUN10(VAR7);
    VAR4->VAR44 = VAR9 - VAR4->VAR43;
    VAR4->VAR45 = VAR4->VAR18 + 1;
    return 0;
VAR22:
    FUN11(VAR2);
    return VAR11;
}
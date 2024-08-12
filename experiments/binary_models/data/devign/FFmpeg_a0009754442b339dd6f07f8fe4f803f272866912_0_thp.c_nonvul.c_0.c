static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    int64_t VAR12 = FUN2(VAR11);
    int VAR13;
    FUN3(VAR11);
    VAR6->VAR14 = FUN3(VAR11);
    FUN3(VAR11);
    FUN3(VAR11);
    VAR6->VAR15 = FUN4(FUN5(FUN3(VAR11)), VAR16);
    VAR6->VAR17 = FUN3(VAR11);
    VAR6->VAR18 = FUN3(VAR11);
    VAR11->VAR19 = FUN3(VAR11);
    if (VAR12 > 0 && (!VAR11->VAR19 || VAR12 < VAR11->VAR19))
        VAR11->VAR19 = VAR12;
    VAR6->VAR20 = FUN3(VAR11);
    FUN3(VAR11);
    VAR6->VAR21 = FUN3(VAR11);
    VAR6->VAR22 = FUN3(VAR11);
    VAR6->VAR23 = VAR6->VAR18;
    VAR6->VAR24 = VAR6->VAR21;
    FUN6(VAR11, VAR6->VAR20, VAR25);
    VAR6->VAR26 = FUN3(VAR11);
    FUN7(VAR11, VAR6->VAR27, 16);
    for (VAR13 = 0; VAR13 < VAR6->VAR26; VAR13++)
    {
        if (VAR6->VAR27[VAR13] == 0)
        {
            if (VAR6->VAR28 != 0)
                break;
            VAR9 = FUN8(VAR2, NULL);
            if (!VAR9)
                return FUN9(VAR29);
            FUN10(VAR9, 64, VAR6->VAR15.VAR30, VAR6->VAR15.VAR31);
            VAR9->VAR32->VAR33 = VAR34;
            VAR9->VAR32->VAR35 = VAR36;
            VAR9->VAR32->VAR37 = 0;
            VAR9->VAR32->VAR38 = FUN3(VAR11);
            VAR9->VAR32->VAR39 = FUN3(VAR11);
            VAR9->VAR32->VAR40 = FUN11(VAR6->VAR15);
            VAR6->VAR28 = VAR9;
            VAR6->VAR41 = VAR9->VAR42;
            if (VAR6->VAR14 == 0x11000)
                FUN3(VAR11);
        }
        else if (VAR6->VAR27[VAR13] == 1)
        {
            if (VAR6->VAR43 != 0)
                break;
            VAR9 = FUN8(VAR2, NULL);
            if (!VAR9)
                return FUN9(VAR29);
            VAR9->VAR32->VAR33 = VAR44;
            VAR9->VAR32->VAR35 = VAR45;
            VAR9->VAR32->VAR37 = 0;
            VAR9->VAR32->VAR46 = FUN3(VAR11);
            VAR9->VAR32->VAR40 = FUN3(VAR11);
            FUN10(VAR9, 64, 1, VAR9->VAR32->VAR40);
            VAR6->VAR47 = VAR9->VAR42;
            VAR6->VAR43 = 1;
        }
    }
    return 0;
}
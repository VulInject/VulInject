static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    int VAR12;
    FUN2(VAR11);
    VAR6->VAR13 = FUN2(VAR11);
    FUN2(VAR11);
    FUN2(VAR11);
    VAR6->VAR14 = FUN3(FUN4(FUN2(VAR11)), VAR15);
    VAR6->VAR16 = FUN2(VAR11);
    VAR6->VAR17 = FUN2(VAR11);
    FUN2(VAR11);
    VAR6->VAR18 = FUN2(VAR11);
    FUN2(VAR11);
    VAR6->VAR19 = FUN2(VAR11);
    VAR6->VAR20 = FUN2(VAR11);
    VAR6->VAR21 = VAR6->VAR17;
    VAR6->VAR22 = VAR6->VAR19;
    FUN5(VAR11, VAR6->VAR18, VAR23);
    VAR6->VAR24 = FUN2(VAR11);
    FUN6(VAR11, VAR6->VAR25, 16);
    for (VAR12 = 0; VAR12 < VAR6->VAR24; VAR12++)
    {
        if (VAR6->VAR25[VAR12] == 0)
        {
            if (VAR6->VAR26 != 0)
                break;
            VAR9 = FUN7(VAR2, NULL);
            if (!VAR9)
                return FUN8(VAR27);
            FUN9(VAR9, 64, VAR6->VAR14.VAR28, VAR6->VAR14.VAR29);
            VAR9->VAR30->VAR31 = VAR32;
            VAR9->VAR30->VAR33 = VAR34;
            VAR9->VAR30->VAR35 = 0;
            VAR9->VAR30->VAR36 = FUN2(VAR11);
            VAR9->VAR30->VAR37 = FUN2(VAR11);
            VAR9->VAR30->VAR38 = FUN10(VAR6->VAR14);
            VAR6->VAR26 = VAR9;
            VAR6->VAR39 = VAR9->VAR40;
            if (VAR6->VAR13 == 0x11000)
                FUN2(VAR11);
        }
        else if (VAR6->VAR25[VAR12] == 1)
        {
            if (VAR6->VAR41 != 0)
                break;
            VAR9 = FUN7(VAR2, NULL);
            if (!VAR9)
                return FUN8(VAR27);
            VAR9->VAR30->VAR31 = VAR42;
            VAR9->VAR30->VAR33 = VAR43;
            VAR9->VAR30->VAR35 = 0;
            VAR9->VAR30->VAR44 = FUN2(VAR11);
            VAR9->VAR30->VAR38 = FUN2(VAR11);
            FUN9(VAR9, 64, 1, VAR9->VAR30->VAR38);
            VAR6->VAR45 = VAR9->VAR40;
            VAR6->VAR41 = 1;
        }
    }
    return 0;
}
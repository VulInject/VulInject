static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    bool VAR9 = FUN4(VAR2->VAR10) && !FUN5(VAR2->VAR10);
    VAR6->VAR11 = 0;
    VAR6->VAR12 = 1;
    VAR6->VAR13 = 2;
    VAR6->VAR14 = 4;
    VAR6->VAR15.VAR16 = 0x0;
    VAR6->VAR15.VAR17 = 0x1000;
    VAR6->VAR15.VAR18 = VAR19;
    VAR6->VAR20.VAR16 = 0x1000;
    VAR6->VAR20.VAR17 = 0x1000;
    VAR6->VAR20.VAR18 = VAR21;
    VAR6->VAR22.VAR16 = 0x2000;
    VAR6->VAR22.VAR17 = 0x1000;
    VAR6->VAR22.VAR18 = VAR23;
    VAR6->VAR24.VAR16 = 0x3000;
    VAR6->VAR24.VAR17 = VAR25 * VAR26;
    VAR6->VAR24.VAR18 = VAR27;
    VAR6->VAR28.VAR16 = 0x0;
    VAR6->VAR28.VAR17 = 0x4;
    VAR6->VAR28.VAR18 = VAR27;
    FUN6(&VAR6->VAR29, FUN7(VAR6), "", 2 * VAR25 * VAR26);
    FUN8(&VAR6->VAR30, FUN7(VAR6), "", &VAR6->VAR29, 0, FUN9(&VAR6->VAR29));
    FUN10(&VAR6->VAR31, &VAR6->VAR30, "");
    if (VAR6->VAR32 == VAR33)
    {
        VAR6->VAR32 = VAR9 ? VAR34 : VAR35;
    }
    if (VAR9 && FUN11(VAR2))
    {
        int VAR36;
        VAR36 = FUN12(VAR2, 0);
        assert(VAR36 > 0);
        VAR36 = FUN13(VAR2, VAR37, 0, VAR38);
        assert(VAR36 > 0);
        FUN14(VAR2->VAR39 + VAR36 + VAR40, 0x3);
    }
    else
    {
        VAR2->VAR41 &= ~VAR42;
    }
    FUN15(&VAR6->VAR10, sizeof(VAR6->VAR10), VAR6);
    if (VAR8->VAR43)
    {
        VAR8->FUN16(VAR6, VAR4);
    }
}
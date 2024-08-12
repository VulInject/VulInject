static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    uint64_t VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    if (!(VAR2->VAR12.VAR5 & VAR13))
    {
        FUN3(FUN4(VAR4), "");
    }
    if (VAR2->VAR14 < 0 || VAR2->VAR14 >= VAR15)
    {
        FUN3(FUN4(VAR4), "", VAR2->VAR14);
    }
    VAR10 = &VAR2->VAR16[VAR2->VAR14];
    if (VAR10->VAR17 != 1)
    {
        FUN3(FUN4(VAR4), "", VAR10->VAR17);
    }
    if (!(VAR2->VAR18[14] & (1 << 28)))
    {
        return;
    }
    VAR8 = FUN5(VAR2);
    VAR8->VAR19 = 1;
    for (VAR11 = 0; VAR11 < 16; VAR11++)
    {
        VAR8->VAR20[VAR11] = FUN6(FUN7(VAR2, VAR11)->VAR21);
        VAR8->VAR22[VAR11] = FUN6(VAR2->VAR23[VAR11]);
        VAR8->VAR24[VAR11] = FUN8(VAR2->VAR25[VAR11]);
        VAR8->VAR26[VAR11] = FUN6(VAR2->VAR18[VAR11]);
    }
    VAR8->VAR27 = FUN8(VAR2->VAR28);
    VAR8->VAR29 = FUN8(VAR2->VAR30);
    VAR8->VAR31 = FUN8(VAR2->VAR32);
    VAR8->VAR33 = FUN6(VAR2->VAR34);
    VAR8->VAR35 = FUN6(VAR2->VAR36 >> 8);
    VAR8->VAR37 = FUN6(FUN9() | VAR38);
    VAR8->VAR39.VAR5 = FUN6(FUN10(VAR2));
    VAR8->VAR39.VAR6 = FUN6(VAR2->VAR12.VAR6);
    VAR5 = FUN11(VAR8->VAR40.VAR5);
    VAR6 = FUN11(VAR8->VAR40.VAR6);
    FUN12(VAR8);
    VAR2->VAR14--;
    if (VAR2->VAR14 == -1)
    {
        VAR2->VAR41 &= ~VAR42;
    }
    FUN13("" VAR43 "" VAR43 "", VAR44, VAR2->VAR12.VAR5, VAR2->VAR12.VAR6);
    FUN14(VAR2, VAR5, VAR6);
}
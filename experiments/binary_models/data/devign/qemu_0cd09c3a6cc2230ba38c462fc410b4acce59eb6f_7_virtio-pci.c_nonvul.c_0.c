static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8;
    uint32_t VAR9;
    VAR8 = VAR4->VAR10.VAR8;
    if (VAR4->VAR11)
    {
        FUN3(VAR8, VAR4->VAR11);
    }
    FUN4(VAR8 + VAR12, FUN5(VAR8 + VAR13));
    FUN4(VAR8 + VAR14, FUN6(VAR6));
    VAR8[VAR15] = 1;
    if (VAR4->VAR16 && FUN7(&VAR4->VAR10, VAR4->VAR16, 1))
    {
        FUN8("" VAR17, VAR4->VAR16);
        VAR4->VAR16 = 0;
    }
    VAR4->VAR10.VAR18 = VAR19;
    VAR9 = FUN9(&VAR4->VAR10) + FUN10(VAR6);
    if (VAR9 & (VAR9 - 1))
    {
        VAR9 = 1 << FUN11(VAR9);
    }
    FUN12(&VAR4->VAR20, FUN13(VAR4), &VAR21, VAR4, "", VAR9);
    FUN14(&VAR4->VAR10, 0, VAR22, &VAR4->VAR20);
    if (!FUN15())
    {
        VAR4->VAR23 &= ~VAR24;
    }
    FUN16(&VAR4->VAR25, VAR26);
    FUN16(&VAR4->VAR25, VAR27);
    VAR4->VAR25 = FUN17(VAR6, VAR4->VAR25);
}
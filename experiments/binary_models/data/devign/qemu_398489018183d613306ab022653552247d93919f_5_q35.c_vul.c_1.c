static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    hwaddr VAR4;
    VAR5 *VAR6 = FUN2(VAR2);
    VAR6->VAR7->VAR8.VAR9.VAR10 = VAR11 + VAR12;
    FUN3(&VAR6->VAR13, FUN4(VAR6), "", VAR6->VAR14, VAR6->VAR15, 0x100000000ULL - VAR6->VAR15);
    FUN5(VAR6->VAR16, VAR6->VAR15, &VAR6->VAR13);
    VAR4 = (sizeof(VAR17) == 4 ? 0 : ((VAR18)1 << 62));
    FUN3(&VAR6->VAR19, FUN4(VAR6), "", VAR6->VAR14, 0x100000000ULL + VAR6->VAR20, VAR4);
    if (VAR4)
    {
        FUN5(VAR6->VAR16, 0x100000000ULL + VAR6->VAR20, &VAR6->VAR19);
    }
    FUN6(&VAR21, VAR6);
    FUN3(&VAR6->VAR22, FUN4(VAR6), "", VAR6->VAR14, 0xa0000, 0x20000);
    FUN7(VAR6->VAR16, 0xa0000, &VAR6->VAR22, 1);
    FUN8(&VAR6->VAR22, false);
    FUN9(FUN10(VAR6), VAR6->VAR23, VAR6->VAR16, VAR6->VAR14, &VAR6->VAR24[0], VAR25, VAR26);
    for (VAR3 = 0; VAR3 < 12; ++VAR3)
    {
        FUN9(FUN10(VAR6), VAR6->VAR23, VAR6->VAR16, VAR6->VAR14, &VAR6->VAR24[VAR3 + 1], VAR27 + VAR3 * VAR28, VAR28);
    }
    return 0;
}
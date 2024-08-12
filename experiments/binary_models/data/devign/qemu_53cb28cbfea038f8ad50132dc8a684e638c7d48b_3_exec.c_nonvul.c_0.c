static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    hwaddr VAR7 = VAR4->VAR8 & VAR9;
    VAR3 *VAR10 = FUN2(VAR2->VAR11, VAR7, VAR2->VAR12.VAR13, VAR2->VAR12.VAR14);
    MemoryRegionSection VAR15 = {
        .VAR8 = VAR7,
        .VAR16 = FUN3(VAR17),
    };
    hwaddr VAR18, VAR19;
    assert(VAR10->VAR20->VAR6 || VAR10->VAR20 == &VAR21);
    if (!(VAR10->VAR20->VAR6))
    {
        VAR6 = FUN4(VAR2->VAR22, VAR7);
        VAR15.VAR20 = &VAR6->VAR23;
        FUN5(VAR2, VAR7 >> VAR24, 1, FUN6(&VAR2->VAR12, &VAR15));
    }
    else
    {
        VAR6 = FUN7(VAR10->VAR20, VAR5, VAR23);
    }
    VAR18 = VAR4->VAR8 & ~VAR9;
    VAR19 = VAR18 + FUN8(VAR4->VAR16) - 1;
    FUN9(VAR6, VAR18, VAR19, FUN6(&VAR2->VAR12, VAR4));
}
static void FUN1(VAR1 *VAR2)
{
    hwaddr VAR3 = VAR2->VAR4 & VAR5;
    MemoryRegionSection VAR6;
    VAR7 *VAR8;
    size_t VAR9;
    VAR10 *VAR11;
    VAR8 = FUN2(&VAR2->VAR12);
    if (VAR2->VAR13)
    {
        FUN3(VAR8, &VAR2->VAR14);
        FUN4(&VAR2->VAR14);
    }
    VAR6 = FUN5(VAR8, 0, 1);
    VAR11 = FUN6(VAR6.VAR15);
    VAR9 = VAR11[VAR3 + 2] * VAR16;
    VAR2->VAR9 = VAR9;
    VAR9 += VAR3 & ~VAR17;
    VAR3 &= VAR17;
    VAR9 = FUN7(VAR9);
    FUN8(&VAR2->VAR14, "", VAR6.VAR15, VAR3, VAR9);
    FUN9(VAR8, VAR3, &VAR2->VAR14, 1000);
    VAR2->VAR13 = true;
}
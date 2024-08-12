static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    MemoryRegionSection VAR9;
    for (;;)
    {
        size_t VAR10 = 0;
        uint32_t VAR11;
        VAR8 = FUN3(VAR4, sizeof(VAR7));
        if (!VAR8)
        {
            return;
        }
        while (FUN4(VAR8->VAR12, VAR8->VAR13, VAR10, &VAR11, 4) == 4)
        {
            ram_addr_t VAR14;
            ram_addr_t VAR15;
            int VAR16 = FUN5(VAR2, &VAR11);
            VAR14 = (VAR17)VAR16 << VAR18;
            VAR10 += 4;
            VAR9 = FUN6(FUN7(), VAR14, 1);
            if (!FUN8(VAR9.VAR19) || !FUN9(VAR9.VAR20))
                continue;
            FUN10(FUN11(VAR9.VAR20), VAR14);
            VAR15 = VAR9.VAR21;
            FUN12(FUN13(VAR9.VAR20) + VAR15, !!(VAR4 == VAR6->VAR22));
            FUN14(VAR9.VAR20);
        }
        FUN15(VAR4, VAR8, VAR10);
        FUN16(VAR2, VAR4);
        FUN17(VAR8);
    }
}
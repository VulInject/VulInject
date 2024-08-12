static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    AddrRange VAR11;
    MemoryRegionSection VAR12;
    VAR6 = FUN2(VAR4);
    FUN3(VAR8, VAR6)
    {
        if (VAR8->VAR2 == VAR2)
        {
            VAR12 = (VAR13){
                .VAR14 = VAR4,
                .VAR15 = FUN4(VAR8->VAR16.VAR17),
                .VAR18 = VAR8->VAR16.VAR18,
            };
            FUN5(VAR19, VAR20, &VAR12, FUN4(VAR8->VAR16.VAR17), FUN4(VAR8->VAR16.VAR18));
            FUN6(VAR10, &VAR2->VAR21, VAR22)
            {
                VAR11 = FUN7(VAR10->VAR16, FUN8(VAR8->VAR16.VAR17, FUN9(VAR8->VAR23)));
                if (!FUN10(VAR11, VAR8->VAR16))
                {
                    continue;
                }
                VAR11 = FUN11(VAR11, VAR8->VAR16);
                FUN5(VAR24, VAR25, &VAR12, FUN4(VAR11.VAR17), FUN4(VAR11.VAR18));
            }
        }
    }
    FUN12(VAR6);
}
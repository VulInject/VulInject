static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    if (VAR2->VAR9 && VAR2->VAR9 != VAR4)
    {
        return;
    }
    if (VAR10)
    {
        if (VAR2->VAR11)
        {
            VAR2->FUN2(VAR2);
        }
    }
    VAR6 = FUN3(VAR4);
    FUN4(VAR8, VAR6)
    {
        MemoryRegionSection VAR12 = {
            .VAR13 = VAR8->VAR13,
            .VAR14 = VAR4,
            .VAR15 = VAR8->VAR16,
            .VAR17 = VAR8->VAR18.VAR17,
            .VAR19 = FUN5(VAR8->VAR18.VAR20),
            .VAR21 = VAR8->VAR21,
        };
        if (VAR2->VAR22)
        {
            VAR2->FUN6(VAR2, &VAR12);
        }
    }
    FUN7(VAR6);
}
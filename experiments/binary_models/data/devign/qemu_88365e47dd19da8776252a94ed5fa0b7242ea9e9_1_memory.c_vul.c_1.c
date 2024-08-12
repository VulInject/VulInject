void FUN1(fprintf_function VAR1, void *VAR2)
{
    MemoryRegionListHead VAR3;
    VAR4 *VAR5, *VAR6;
    FUN2(&VAR3);
    FUN3(VAR2, "");
    FUN4(VAR1, VAR2, VAR7.VAR8, 0, 0, &VAR3);
    FUN5(VAR5, &VAR3, VAR9)
    {
        if (!VAR5->VAR10)
        {
            FUN3(VAR2, "", VAR5->VAR11->VAR12);
            FUN4(VAR1, VAR2, VAR5->VAR11, 0, 0, &VAR3);
        }
    }
    FUN6(VAR5, &VAR3, VAR9, VAR6) { FUN7(VAR6); }
    if (VAR13.VAR8 && !FUN8(&VAR13.VAR8->VAR14))
    {
        FUN2(&VAR3);
        FUN3(VAR2, "");
        FUN4(VAR1, VAR2, VAR13.VAR8, 0, 0, &VAR3);
    }
}
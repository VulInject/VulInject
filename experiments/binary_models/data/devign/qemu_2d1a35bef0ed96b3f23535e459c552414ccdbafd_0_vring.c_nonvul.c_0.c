static void *FUN1(VAR1 **VAR2, hwaddr VAR3, hwaddr VAR4, bool VAR5)
{
    MemoryRegionSection VAR6 = FUN2(FUN3(), VAR3, VAR4);
    if (!VAR6.VAR2 || FUN4(VAR6.VAR7) < VAR4)
    {
        goto VAR8;
    }
    if (VAR5 && VAR6.VAR9)
    {
        goto VAR8;
    }
    if (!FUN5(VAR6.VAR2))
    {
        goto VAR8;
    }
    if (FUN6(VAR6.VAR2))
    {
        goto VAR8;
    }
    *VAR2 = VAR6.VAR2;
    return FUN7(VAR6.VAR2) + VAR6.VAR10;
VAR8:
    FUN8(VAR6.VAR2);
    *VAR2 = NULL;
    return NULL;
}
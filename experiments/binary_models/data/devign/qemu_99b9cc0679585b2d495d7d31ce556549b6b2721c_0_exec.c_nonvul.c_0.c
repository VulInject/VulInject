static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR2);
    MemoryRegionSection VAR7 = *VAR4, VAR8 = *VAR4;
    if ((VAR7.VAR9 & ~VAR10) || (VAR7.VAR11 < VAR12))
    {
        VAR7.VAR11 = FUN3(FUN4(VAR7.VAR9) - VAR7.VAR9, VAR7.VAR11);
        FUN5(VAR6, &VAR7);
        VAR8.VAR11 -= VAR7.VAR11;
        VAR8.VAR9 += VAR7.VAR11;
        VAR8.VAR13 += VAR7.VAR11;
    }
    while (VAR8.VAR11 >= VAR12)
    {
        VAR7 = VAR8;
        if (VAR8.VAR13 & ~VAR10)
        {
            VAR7.VAR11 = VAR12;
            FUN5(VAR6, &VAR7);
        }
        else
        {
            VAR7.VAR11 &= VAR10;
            FUN6(VAR6, &VAR7);
        }
        VAR8.VAR11 -= VAR7.VAR11;
        VAR8.VAR9 += VAR7.VAR11;
        VAR8.VAR13 += VAR7.VAR11;
    }
    VAR7 = VAR8;
    if (VAR7.VAR11)
    {
        FUN5(VAR6, &VAR7);
    }
}
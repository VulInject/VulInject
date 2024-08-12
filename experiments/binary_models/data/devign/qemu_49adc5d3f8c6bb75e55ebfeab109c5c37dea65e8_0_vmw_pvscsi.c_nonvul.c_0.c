FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4 = 0;
    uint64_t VAR5 = VAR2->VAR6.VAR7;
    PVSCSISGState VAR8 = VAR2->VAR8;
    while (VAR5 && VAR4 < VAR9)
    {
        while (!VAR8.VAR10 && VAR4++ < VAR9)
        {
            FUN2(&VAR8);
            FUN3(VAR2->VAR6.VAR11, VAR2->VAR8.VAR12, VAR2->VAR8.VAR10);
        }
        VAR3 = FUN4(VAR5, VAR8.VAR10);
        if (VAR3)
        {
            FUN5(&VAR2->VAR13, VAR8.VAR12, VAR3);
        }
        VAR8.VAR12 += VAR3;
        VAR5 -= VAR3;
        VAR8.VAR10 -= VAR3;
    }
}
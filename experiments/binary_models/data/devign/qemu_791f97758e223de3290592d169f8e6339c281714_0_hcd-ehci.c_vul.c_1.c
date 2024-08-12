static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5, VAR6;
    dma_addr_t VAR7;
    VAR3 = FUN2(VAR2->VAR8.VAR9, VAR10);
    VAR5 = FUN2(VAR2->VAR8.VAR9, VAR11);
    VAR4 = VAR2->VAR8.VAR12[0] & ~VAR13;
    FUN3(&VAR2->VAR14, VAR2->VAR15->VAR16->VAR17, 5, VAR2->VAR15->VAR16->VAR18);
    while (VAR5 > 0)
    {
        if (VAR3 > 4)
        {
            fprintf(VAR19, "", VAR3);
            return -1;
        }
        VAR7 = VAR2->VAR8.VAR12[VAR3] & VAR13;
        VAR7 += VAR4;
        VAR6 = VAR5;
        if (VAR6 > 4096 - VAR4)
        {
            VAR6 = 4096 - VAR4;
            VAR4 = 0;
            VAR3++;
        }
        FUN4(&VAR2->VAR14, VAR7, VAR6);
        VAR5 -= VAR6;
    }
    return 0;
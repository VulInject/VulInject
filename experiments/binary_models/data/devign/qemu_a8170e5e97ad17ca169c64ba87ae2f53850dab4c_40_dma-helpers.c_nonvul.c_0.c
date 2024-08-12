int FUN1(VAR1 *VAR2, dma_addr_t VAR3, void *VAR4, dma_addr_t VAR5, DMADirection VAR6)
{
    hwaddr VAR7, VAR8;
    int VAR9;
    fprintf(VAR10, "" VAR11 "" VAR11 "", VAR2, VAR3, VAR5, VAR6);
    while (VAR5)
    {
        VAR9 = VAR2->FUN2(VAR2, VAR3, &VAR7, &VAR8, VAR6);
        if (VAR9)
        {
            memset(VAR4, 0, VAR5);
            return -1;
        }
        if (VAR8 > VAR5)
        {
            VAR8 = VAR5;
        }
        FUN3(VAR2->VAR12, VAR7, VAR4, VAR8, VAR6 == VAR13);
        VAR5 -= VAR8;
        VAR3 += VAR8;
        VAR4 += VAR8;
    }
    return 0;
}
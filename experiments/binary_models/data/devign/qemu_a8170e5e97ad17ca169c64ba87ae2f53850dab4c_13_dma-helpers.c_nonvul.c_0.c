int FUN1(VAR1 *VAR2, dma_addr_t VAR3, uint8_t VAR4, dma_addr_t VAR5)
{
    hwaddr VAR6, VAR7;
    int VAR8;
    fprintf(VAR9, "" VAR10 "" VAR10 "", VAR2, VAR3, VAR5);
    while (VAR5)
    {
        VAR8 = VAR2->FUN2(VAR2, VAR3, &VAR6, &VAR7, VAR11);
        if (VAR8)
        {
            return VAR8;
        }
        if (VAR7 > VAR5)
        {
            VAR7 = VAR5;
        }
        FUN3(VAR2->VAR12, VAR6, VAR4, VAR7);
        VAR5 -= VAR7;
        VAR3 += VAR7;
    }
    return 0;
}
bool FUN1(VAR1 *VAR2, dma_addr_t VAR3, dma_addr_t VAR4, DMADirection VAR5)
{
    hwaddr VAR6, VAR7;
    fprintf(VAR8, "" VAR9 "" VAR9 "", VAR2, VAR3, VAR4, VAR5);
    while (VAR4)
    {
        if (VAR2->FUN2(VAR2, VAR3, &VAR6, &VAR7, VAR5) != 0)
        {
            return false;
        }
        if (VAR7 > VAR4)
        {
            VAR7 = VAR4;
        }
        VAR4 -= VAR7;
        VAR3 += VAR7;
    }
    return true;
}
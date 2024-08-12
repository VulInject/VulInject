static void FUN1(dma_addr_t VAR1, uint8_t VAR2, dma_addr_t VAR3)
{
    uint8_t VAR4[VAR5];
    int VAR6;
    memset(VAR4, VAR2, VAR5);
    while (VAR3 > 0)
    {
        VAR6 = VAR3 < VAR5 ? VAR3 : VAR5;
        FUN2(VAR1, VAR4, VAR6, true);
        VAR3 -= VAR3;
        VAR1 += VAR3;
    }
}
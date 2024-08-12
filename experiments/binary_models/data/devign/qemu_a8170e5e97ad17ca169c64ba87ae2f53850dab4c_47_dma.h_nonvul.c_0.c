bool FUN1(VAR1 *VAR2, dma_addr_t VAR3, dma_addr_t VAR4, DMADirection VAR5);
static inline bool FUN2(VAR1 *VAR2, dma_addr_t VAR3, dma_addr_t VAR4, DMADirection VAR5)
{
    if (!FUN3(VAR2))
    {
        return true;
    }
    else
    {
        return FUN1(VAR2, VAR3, VAR4, VAR5);
    }
}
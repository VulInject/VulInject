int FUN1(VAR1 *VAR2, dma_addr_t VAR3, void *VAR4, dma_addr_t VAR5, DMADirection VAR6);
static inline int FUN2(VAR1 *VAR2, dma_addr_t VAR3, void *VAR4, dma_addr_t VAR5, DMADirection VAR6)
{
    if (!FUN3(VAR2))
    {
        FUN4(VAR2->VAR7, VAR3, VAR4, VAR5, VAR6 == VAR8);
        return 0;
    }
    else
    {
        return FUN1(VAR2, VAR3, VAR4, VAR5, VAR6);
    }
}
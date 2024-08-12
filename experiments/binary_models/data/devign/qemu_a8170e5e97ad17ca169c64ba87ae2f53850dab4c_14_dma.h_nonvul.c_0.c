int FUN1(VAR1 *VAR2, dma_addr_t VAR3, uint8_t VAR4, dma_addr_t VAR5);
int FUN2(VAR1 *VAR2, dma_addr_t VAR3, uint8_t VAR4, dma_addr_t VAR5);
void *FUN3(VAR1 *VAR2, dma_addr_t VAR3, VAR6 *VAR5, DMADirection VAR7);
static inline void *FUN4(VAR1 *VAR2, dma_addr_t VAR3, VAR6 *VAR5, DMADirection VAR7)
{
    if (!FUN5(VAR2))
    {
        hwaddr VAR8 = *VAR5;
        void *VAR9;
        VAR9 = FUN6(VAR2->VAR10, VAR3, &VAR8, VAR7 == VAR11);
        *VAR5 = VAR8;
        return VAR9;
    }
    else
    {
        return FUN3(VAR2, VAR3, VAR5, VAR7);
    }
}
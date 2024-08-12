void *FUN1(VAR1 *VAR2, dma_addr_t VAR3, VAR4 *VAR5, DMADirection VAR6)
{
    int VAR7;
    hwaddr VAR8, VAR9;
    void *VAR10;
    if (VAR2->VAR11)
    {
        return VAR2->FUN2(VAR2, VAR3, VAR5, VAR6);
    }
    VAR9 = *VAR5;
    VAR7 = VAR2->FUN3(VAR2, VAR3, &VAR8, &VAR9, VAR6);
    if (VAR7)
    {
        return NULL;
    }
    if (VAR9 < *VAR5)
    {
        *VAR5 = VAR9;
    }
    VAR10 = FUN4(VAR2->VAR12, VAR8, &VAR9, VAR6 == VAR13);
    *VAR5 = VAR9;
    return VAR10;
}
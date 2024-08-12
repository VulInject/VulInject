static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, vtd_page_walk_hook VAR5, void *private, bool VAR6)
{
    dma_addr_t VAR7 = FUN2(VAR2);
    uint32_t VAR8 = FUN3(VAR2);
    if (!FUN4(VAR3, VAR2))
    {
        return -VAR9;
    }
    if (!FUN4(VAR4, VAR2))
    {
        VAR4 = FUN5(VAR2);
    }
    return FUN6(VAR7, VAR3, VAR4, VAR5, private, VAR8, true, true, VAR6);
}
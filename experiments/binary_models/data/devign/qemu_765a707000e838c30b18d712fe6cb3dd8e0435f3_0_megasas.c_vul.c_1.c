static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    dma_addr_t VAR5, VAR6;
    VAR4->VAR7 = FUN2(VAR4->VAR8->VAR9.VAR7);
    if (!VAR4->VAR8->VAR9.VAR10)
    {
        FUN3(VAR4->VAR11);
        VAR4->VAR6 = 0;
        return 0;
    }
    else if (VAR4->VAR8->VAR9.VAR10 > 1)
    {
        FUN4(VAR4->VAR11, VAR4->VAR8->VAR9.VAR10);
        VAR4->VAR6 = 0;
        return -1;
    }
    VAR5 = FUN5(VAR4, &VAR4->VAR8->VAR12.VAR13);
    VAR6 = FUN6(VAR4, &VAR4->VAR8->VAR12.VAR13);
    FUN7(&VAR4->VAR14, FUN8(VAR2), 1);
    FUN9(&VAR4->VAR14, VAR5, VAR6);
    VAR4->VAR6 = VAR6;
    return VAR4->VAR6;
}
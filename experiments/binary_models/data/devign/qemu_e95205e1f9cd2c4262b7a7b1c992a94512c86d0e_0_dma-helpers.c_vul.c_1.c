static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    dma_addr_t VAR5, VAR6;
    void *VAR7;
    FUN2(VAR4, VAR2);
    VAR4->VAR8 = NULL;
    VAR4->VAR9 += VAR4->VAR10.VAR11 / 512;
    if (VAR4->VAR12 == VAR4->VAR13->VAR14 || VAR2 < 0)
    {
        FUN3(VAR4, VAR2);
        return;
    }
    FUN4(VAR4);
    while (VAR4->VAR12 < VAR4->VAR13->VAR14)
    {
        VAR5 = VAR4->VAR13->VAR13[VAR4->VAR12].VAR15 + VAR4->VAR16;
        VAR6 = VAR4->VAR13->VAR13[VAR4->VAR12].VAR17 - VAR4->VAR16;
        VAR7 = FUN5(VAR4->VAR13->VAR18, VAR5, &VAR6, VAR4->VAR19);
        if (!VAR7)
            break;
        FUN6(&VAR4->VAR10, VAR7, VAR6);
        VAR4->VAR16 += VAR6;
        if (VAR4->VAR16 == VAR4->VAR13->VAR13[VAR4->VAR12].VAR17)
        {
            VAR4->VAR16 = 0;
            ++VAR4->VAR12;
        }
    }
    if (VAR4->VAR10.VAR11 == 0)
    {
        FUN7(VAR4);
        FUN8(VAR4, VAR20);
        return;
    }
    if (VAR4->VAR10.VAR11 & ~VAR21)
    {
        FUN9(&VAR4->VAR10, VAR4->VAR10.VAR11 & ~VAR21);
    }
    VAR4->VAR8 = VAR4->FUN10(VAR4->VAR22, VAR4->VAR9, &VAR4->VAR10, VAR4->VAR10.VAR11 / 512, VAR23, VAR4);
    assert(VAR4->VAR8);
}
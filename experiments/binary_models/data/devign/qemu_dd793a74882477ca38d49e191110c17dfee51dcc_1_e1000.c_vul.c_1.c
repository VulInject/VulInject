FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    dma_addr_t VAR5;
    struct e1000_tx_desc VAR6;
    uint32_t VAR7 = VAR2->VAR8[VAR9], VAR10 = VAR11;
    if (!(VAR2->VAR8[VAR12] & VAR13))
    {
        FUN3(VAR14, "");
        return;
    }
    while (VAR2->VAR8[VAR9] != VAR2->VAR8[VAR15])
    {
        VAR5 = FUN4(VAR2) + sizeof(struct VAR16) * VAR2->VAR8[VAR9];
        FUN5(VAR4, VAR5, &VAR6, sizeof(VAR6));
        FUN3(VAR14, "", VAR2->VAR8[VAR9], (void *)(VAR17)VAR6.VAR18, VAR6.VAR19.VAR20, VAR6.VAR21.VAR20);
        FUN6(VAR2, &VAR6);
        VAR10 |= FUN7(VAR2, VAR5, &VAR6);
        if (++VAR2->VAR8[VAR9] * sizeof(VAR6) >= VAR2->VAR8[VAR22])
            VAR2->VAR8[VAR9] = 0;
        if (VAR2->VAR8[VAR9] == VAR7)
        {
            FUN3(VAR23, "", VAR7, VAR2->VAR8[VAR15], VAR2->VAR8[VAR22]);
            break;
        }
    }
    FUN8(VAR2, 0, VAR10);
}
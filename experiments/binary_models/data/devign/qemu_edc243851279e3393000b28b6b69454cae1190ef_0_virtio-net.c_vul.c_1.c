static int FUN1(VAR1 *VAR2, uint8_t VAR3, struct VAR4 *VAR5, unsigned int VAR6)
{
    struct virtio_net_ctrl_mac VAR7;
    size_t VAR8;
    VAR9 *VAR10 = FUN2(VAR2->VAR11);
    if (VAR3 == VAR12)
    {
        if (FUN3(VAR5, VAR6) != sizeof(VAR2->VAR13))
        {
            return VAR14;
        }
        VAR8 = FUN4(VAR5, VAR6, 0, &VAR2->VAR13, sizeof(VAR2->VAR13));
        assert(VAR8 == sizeof(VAR2->VAR13));
        FUN5(FUN2(VAR2->VAR11), VAR2->VAR13);
        FUN6(VAR10);
        return VAR15;
    }
    if (VAR3 != VAR16)
    {
        return VAR14;
    }
    int VAR17 = 0;
    int VAR18 = 0;
    uint8_t VAR19 = 0;
    uint8_t VAR20 = 0;
    VAR21 *VAR22 = FUN7(VAR23 * VAR24);
    VAR8 = FUN4(VAR5, VAR6, 0, &VAR7.VAR25, sizeof(VAR7.VAR25));
    VAR7.VAR25 = FUN8(&VAR7.VAR25);
    if (VAR8 != sizeof(VAR7.VAR25))
    {
        goto VAR26;
    }
    FUN9(&VAR5, &VAR6, VAR8);
    if (VAR7.VAR25 * VAR24 > FUN3(VAR5, VAR6))
    {
        goto VAR26;
    }
    if (VAR7.VAR25 <= VAR23)
    {
        VAR8 = FUN4(VAR5, VAR6, 0, VAR22, VAR7.VAR25 * VAR24);
        if (VAR8 != VAR7.VAR25 * VAR24)
        {
            goto VAR26;
        }
        VAR17 += VAR7.VAR25;
    }
    else
    {
        VAR19 = 1;
    }
    FUN9(&VAR5, &VAR6, VAR7.VAR25 * VAR24);
    VAR18 = VAR17;
    VAR8 = FUN4(VAR5, VAR6, 0, &VAR7.VAR25, sizeof(VAR7.VAR25));
    VAR7.VAR25 = FUN8(&VAR7.VAR25);
    if (VAR8 != sizeof(VAR7.VAR25))
    {
        goto VAR26;
    }
    FUN9(&VAR5, &VAR6, VAR8);
    if (VAR7.VAR25 * VAR24 != FUN3(VAR5, VAR6))
    {
        goto VAR26;
    }
    if (VAR17 + VAR7.VAR25 <= VAR23)
    {
        VAR8 = FUN4(VAR5, VAR6, 0, &VAR22[VAR17 * VAR24], VAR7.VAR25 * VAR24);
        if (VAR8 != VAR7.VAR25 * VAR24)
        {
            goto VAR26;
        }
        VAR17 += VAR7.VAR25;
    }
    else
    {
        VAR20 = 1;
    }
    VAR2->VAR27.VAR17 = VAR17;
    VAR2->VAR27.VAR18 = VAR18;
    VAR2->VAR27.VAR19 = VAR19;
    VAR2->VAR27.VAR20 = VAR20;
    memcpy(VAR2->VAR27.VAR22, VAR22, VAR23 * VAR24);
    FUN10(VAR22);
    FUN6(VAR10);
    return VAR15;
VAR26:
    FUN10(VAR22);
    return VAR14;
}
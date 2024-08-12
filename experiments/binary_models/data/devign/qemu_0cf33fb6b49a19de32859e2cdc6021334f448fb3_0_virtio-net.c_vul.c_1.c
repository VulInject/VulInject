static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    VAR9 *VAR10 = FUN3(VAR3);
    VAR11 *VAR12 = FUN4(VAR8);
    struct iovec VAR13[VAR14];
    struct virtio_net_hdr_mrg_rxbuf VAR15;
    unsigned VAR16 = 0;
    size_t VAR17, VAR18, VAR19;
    if (!FUN5(VAR3))
    {
        return -1;
    }
    if (!FUN6(VAR10, VAR6 + VAR8->VAR20 - VAR8->VAR21))
    {
        return 0;
    }
    if (!FUN7(VAR8, VAR5, VAR6))
        return VAR6;
    VAR17 = VAR18 = 0;
    while (VAR17 < VAR6)
    {
        VirtQueueElement VAR22;
        int VAR23, VAR24;
        const struct VAR25 *VAR26 = VAR22.VAR27;
        VAR24 = 0;
        if (FUN8(VAR10->VAR28, &VAR22) == 0)
        {
            if (VAR18 == 0)
                return -1;
            FUN9(""
                         ""
                         ""
                         "" VAR29,
                         VAR18, VAR8->VAR30, VAR17, VAR6, VAR8->VAR20, VAR8->VAR21, VAR12->VAR31);
            FUN10(1);
        }
        if (VAR22.VAR32 < 1)
        {
            FUN9("");
            FUN10(1);
        }
        if (VAR18 == 0)
        {
            assert(VAR17 == 0);
            if (VAR8->VAR30)
            {
                VAR16 = FUN11(VAR13, FUN12(VAR13), VAR26, VAR22.VAR32, FUN13(FUN14(VAR15), VAR33), sizeof(VAR15.VAR33));
            }
            FUN15(VAR8, VAR26, VAR22.VAR32, VAR5, VAR6);
            VAR17 = VAR8->VAR21;
            VAR24 += VAR8->VAR20;
            VAR19 = VAR8->VAR20;
        }
        else
        {
            VAR19 = 0;
        }
        VAR23 = FUN16(VAR26, VAR22.VAR32, VAR19, VAR5 + VAR17, VAR6 - VAR17);
        VAR24 += VAR23;
        VAR17 += VAR23;
        if (!VAR8->VAR30 && VAR17 < VAR6)
        {
            FUN9(""
                         ""
                         "",
                         VAR18, VAR8->VAR30, VAR17, VAR6, VAR8->VAR20, VAR8->VAR21);
            return VAR6;
        }
        FUN17(VAR10->VAR28, &VAR22, VAR24, VAR18++);
    }
    if (VAR16)
    {
        FUN18(VAR12, &VAR15.VAR33, VAR18);
        FUN16(VAR13, VAR16, 0, &VAR15.VAR33, sizeof VAR15.VAR33);
    }
    FUN19(VAR10->VAR28, VAR18);
    FUN20(VAR12, VAR10->VAR28);
    return VAR6;
}
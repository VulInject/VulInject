static VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = FUN2(VAR5);
    VAR8 *VAR9;
    int32_t VAR10 = 0;
    int VAR11 = FUN3(FUN4(VAR3->VAR12));
    if (!(VAR7->VAR13 & VAR14))
    {
        return VAR10;
    }
    if (VAR3->VAR15.VAR9)
    {
        FUN5(VAR3->VAR12, 0);
        return VAR10;
    }
    for (;;)
    {
        ssize_t VAR16;
        unsigned int VAR17;
        struct iovec VAR18[VAR19], VAR20[VAR19 + 1], *VAR21;
        struct virtio_net_hdr_mrg_rxbuf VAR22;
        VAR9 = FUN6(VAR3->VAR12, sizeof(VAR8));
        if (!VAR9)
        {
            break;
        }
        VAR17 = VAR9->VAR17;
        VAR21 = VAR9->VAR21;
        if (VAR17 < 1)
        {
            FUN7("");
            FUN8(1);
        }
        if (VAR5->VAR23)
        {
            if (FUN9(VAR21, VAR17, 0, &VAR22, VAR5->VAR24) < VAR5->VAR24)
            {
                FUN7("");
                FUN8(1);
            }
            if (FUN10(VAR7))
            {
                FUN11(VAR7, (void *)&VAR22);
                VAR20[0].VAR25 = &VAR22;
                VAR20[0].VAR26 = VAR5->VAR24;
                VAR17 = FUN12(&VAR20[1], FUN13(VAR20) - 1, VAR21, VAR17, VAR5->VAR24, -1);
                if (VAR17 == VAR19)
                {
                    goto VAR27;
                }
                VAR17 += 1;
                VAR21 = VAR20;
            }
        }
        assert(VAR5->VAR28 <= VAR5->VAR24);
        if (VAR5->VAR28 != VAR5->VAR24)
        {
            unsigned VAR29 = FUN12(VAR18, FUN13(VAR18), VAR21, VAR17, 0, VAR5->VAR28);
            VAR29 += FUN12(VAR18 + VAR29, FUN13(VAR18) - VAR29, VAR21, VAR17, VAR5->VAR24, -1);
            VAR17 = VAR29;
            VAR21 = VAR18;
        }
        VAR16 = FUN14(FUN15(VAR5->VAR30, VAR11), VAR21, VAR17, VAR31);
        if (VAR16 == 0)
        {
            FUN5(VAR3->VAR12, 0);
            VAR3->VAR15.VAR9 = VAR9;
            return -VAR32;
        }
    VAR27:
        FUN16(VAR3->VAR12, VAR9, 0);
        FUN17(VAR7, VAR3->VAR12);
        FUN18(VAR9);
        if (++VAR10 >= VAR5->VAR33)
        {
            break;
        }
    }
    return VAR10;
}
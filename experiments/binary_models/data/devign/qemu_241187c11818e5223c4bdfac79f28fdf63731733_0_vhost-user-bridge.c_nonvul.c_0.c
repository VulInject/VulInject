FUN1(int VAR1, void *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = &VAR4->VAR7;
    VAR8 *VAR9 = FUN2(VAR6, 0);
    VAR10 *VAR11 = NULL;
    struct iovec VAR12[VAR13];
    struct virtio_net_hdr_mrg_rxbuf VAR14;
    unsigned VAR15 = 0;
    int VAR16 = VAR4->VAR16;
    int VAR17 = 0;
    struct virtio_net_hdr VAR18 = {.VAR19 = 0, .VAR20 = VAR21};
    FUN3("");
    FUN3("", VAR16);
    if (!FUN4(VAR6, VAR9) || !FUN5(VAR6, VAR9) || !FUN6(VAR6, VAR9, VAR16, 0))
    {
        FUN3("");
        return;
    }
    while (1)
    {
        struct VAR22 *VAR23;
        ssize_t VAR24, VAR25 = 0;
        unsigned int VAR26;
        VAR11 = FUN7(VAR6, VAR9, sizeof(VAR10));
        if (!VAR11)
        {
            break;
        }
        if (VAR11->VAR27 < 1)
        {
            fprintf(VAR28, "");
            break;
        }
        VAR23 = VAR11->VAR29;
        VAR26 = VAR11->VAR27;
        if (VAR17 == 0)
        {
            if (VAR16 == 12)
            {
                VAR15 = FUN8(VAR12, FUN9(VAR12), VAR23, VAR11->VAR27, FUN10(FUN11(VAR14), VAR30), sizeof(VAR14.VAR30));
            }
            FUN12(VAR23, VAR11->VAR27, 0, &VAR18, sizeof VAR18);
            VAR25 += VAR16;
            VAR24 = FUN13(&VAR23, &VAR26, VAR16);
            assert(VAR24 == VAR16);
        }
        struct msghdr VAR31 = {
            .VAR32 = (struct VAR33 *)&VAR4->VAR34,
            .VAR35 = sizeof(struct VAR36),
            .VAR37 = VAR23,
            .VAR38 = VAR11->VAR27,
            .VAR39 = VAR40,
        };
        do
        {
            VAR24 = FUN14(VAR4->VAR41, &VAR31, 0);
        } while (VAR24 == -1 && (VAR42 == VAR43));
        if (VAR17 == 0)
        {
            FUN15(VAR11->VAR29, VAR23, VAR16);
        }
        if (VAR24 == -1)
        {
            if (VAR42 == VAR44)
            {
                FUN16(VAR6, VAR9, 1);
                break;
            }
            FUN17("");
        }
        VAR25 += VAR24;
        FUN18(VAR11->VAR29, VAR11->VAR27, VAR25);
        FUN19(VAR6, VAR9, VAR11, VAR25, VAR17++);
        free(VAR11);
        VAR11 = NULL;
        break;
    }
    if (VAR15)
    {
        VAR14.VAR30 = VAR17;
        FUN12(VAR12, VAR15, 0, &VAR14.VAR30, sizeof VAR14.VAR30);
    }
    FUN20(VAR6, VAR9, VAR17);
    FUN21(VAR6, VAR9);
    free(VAR11);
}
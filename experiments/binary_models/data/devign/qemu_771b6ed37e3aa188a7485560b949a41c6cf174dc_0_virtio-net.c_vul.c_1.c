static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct virtio_net_ctrl_hdr VAR7;
    virtio_net_ctrl_ack VAR8 = VAR9;
    VirtQueueElement VAR10;
    size_t VAR11;
    struct VAR12 *VAR13;
    unsigned int VAR14;
    while (FUN3(VAR4, &VAR10))
    {
        if (FUN4(VAR10.VAR15, VAR10.VAR16) < sizeof(VAR8) || FUN4(VAR10.VAR17, VAR10.VAR18) < sizeof(VAR7))
        {
            FUN5("");
            FUN6(1);
        }
        VAR13 = VAR10.VAR17;
        VAR14 = VAR10.VAR18;
        VAR11 = FUN7(VAR13, VAR14, 0, &VAR7, sizeof(VAR7));
        FUN8(&VAR13, &VAR14, sizeof(VAR7));
        if (VAR11 != sizeof(VAR7))
        {
            VAR8 = VAR9;
        }
        else if (VAR7.class == VAR19)
        {
            VAR8 = FUN9(VAR6, VAR7.VAR20, VAR13, VAR14);
        }
        else if (VAR7.class == VAR21)
        {
            VAR8 = FUN10(VAR6, VAR7.VAR20, VAR13, VAR14);
        }
        else if (VAR7.class == VAR22)
        {
            VAR8 = FUN11(VAR6, VAR7.VAR20, VAR13, VAR14);
        }
        else if (VAR7.class == VAR23)
        {
            VAR8 = FUN12(VAR6, VAR7.VAR20, VAR13, VAR14);
        }
        else if (VAR7.class == VAR24)
        {
            VAR8 = FUN13(VAR6, VAR7.VAR20, VAR13, VAR14);
        }
        else if (VAR7.class == VAR25)
        {
            VAR8 = FUN14(VAR6, VAR7.VAR20, VAR13, VAR14);
        }
        VAR11 = FUN15(VAR10.VAR15, VAR10.VAR16, 0, &VAR8, sizeof(VAR8));
        assert(VAR11 == sizeof(VAR8));
        FUN16(VAR4, &VAR10, sizeof(VAR8));
        FUN17(VAR2, VAR4);
    }
}
static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct virtio_net_ctrl_hdr VAR7;
    virtio_net_ctrl_ack VAR8 = VAR9;
    VAR10 *VAR11;
    size_t VAR12;
    struct VAR13 *VAR14, *VAR15;
    unsigned int VAR16;
    for (;;)
    {
        VAR11 = FUN3(VAR4, sizeof(VAR10));
        if (!VAR11)
        {
            break;
        }
        if (FUN4(VAR11->VAR17, VAR11->VAR18) < sizeof(VAR8) || FUN4(VAR11->VAR19, VAR11->VAR20) < sizeof(VAR7))
        {
            FUN5("");
            FUN6(1);
        }
        VAR16 = VAR11->VAR20;
        VAR15 = VAR14 = FUN7(VAR11->VAR19, sizeof(struct VAR13) * VAR11->VAR20);
        VAR12 = FUN8(VAR14, VAR16, 0, &VAR7, sizeof(VAR7));
        FUN9(&VAR14, &VAR16, sizeof(VAR7));
        if (VAR12 != sizeof(VAR7))
        {
            VAR8 = VAR9;
        }
        else if (VAR7.class == VAR21)
        {
            VAR8 = FUN10(VAR6, VAR7.VAR22, VAR14, VAR16);
        }
        else if (VAR7.class == VAR23)
        {
            VAR8 = FUN11(VAR6, VAR7.VAR22, VAR14, VAR16);
        }
        else if (VAR7.class == VAR24)
        {
            VAR8 = FUN12(VAR6, VAR7.VAR22, VAR14, VAR16);
        }
        else if (VAR7.class == VAR25)
        {
            VAR8 = FUN13(VAR6, VAR7.VAR22, VAR14, VAR16);
        }
        else if (VAR7.class == VAR26)
        {
            VAR8 = FUN14(VAR6, VAR7.VAR22, VAR14, VAR16);
        }
        else if (VAR7.class == VAR27)
        {
            VAR8 = FUN15(VAR6, VAR7.VAR22, VAR14, VAR16);
        }
        VAR12 = FUN16(VAR11->VAR17, VAR11->VAR18, 0, &VAR8, sizeof(VAR8));
        assert(VAR12 == sizeof(VAR8));
        FUN17(VAR4, VAR11, sizeof(VAR8));
        FUN18(VAR2, VAR4);
        FUN19(VAR15);
        FUN19(VAR11);
    }
}
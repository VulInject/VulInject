static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, unsigned VAR7)
{
    hwaddr VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12 = VAR7 - VAR2->VAR13;
    struct vhost_vring_file VAR14 = {.VAR15 = VAR12};
    struct vhost_vring_state VAR16 = {.VAR15 = VAR12};
    struct VAR17 *VAR18 = FUN2(VAR4, VAR7);
    assert(VAR7 >= VAR2->VAR13 && VAR7 < VAR2->VAR13 + VAR2->VAR19);
    VAR6->VAR20 = VAR16.VAR20 = FUN3(VAR4, VAR7);
    VAR11 = VAR2->VAR21->FUN4(VAR2, VAR22, &VAR16);
    if (VAR11)
    {
        return -VAR23;
    }
    VAR16.VAR20 = FUN5(VAR4, VAR7);
    VAR11 = VAR2->VAR21->FUN4(VAR2, VAR24, &VAR16);
    if (VAR11)
    {
        return -VAR23;
    }
    if (!FUN6(VAR4, VAR25) && FUN7(VAR4))
    {
        VAR11 = FUN8(VAR2, FUN9(VAR4), VAR12);
        if (VAR11)
        {
            return -VAR23;
        }
    }
    VAR8 = VAR9 = FUN10(VAR4, VAR7);
    VAR10 = FUN11(VAR4, VAR7);
    VAR6->VAR26 = FUN12(VAR10, &VAR9, 0);
    if (!VAR6->VAR26 || VAR9 != VAR8)
    {
        VAR11 = -VAR27;
        goto VAR28;
    }
    VAR8 = VAR9 = FUN13(VAR4, VAR7);
    VAR10 = FUN14(VAR4, VAR7);
    VAR6->VAR29 = FUN12(VAR10, &VAR9, 0);
    if (!VAR6->VAR29 || VAR9 != VAR8)
    {
        VAR11 = -VAR27;
        goto VAR30;
    }
    VAR6->VAR31 = VAR8 = VAR9 = FUN15(VAR4, VAR7);
    VAR6->VAR32 = VAR10 = FUN16(VAR4, VAR7);
    VAR6->VAR33 = FUN12(VAR10, &VAR9, 1);
    if (!VAR6->VAR33 || VAR9 != VAR8)
    {
        VAR11 = -VAR27;
        goto VAR34;
    }
    VAR6->VAR35 = VAR8 = VAR9 = FUN17(VAR4, VAR7);
    VAR6->VAR36 = VAR10 = FUN18(VAR4, VAR7);
    VAR6->VAR37 = FUN12(VAR10, &VAR9, 1);
    if (!VAR6->VAR37 || VAR9 != VAR8)
    {
        VAR11 = -VAR27;
        goto VAR38;
    }
    VAR11 = FUN19(VAR2, VAR6, VAR12, VAR2->VAR39);
    if (VAR11 < 0)
    {
        VAR11 = -VAR23;
        goto VAR40;
    }
    VAR14.VAR41 = FUN20(FUN21(VAR18));
    VAR11 = VAR2->VAR21->FUN4(VAR2, VAR42, &VAR14);
    if (VAR11)
    {
        VAR11 = -VAR23;
        goto VAR43;
    }
    FUN22(&VAR6->VAR44);
    return 0;
VAR43:
VAR40:
    FUN23(VAR6->VAR37, FUN17(VAR4, VAR7), 0, 0);
VAR38:
    FUN23(VAR6->VAR33, FUN15(VAR4, VAR7), 0, 0);
VAR34:
    FUN23(VAR6->VAR29, FUN13(VAR4, VAR7), 0, 0);
VAR30:
    FUN23(VAR6->VAR26, FUN10(VAR4, VAR7), 0, 0);
VAR28:
    return VAR11;
}
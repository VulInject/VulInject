static VAR1 *FUN1(VAR2 *VAR3, struct vfio_irq_info VAR4)
{
    int VAR5;
    VAR6 *VAR7 = FUN2(VAR3, VAR6, VAR3);
    VAR8 *VAR9 = FUN3(VAR7);
    VAR1 *VAR10;
    VAR10 = FUN4(sizeof(*VAR10));
    VAR10->VAR7 = VAR7;
    VAR10->VAR11 = VAR4.VAR12;
    VAR10->VAR13 = VAR4.VAR13;
    VAR10->VAR14 = VAR15;
    VAR10->VAR16 = false;
    FUN5(VAR9, &VAR10->VAR17);
    VAR10->VAR18 = FUN4(sizeof(VAR19));
    VAR5 = FUN6(VAR10->VAR18, 0);
    if (VAR5)
    {
        FUN7(VAR10->VAR18);
        FUN7(VAR10);
        FUN8("");
        return NULL;
    }
    VAR10->VAR20 = FUN4(sizeof(VAR19));
    VAR5 = FUN6(VAR10->VAR20, 0);
    if (VAR5)
    {
        FUN7(VAR10->VAR18);
        FUN7(VAR10->VAR20);
        FUN7(VAR10);
        FUN8("");
        return NULL;
    }
    FUN9(&VAR7->VAR21, VAR10, VAR22);
    return VAR10;
}
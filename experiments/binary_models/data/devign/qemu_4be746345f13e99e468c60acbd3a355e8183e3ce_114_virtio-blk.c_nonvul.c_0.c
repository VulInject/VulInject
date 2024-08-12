static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8.VAR8;
    struct virtio_blk_config VAR9;
    uint64_t VAR10;
    int VAR11 = VAR8->VAR12;
    FUN3(VAR6->VAR13, &VAR10);
    memset(&VAR9, 0, sizeof(VAR9));
    FUN4(VAR2, &VAR9.VAR10, VAR10);
    FUN5(VAR2, &VAR9.VAR14, 128 - 2);
    FUN6(VAR2, &VAR9.VAR15, VAR8->VAR16);
    FUN5(VAR2, &VAR9.VAR11, VAR11);
    FUN6(VAR2, &VAR9.VAR17, VAR8->VAR17 / VAR11);
    FUN6(VAR2, &VAR9.VAR18, VAR8->VAR18 / VAR11);
    VAR9.VAR19 = VAR8->VAR19;
    if (FUN7(VAR6->VAR13) / VAR8->VAR19 / VAR8->VAR20 % VAR11)
    {
        VAR9.VAR21 = VAR8->VAR20 & ~VAR6->VAR22;
    }
    else
    {
        VAR9.VAR21 = VAR8->VAR20;
    }
    VAR9.VAR23 = 0;
    VAR9.VAR24 = FUN8(VAR8);
    VAR9.VAR25 = 0;
    VAR9.VAR26 = FUN9(VAR6->VAR13);
    memcpy(VAR4, &VAR9, sizeof(struct VAR27));
}
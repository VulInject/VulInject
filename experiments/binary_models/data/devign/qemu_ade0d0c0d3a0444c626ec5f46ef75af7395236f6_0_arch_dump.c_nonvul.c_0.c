int FUN1(WriteCoreDumpFunction VAR1, VAR2 *VAR3, int VAR4, void *VAR5)
{
    struct arm_note VAR6;
    VAR7 *VAR8 = &FUN2(VAR3)->VAR8;
    VAR9 *VAR10 = VAR5;
    int VAR11, VAR12, VAR13 = !!FUN3(VAR8, VAR14);
    FUN4(&VAR6, VAR10, "", 5, VAR15, sizeof(VAR6.VAR16));
    VAR6.VAR16.VAR17 = FUN5(VAR10, VAR4);
    VAR6.VAR16.VAR18 = FUN5(VAR10, VAR13);
    for (VAR12 = 0; VAR12 < 16; ++VAR12)
    {
        VAR6.VAR16.VAR19.VAR20[VAR12] = FUN5(VAR10, VAR8->VAR20[VAR12]);
    }
    VAR6.VAR16.VAR19.VAR20[16] = FUN5(VAR10, FUN6(VAR8));
    VAR11 = FUN7(&VAR6, VAR21, VAR10);
    if (VAR11 < 0)
    {
        return -1;
    }
    else if (VAR13)
    {
        return FUN8(VAR1, VAR8, VAR4, VAR10);
    }
    return 0;
}
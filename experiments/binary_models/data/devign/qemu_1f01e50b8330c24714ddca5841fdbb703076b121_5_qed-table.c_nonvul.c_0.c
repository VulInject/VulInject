static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5)
{
    QEMUIOVector VAR6;
    int VAR7;
    int VAR8, VAR9;
    struct iovec VAR10 = {
        .VAR11 = VAR5->VAR12,
        .VAR13 = VAR2->VAR14.VAR15 * VAR2->VAR14.VAR16,
    };
    FUN2(&VAR6, &VAR10, 1);
    FUN3(VAR2, VAR3, VAR5);
    if (FUN4())
    {
        FUN5(&VAR2->VAR17);
    }
    VAR9 = FUN6(VAR2->VAR18->VAR19, VAR3, &VAR6);
    if (FUN4())
    {
        FUN7(&VAR2->VAR17);
    }
    if (VAR9 < 0)
    {
        goto VAR20;
    }
    VAR7 = VAR6.VAR21 / sizeof(VAR22);
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        VAR5->VAR12[VAR8] = FUN8(VAR5->VAR12[VAR8]);
    }
    VAR9 = 0;
VAR20:
    FUN9(VAR2, VAR5, VAR9);
    return VAR9;
}
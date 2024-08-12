FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    void *VAR8 = NULL;
    VAR9 *VAR10;
    QEMUIOVector VAR11;
    int VAR12;
    if (VAR2->VAR13 && VAR3 == 0)
    {
        FUN2(VAR14 != 512);
        FUN2(VAR15 != 512);
        if (VAR4 == 0)
        {
            return 0;
        }
        VAR8 = FUN3(VAR2->VAR16->VAR2, 512);
        if (!VAR8)
        {
            VAR12 = -VAR17;
            goto VAR18;
        }
        VAR12 = FUN4(VAR6, 0, VAR8, 512);
        if (VAR12 != 512)
        {
            VAR12 = -VAR19;
            goto VAR18;
        }
        VAR10 = FUN5(VAR8, 512, NULL);
        if (VAR10 != VAR2->VAR10)
        {
            VAR12 = -VAR20;
            goto VAR18;
        }
        FUN6(&VAR11, VAR6->VAR21 + 1);
        FUN7(&VAR11, VAR8, 512);
        FUN8(&VAR11, VAR6, 512, VAR6->VAR22 - 512);
        VAR6 = &VAR11;
    }
    FUN9(VAR2->VAR16, VAR23);
    VAR12 = FUN10(VAR2->VAR16, VAR3 * VAR15, VAR4 * VAR15, VAR6, VAR7);
VAR18:
    if (VAR6 == &VAR11)
    {
        FUN11(&VAR11);
    }
    FUN12(VAR8);
    return VAR12;
}
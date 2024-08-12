void FUN1(VAR1 *VAR2, VAR1 *VAR3, int64_t VAR4, MirrorSyncMode VAR5, BlockdevOnError VAR6, BlockdevOnError VAR7, VAR8 *VAR9, void *VAR10, VAR11 **VAR12)
{
    int64_t VAR13;
    assert(VAR2);
    assert(VAR3);
    assert(VAR9);
    if ((VAR6 == VAR14 || VAR6 == VAR15) && !FUN2(VAR2))
    {
        FUN3(VAR12, VAR16, "");
        return;
    }
    VAR13 = FUN4(VAR2);
    if (VAR13 < 0)
    {
        FUN5(VAR12, -VAR13, "", FUN6(VAR2));
        return;
    }
    VAR17 *VAR18 = FUN7(&VAR19, VAR2, VAR4, VAR9, VAR10, VAR12);
    if (!VAR18)
    {
        return;
    }
    VAR18->VAR6 = VAR6;
    VAR18->VAR7 = VAR7;
    VAR18->VAR3 = VAR3;
    VAR18->VAR5 = VAR5;
    VAR18->VAR20.VAR13 = VAR13;
    VAR18->VAR20.VAR21 = FUN8(VAR22);
    FUN9(VAR18->VAR20.VAR21, VAR18);
}
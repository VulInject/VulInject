static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    QEMUIOVector VAR8;
    uint64_t VAR9;
    size_t VAR10;
    int VAR11;
    VAR12 *VAR13 = &VAR2->VAR14.VAR15;
    assert(FUN2(&VAR2->VAR14));
    if (VAR13->VAR16 < sizeof(VAR9))
    {
        FUN3(VAR7, ""
                         "");
        return -VAR17;
    }
    if (FUN4(VAR2->VAR18, &VAR9, sizeof(VAR9), VAR7) < 0)
    {
        return -VAR19;
    }
    FUN5(&VAR9);
    VAR10 = VAR13->VAR16 - sizeof(VAR9);
    if (VAR9 < VAR3 || VAR10 > VAR5->VAR20 || VAR9 > VAR3 + VAR5->VAR20 - VAR10)
    {
        FUN3(VAR7, ""
                         "");
        return -VAR17;
    }
    FUN6(&VAR8, VAR5->VAR21);
    FUN7(&VAR8, VAR5, VAR9 - VAR3, VAR10);
    VAR11 = FUN8(VAR2->VAR18, VAR8.VAR22, VAR8.VAR21, VAR7);
    FUN9(&VAR8);
    return VAR11 < 0 ? -VAR19 : 0;
}
static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    bool VAR14 = !!(VAR5 & VAR15);
    VAR12 = FUN2(VAR2, VAR3, &VAR10, &VAR11);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR4 = FUN3(VAR4, VAR7->VAR16 - VAR11);
    assert(VAR4 <= VAR17);
    for (VAR13 = 0; VAR13 < VAR4; VAR13++)
    {
        uint64_t VAR18;
        QCow2ClusterType VAR19;
        VAR18 = FUN4(VAR10[VAR11 + VAR13]);
        VAR19 = FUN5(VAR18);
        if (VAR19 == VAR20 || (VAR19 == VAR21 && !VAR14))
        {
            continue;
        }
        FUN6(VAR2, VAR7->VAR22, VAR10);
        if (VAR19 == VAR23 || VAR14)
        {
            VAR10[VAR11 + VAR13] = FUN7(VAR24);
            FUN8(VAR2, VAR18, 1, VAR25);
        }
        else
        {
            VAR10[VAR11 + VAR13] |= FUN7(VAR24);
        }
    }
    FUN9(VAR2, VAR7->VAR22, (void **)&VAR10);
    return VAR4;
}
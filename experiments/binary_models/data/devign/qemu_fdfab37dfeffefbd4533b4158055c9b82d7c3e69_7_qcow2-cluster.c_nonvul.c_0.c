static int FUN1(int VAR1, int VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    int VAR6;
    QCow2ClusterType VAR7;
    uint64_t VAR8 = VAR5 | VAR9 | VAR10;
    uint64_t VAR11 = FUN2(VAR4[0]);
    uint64_t VAR12 = VAR11 & VAR8;
    if (!VAR12)
    {
        return 0;
    }
    VAR7 = FUN3(VAR11);
    assert(VAR7 == VAR13 || VAR7 == VAR14);
    for (VAR6 = 0; VAR6 < VAR1; VAR6++)
    {
        uint64_t VAR15 = FUN2(VAR4[VAR6]) & VAR8;
        if (VAR12 + (VAR3)VAR6 * VAR2 != VAR15)
        {
            break;
        }
    }
    return VAR6;
}
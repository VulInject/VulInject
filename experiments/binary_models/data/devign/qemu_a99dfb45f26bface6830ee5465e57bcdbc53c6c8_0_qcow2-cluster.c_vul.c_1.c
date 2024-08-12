static int FUN1(int VAR1, int VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    int VAR6;
    uint64_t VAR7 = VAR5 | VAR8 | VAR9;
    uint64_t VAR10 = FUN2(VAR4[0]);
    uint64_t VAR11 = VAR10 & VAR7;
    if (!VAR11)
        return 0;
    assert(FUN3(VAR10) != VAR12);
    for (VAR6 = 0; VAR6 < VAR1; VAR6++)
    {
        uint64_t VAR13 = FUN2(VAR4[VAR6]) & VAR7;
        if (VAR11 + (VAR3)VAR6 * VAR2 != VAR13)
        {
            break;
        }
    }
    return VAR6;
}
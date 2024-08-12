static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    CoWriteZeroes VAR10 = {
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR7 = VAR7,
        .VAR5 = VAR5,
        .VAR11 = false,
    };
    if (VAR4 > VAR12)
    {
        return -VAR13;
    }
    VAR9 = FUN2(VAR14, &VAR10);
    FUN3(VAR9);
    while (!VAR10.VAR11)
    {
        FUN4(FUN5(VAR2), true);
    }
    if (VAR10.VAR15 < 0)
    {
        return VAR10.VAR15;
    }
    else
    {
        return 1;
    }
}
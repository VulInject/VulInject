int FUN1(int VAR1, int64_t VAR2, int64_t VAR3, bool VAR4)
{
    int VAR5;
    struct flock VAR6 = {
        .VAR7 = VAR8,
        .VAR9 = VAR2,
        .VAR10 = VAR3,
        .VAR11 = VAR4 ? VAR12 : VAR13,
    };
    FUN2();
    VAR5 = FUN3(VAR1, VAR14, &VAR6);
    if (VAR5 == -1)
    {
        return -VAR15;
    }
    else
    {
        return VAR6.VAR11 == VAR16 ? 0 : -VAR17;
    }
}
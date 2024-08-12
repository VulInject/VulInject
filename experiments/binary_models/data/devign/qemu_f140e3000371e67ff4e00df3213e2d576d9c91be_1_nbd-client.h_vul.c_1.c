int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    NBDRequest VAR8 = {
        .VAR9 = VAR10,
        .VAR11 = VAR3,
        .VAR12 = VAR4,
    };
    assert(VAR4 <= VAR13);
    assert(!VAR7);
    return FUN2(VAR2, &VAR8, VAR6);
}
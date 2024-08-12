static void FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, int VAR5, bool VAR6)
{
    uint64_t VAR7;
    VAR7 = VAR3 | (VAR5 == VAR8 ? VAR9 : VAR10) | 4 | VAR4 >> 46;
    FUN2("" VAR11 "", VAR12, VAR7);
    if (!VAR6)
    {
        return;
    }
    FUN3(VAR2, VAR13, VAR14, VAR7);
}
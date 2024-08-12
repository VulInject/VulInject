static void FUN1(VAR1 *VAR2, target_ulong VAR3, uint32_t VAR4, uint64_t VAR5, int VAR6, bool VAR7)
{
    int VAR8 = VAR9;
    uint64_t VAR10;
    VAR10 = VAR3 | (VAR6 == VAR11 ? VAR12 : VAR13) | VAR5 >> 46;
    FUN2("" VAR14 "", VAR15, VAR10);
    if (!VAR7)
    {
        return;
    }
    if (VAR6 == VAR16)
    {
        VAR8 = 2;
    }
    FUN3(VAR2, VAR4, VAR8, VAR10);
}
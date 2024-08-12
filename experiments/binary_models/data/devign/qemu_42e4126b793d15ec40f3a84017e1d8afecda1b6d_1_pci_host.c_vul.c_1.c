VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3, VAR4);
    uint32_t VAR8 = VAR4 & (VAR9 - 1);
    uint32_t VAR10;
    assert(VAR5 == 1 || VAR5 == 2 || VAR5 == 4);
    if (!VAR7)
    {
        return ~0x0;
    }
    VAR10 = VAR7->FUN3(VAR7, VAR8, VAR5);
    FUN4("" VAR11 "" VAR11 "", VAR12, VAR7->VAR13, VAR8, VAR10, VAR5);
    return VAR10;
}
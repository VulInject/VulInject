void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR3);
    uint32_t VAR8 = VAR3 & (VAR9 - 1);
    if (!VAR7)
        return;
    FUN3("" VAR10 "" VAR10 "", VAR11, VAR7->VAR12, VAR8, VAR4, VAR5);
    VAR7->FUN4(VAR7, VAR8, VAR4, VAR5);
}
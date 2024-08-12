void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    uint64_t VAR4 = VAR3 & ~VAR2->VAR5;
    uint64_t VAR6 = VAR3 & VAR2->VAR5;
    int64_t VAR7 = FUN2(VAR8) - FUN3(VAR4, VAR2->VAR9);
    FUN4("", VAR2->VAR10, VAR4, VAR2->VAR11 ? "" : "", VAR2);
    VAR2->VAR11 = VAR6 ? 1 : 0;
    VAR2->VAR12 = VAR7;
}
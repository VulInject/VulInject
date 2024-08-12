static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    uint32_t VAR8 = FUN2(VAR5->VAR8);
    uint64_t VAR9 = FUN3(VAR5->VAR9);
    uint64_t VAR10 = FUN3(VAR5->VAR10);
    if (VAR8 == 0 || VAR8 > VAR3->VAR11)
    {
        return VAR12 | VAR13;
    }
    VAR7 = &VAR3->VAR14[VAR8 - 1];
    return FUN4(VAR3, (VAR15 *)&VAR7->VAR16, sizeof(VAR7->VAR16), VAR9, VAR10);
}
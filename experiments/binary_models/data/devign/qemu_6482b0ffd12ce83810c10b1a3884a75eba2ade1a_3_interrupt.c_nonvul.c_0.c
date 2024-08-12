void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    if (VAR7->VAR8 == VAR9 - 1)
    {
        return;
    }
    VAR7->VAR8++;
    assert(VAR7->VAR8 < VAR9);
    VAR7->VAR10[VAR7->VAR8].VAR3 = VAR3;
    VAR7->VAR10[VAR7->VAR8].VAR4 = VAR4;
    VAR7->VAR10[VAR7->VAR8].VAR5 = VAR5;
    VAR7->VAR11 |= VAR12;
    FUN2(FUN3(VAR2), VAR13);
}
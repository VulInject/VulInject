FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR5, VAR2, VAR2)->VAR6;
    uint32_t VAR7 = VAR4->VAR8[VAR9];
    if (VAR2->VAR10)
        VAR4->VAR8[VAR9] &= ~VAR11;
    else
        VAR4->VAR8[VAR9] |= VAR11;
    if (VAR4->VAR8[VAR9] != VAR7)
        FUN3(VAR4, 0, VAR12);
}
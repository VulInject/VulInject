static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR4 |= (1 << VAR7);
    VAR4 |= (1 << VAR8);
    VAR4 |= (1 << VAR9);
    VAR4 |= (1 << VAR10);
    VAR4 |= (1 << VAR11);
    if (FUN3(VAR6->VAR12))
        VAR4 |= (1 << VAR13);
    if (FUN4(VAR6->VAR12))
        VAR4 |= 1 << VAR14;
    return VAR4;
}
static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR4);
    uint32_t VAR8 = FUN3(VAR4);
    if (VAR5)
        *VAR7 |= ~VAR8;
    else
        *VAR7 &= ~VAR8;
}
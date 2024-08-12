static void FUN1(uint32_t VAR1, void *VAR2)
{
    VAR3 *VAR4 = VAR2;
    FUN2(&VAR4->VAR5.VAR6, VAR1 == VAR7, VAR1 == VAR8);
    if (VAR1 == VAR7 || VAR1 == VAR8)
    {
        return;
    }
    if (VAR4->VAR5.VAR9 & VAR10)
    {
        FUN3(VAR11, VAR12);
    }
}
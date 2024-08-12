static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    int VAR4 = FUN2(VAR5, VAR6);
    uint32_t VAR7 = VAR3->VAR8[VAR9] & VAR10;
    if (VAR7 == VAR11 || VAR7 == VAR12)
    {
        VAR4 = FUN3(VAR4, VAR5 - VAR3->VAR13);
    }
    if (VAR7 == VAR14 || VAR7 == VAR12)
    {
        VAR4 = FUN3(VAR4, VAR6 - VAR3->VAR15);
    }
    return VAR4;
}
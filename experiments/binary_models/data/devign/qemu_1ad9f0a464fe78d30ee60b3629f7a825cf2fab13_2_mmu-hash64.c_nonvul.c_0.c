VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    uint64_t VAR5 = 0;
    hwaddr VAR6;
    VAR6 = VAR4 * VAR7;
    if (VAR3->VAR8.VAR9 == VAR10)
    {
        VAR11 *VAR12 = FUN2(VAR13);
        FUN3(VAR12, VAR4, VAR14);
        VAR5 = (VAR1)(VAR15)VAR12;
    }
    else if (VAR3->VAR8.VAR9)
    {
        VAR5 = (VAR1)(VAR15)VAR3->VAR8.VAR9 + VAR6;
    }
    else if (VAR3->VAR8.VAR16)
    {
        VAR5 = VAR3->VAR8.VAR16 + VAR6;
    }
    return VAR5;
}
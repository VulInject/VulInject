void FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5, uintptr_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    int VAR11 = 0;
    int VAR12;
    VAR10->VAR13 = VAR3;
    if (VAR4 == VAR14)
    {
        VAR12 = VAR15;
    }
    else
    {
        VAR12 = VAR16;
        if (VAR4 == VAR17)
        {
            VAR11 |= VAR18;
        }
    }
    FUN3(VAR10, VAR12, VAR11, VAR6);
}
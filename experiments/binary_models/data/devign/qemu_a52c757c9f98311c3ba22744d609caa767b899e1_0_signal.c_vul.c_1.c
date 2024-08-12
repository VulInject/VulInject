FUN1(struct VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    unsigned long VAR6;
    VAR6 = VAR4->VAR7[VAR8];
    if (VAR2->VAR9.VAR10 & VAR11)
    {
        if (FUN2(VAR6) == 0)
            VAR6 = VAR12->VAR13 + VAR12->VAR14;
    }
    else if ((VAR7->VAR15 & 0xffff) != VAR16 && !(VAR2->VAR9.VAR10 & VAR17) && VAR2->VAR9.VAR18)
    {
        VAR6 = (unsigned long)VAR2->VAR9.VAR18;
    }
    return (void *)((VAR6 - VAR5) & -8ul);
}
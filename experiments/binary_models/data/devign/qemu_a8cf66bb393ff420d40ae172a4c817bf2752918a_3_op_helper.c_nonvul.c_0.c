static void FUN1(uint32_t VAR1)
{
    unsigned int VAR2, VAR3, VAR4;
    VAR2 = VAR5->VAR6;
    VAR4 = VAR5->VAR7 | VAR8;
    if (VAR2)
    {
        VAR3 = VAR1 & VAR9;
        VAR4 = VAR4 & ~VAR3;
    }
    VAR1 &= VAR4;
    VAR5->VAR10[VAR11] &= ~VAR4;
    VAR5->VAR10[VAR11] |= VAR1;
}
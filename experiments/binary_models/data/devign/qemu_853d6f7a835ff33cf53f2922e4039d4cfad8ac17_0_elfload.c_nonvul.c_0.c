static void FUN1(unsigned long VAR1)
{
    unsigned long VAR2;
    char *VAR3;
    if (VAR4 < VAR5)
    {
        unsigned long VAR6, VAR7;
        VAR7 = (VAR1 + VAR4 - 1) & ~(VAR4 - 1);
        VAR6 = FUN2(VAR1);
        if (VAR7 < VAR6)
        {
            FUN3((void *)VAR7, VAR6 - VAR7, VAR8 | VAR9 | VAR10, VAR11 | VAR12 | VAR13, -1, 0);
        }
    }
    VAR2 = VAR1 & (VAR5 - 1);
    if (VAR2)
    {
        VAR2 = VAR5 - VAR2;
        VAR3 = (char *)VAR1;
        do
        {
            *VAR3++ = 0;
        } while (--VAR2);
    }
}
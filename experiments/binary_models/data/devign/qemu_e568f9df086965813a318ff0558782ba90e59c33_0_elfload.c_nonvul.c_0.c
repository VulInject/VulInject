static int FUN1(unsigned long VAR1, unsigned long VAR2)
{
    unsigned long VAR3, VAR4;
    VAR4 = VAR1 + (0xffff0f00 & VAR5);
    if (VAR4 >= VAR1 && VAR4 < (VAR1 + VAR2))
    {
        return -1;
    }
    VAR3 = (unsigned long)FUN2((void *)VAR4, VAR6, VAR7 | VAR8, VAR9 | VAR10 | VAR9, -1, 0);
    if (VAR3 == -1ul)
    {
        return 0;
    }
    if (VAR3 != VAR4)
    {
        FUN3((void *)VAR3, VAR6);
        return 0;
    }
    FUN4(5, (VAR11 *)FUN5(0xffff0ffcul));
    if (FUN6((void *)VAR4, VAR6, VAR7))
    {
        FUN7("");
        FUN8(-1);
    }
    return 1;
}
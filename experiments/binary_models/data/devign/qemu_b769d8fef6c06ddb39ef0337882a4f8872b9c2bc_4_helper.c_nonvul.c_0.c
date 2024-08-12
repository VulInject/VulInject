void FUN1(unsigned long VAR1, int VAR2, int VAR3, void *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    unsigned long VAR8;
    VAR9 *VAR10;
    VAR10 = VAR11;
    VAR11 = VAR12;
    VAR7 = FUN2(VAR11, VAR1, VAR2, VAR3, 1);
    if (VAR7)
    {
        if (VAR4)
        {
            VAR8 = (unsigned long)VAR4;
            VAR6 = FUN3(VAR8);
            if (VAR6)
            {
                FUN4(VAR6, VAR11, VAR8, NULL);
            }
        }
        FUN5(VAR7, VAR11->VAR13);
    }
    VAR11 = VAR10;
}
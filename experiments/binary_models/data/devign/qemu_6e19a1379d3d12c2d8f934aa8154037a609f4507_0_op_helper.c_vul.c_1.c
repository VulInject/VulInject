void FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8;
    VAR1 *VAR9;
    unsigned long VAR10;
    int VAR11;
    VAR9 = VAR12;
    VAR11 = FUN2(VAR12, VAR3, VAR4, VAR5);
    if (FUN3(VAR11))
    {
        if (VAR6)
        {
            VAR10 = (unsigned long)VAR6;
            VAR8 = FUN4(VAR10);
            if (VAR8)
            {
                FUN5(VAR8, VAR12, VAR10);
            }
        }
        FUN6(VAR12->VAR13);
    }
    VAR12 = VAR9;
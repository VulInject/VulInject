static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR2->VAR7.VAR8 = VAR5;
    VAR2->VAR7.VAR9 = (VAR3 *)VAR4;
    while (VAR2->VAR7.VAR8 > 0)
    {
        VAR6 = FUN2(&VAR2->VAR7, VAR10);
        if (VAR6 != VAR11)
            return -1;
        if (VAR2->VAR7.VAR12 == 0)
        {
            FUN3(&VAR2->VAR13, FUN4('', '', '', ''), VAR2->VAR14, VAR15);
            VAR2->VAR7.VAR12 = VAR15;
            VAR2->VAR7.VAR16 = VAR2->VAR14;
        }
    }
    return 0;
}
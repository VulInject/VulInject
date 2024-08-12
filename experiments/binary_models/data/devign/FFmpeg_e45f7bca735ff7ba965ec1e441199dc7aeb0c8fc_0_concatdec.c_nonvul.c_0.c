static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    if (VAR2->VAR5->VAR6 || !VAR3->VAR5->VAR6)
    {
        if (VAR2->VAR5->VAR7 < VAR3->VAR5->VAR7)
        {
            if (VAR2->VAR5->VAR8)
            {
                FUN2(&VAR2->VAR5->VAR8);
                VAR2->VAR5->VAR7 = 0;
            }
            VAR4 = FUN3(VAR2->VAR5, VAR3->VAR5->VAR7);
            if (VAR4 < 0)
                return VAR4;
        }
        memcpy(VAR2->VAR5->VAR8, VAR3->VAR5->VAR8, VAR3->VAR5->VAR7);
        return 0;
    }
    if ((VAR4 = FUN4(VAR2->VAR5, VAR3->VAR5)) < 0)
        return VAR4;
    VAR2->VAR9 = VAR3->VAR9;
    VAR2->VAR10 = VAR3->VAR10;
    VAR2->VAR11 = VAR3->VAR11;
    FUN5(VAR2, 64, VAR3->VAR12.VAR13, VAR3->VAR12.VAR14);
    FUN6(&VAR2->VAR15, VAR3->VAR15, 0);
    return 0;
}
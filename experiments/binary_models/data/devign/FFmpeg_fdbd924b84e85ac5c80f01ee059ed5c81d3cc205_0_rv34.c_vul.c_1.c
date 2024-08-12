int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6;
    VAR5->VAR7.VAR2 = VAR2;
    if (VAR2->VAR8->VAR9)
    {
        VAR5->VAR10 = NULL;
        if ((VAR3 = FUN2(&VAR5->VAR7)) < 0)
            return VAR3;
        if ((VAR3 = FUN3(VAR5)) < 0)
            return VAR3;
    }
    return 0;
}
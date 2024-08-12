static int FUN1(VAR1 *VAR2, VAR1 *VAR3, enum AVMediaType VAR4, int VAR5)
{
    VAR1 *VAR6, *VAR7, *VAR8;
    if (VAR2 == VAR3)
        return 1;
    VAR6 = FUN2(VAR2);
    VAR7 = FUN2(VAR3);
    if (VAR5)
    {
        VAR8 = FUN3(VAR6, VAR7);
    }
    else
    {
        VAR8 = FUN4(VAR6, VAR7, VAR4);
    }
    if (VAR8)
    {
        FUN5(&VAR8->VAR9);
        FUN5(&VAR8);
        return 1;
    }
    else
    {
        FUN5(&VAR6->VAR9);
        FUN5(&VAR7->VAR9);
        FUN5(&VAR6);
        FUN5(&VAR7);
        return 0;
    }
}
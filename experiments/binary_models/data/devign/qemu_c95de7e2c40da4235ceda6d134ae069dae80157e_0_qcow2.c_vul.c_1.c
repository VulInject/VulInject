static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    FUN2(&VAR4->VAR7);
    VAR6 = FUN3(VAR2, VAR4->VAR8);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR6 = FUN3(VAR2, VAR4->VAR9);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    return FUN4(VAR2->VAR10);
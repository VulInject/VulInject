static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR3 = FUN2(VAR2);
    if (VAR3 < 0)
    {
        return VAR3;
    }
    FUN3(VAR2->VAR4 + VAR5, VAR6);
    FUN3(VAR2->VAR4 + VAR7, VAR8 | VAR9 | VAR10);
    return 0;
}
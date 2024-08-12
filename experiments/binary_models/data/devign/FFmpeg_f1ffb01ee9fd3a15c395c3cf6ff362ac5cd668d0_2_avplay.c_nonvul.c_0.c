static double FUN1(VAR1 *VAR2)
{
    double VAR3;
    int VAR4, VAR5;
    VAR3 = VAR2->VAR6;
    VAR4 = FUN2(VAR2);
    VAR5 = 0;
    if (VAR2->VAR7)
    {
        VAR5 = VAR2->VAR7->VAR8->VAR9 * VAR2->VAR10 * FUN3(VAR2->VAR11);
    }
    if (VAR5)
        VAR3 -= (double)VAR4 / VAR5;
    return VAR3;
}
int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    if (!VAR4->VAR5)
        return FUN2(VAR2, VAR4, VAR5);
    VAR7 = VAR4->VAR5;
    VAR6 = FUN3(VAR4, VAR5);
    if (VAR6 < 0)
        return VAR6;
    VAR6 = FUN4(VAR2, VAR4->VAR8 + VAR7, VAR5);
    FUN5(VAR4, VAR7 + FUN6(VAR6, 0));
    return VAR6;
}
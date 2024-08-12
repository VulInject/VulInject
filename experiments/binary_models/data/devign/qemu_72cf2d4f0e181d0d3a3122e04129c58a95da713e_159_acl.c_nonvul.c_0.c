int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR6 *VAR8;
    int VAR9 = 0;
    if (VAR5 <= 0)
        return -1;
    if (VAR5 >= VAR2->VAR10)
        return FUN2(VAR2, VAR3, VAR4);
    VAR7 = FUN3(sizeof(*VAR7));
    VAR7->VAR4 = FUN4(VAR4);
    VAR7->VAR3 = VAR3;
    FUN5(VAR8, &VAR2->VAR11, VAR12)
    {
        VAR9++;
        if (VAR9 == VAR5)
        {
            FUN6(VAR8, VAR7, VAR12);
            VAR2->VAR10++;
            break;
        }
    }
    return VAR9;
}
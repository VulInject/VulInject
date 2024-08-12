static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    VAR7 = FUN2(VAR4, &VAR2->VAR8);
    VAR6 = FUN2(VAR4, &VAR2->VAR9) + 1;
    if (VAR6 > 2)
    {
        if ((VAR5 + 1) / 2 - 2 <= 0)
        {
            VAR2->VAR10 = 1;
            return 0;
        }
        VAR6 = FUN3(VAR4, (VAR5 + 1) / 2 - 2) + 3;
    }
    if (VAR6 == VAR5)
    {
        VAR2->VAR10 = 1;
        return 0;
    }
    return VAR7 ? VAR5 - VAR6 : VAR6;
}
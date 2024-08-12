int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6 = 0;
    int VAR7;
    FUN2(&VAR2->VAR8);
    while (VAR6 < VAR5)
    {
        do
        {
            VAR7 = VAR2->FUN3(VAR2, VAR4 + VAR6, VAR5 - VAR6);
            if (VAR7 == -1 && VAR9 == VAR10)
            {
                FUN4(100);
            }
        } while (VAR7 == -1 && VAR9 == VAR10);
        if (VAR7 <= 0)
        {
            break;
        }
        VAR6 += VAR7;
    }
    FUN5(&VAR2->VAR8);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    return VAR6;
}
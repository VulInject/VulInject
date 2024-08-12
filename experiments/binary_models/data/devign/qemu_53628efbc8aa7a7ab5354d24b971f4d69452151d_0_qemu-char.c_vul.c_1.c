static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
    size_t VAR6 = 0;
    ssize_t VAR7;
    if (VAR2->VAR8 < 0)
    {
        return;
    }
    while (VAR6 < VAR5)
    {
        do
        {
            VAR7 = write(VAR2->VAR8, VAR4 + VAR6, VAR5 - VAR6);
            if (VAR7 == -1 && VAR9 == VAR10)
            {
                FUN2(100);
            }
        } while (VAR7 == -1 && VAR9 == VAR10);
        if (VAR7 <= 0)
        {
            return;
        }
        VAR6 += VAR7;
    }
}
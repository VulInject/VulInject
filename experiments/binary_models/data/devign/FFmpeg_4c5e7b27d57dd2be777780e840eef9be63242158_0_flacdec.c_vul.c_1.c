static int FUN1(const VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    const VAR1 *VAR6 = VAR2 + VAR3;
    VAR2 += 4;
    do
    {
        FUN2(VAR2, &VAR4, NULL, &VAR5);
        VAR2 += 4;
        if (VAR2 + VAR5 > VAR6)
        {
            return 0;
        }
        VAR2 += VAR5;
    } while (!VAR4);
    return VAR3 - (VAR6 - VAR2);
}
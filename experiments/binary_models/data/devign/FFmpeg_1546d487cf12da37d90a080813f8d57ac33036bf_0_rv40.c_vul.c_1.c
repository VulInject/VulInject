static int FUN1(VAR1 *VAR2, const int *VAR3)
{
    int VAR4 = FUN2(VAR2, 3);
    int VAR5 = VAR3[VAR4];
    if (VAR5 < 0)
        VAR5 = VAR3[FUN3(VAR2) - VAR5];
    if (!VAR5)
    {
        do
        {
            VAR4 = FUN2(VAR2, 8);
            VAR5 += VAR4 << 2;
        } while (VAR4 == 0xFF);
    }
    return VAR5;
static int FUN1(const VAR1 *VAR2, int VAR3, int *VAR4)
{
    bool VAR5;
    int VAR6;
    if (VAR3 <= 0)
    {
        *VAR4 = 0;
        return 0;
    }
    VAR5 = FUN2(VAR2, 512);
    for (VAR6 = 1; VAR6 < VAR3; VAR6++)
    {
        VAR2 += 512;
        if (VAR5 != FUN2(VAR2, 512))
        {
            break;
        }
    }
    *VAR4 = VAR6;
    return !VAR5;
}
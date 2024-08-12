void *FUN1(void *VAR1, int VAR2, int *VAR3, int VAR4)
{
    if (VAR4 >= VAR5 / VAR2)
    {
        FUN2(NULL, VAR6, "");
        FUN3(1);
    }
    if (*VAR3 < VAR4)
    {
        VAR7 *VAR8 = FUN4(VAR1, VAR4 * VAR2);
        if (!VAR8)
        {
            FUN2(NULL, VAR6, "");
            FUN3(1);
        }
        memset(VAR8 + *VAR3 * VAR2, 0, (VAR4 - *VAR3) * VAR2);
        *VAR3 = VAR4;
        return VAR8;
    }
    return VAR1;
}
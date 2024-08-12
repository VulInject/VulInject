static int FUN1(const VAR1 *VAR2, const VAR1 *VAR3, int VAR4)
{
    int VAR5, VAR6 = 0;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        int64_t VAR7 = FUN2(FUN3(VAR2[VAR5], VAR3[VAR5]) << 1);
        VAR6 = FUN2(VAR6 + VAR7);
    }
    return VAR6;
}
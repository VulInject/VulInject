static int FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 *VAR5)
{
    int VAR6;
    ssize_t VAR7;
    size_t VAR8 = 7;
    VAR7 = FUN2(VAR2, VAR8, "", VAR3);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR8 += VAR7;
    for (VAR6 = 0; VAR6 < VAR3; VAR6++)
    {
        VAR7 = FUN2(VAR2, VAR8, "", &VAR5[VAR6]);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR8 += VAR7;
    }
    return VAR8;
}
static int FUN1(VAR1 *VAR2, VAR3 **VAR4, size_t VAR5, VAR3 **VAR6, size_t VAR7, VAR8 **VAR9)
{
    size_t VAR10;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        if (FUN2(VAR2, VAR4[VAR10], "", &VAR2->VAR11, &VAR2->VAR12, &VAR2->VAR13, VAR9) < 0)
        {
            return -1;
        }
    }
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        if (FUN2(VAR2, VAR6[VAR10], "", &VAR2->VAR14, &VAR2->VAR15, &VAR2->VAR16, VAR9) < 0)
        {
            return -1;
        }
    }
    return 0;
}
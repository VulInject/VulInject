static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5)
{
    VAR6 *VAR7 = *(VAR6 **)FUN2(VAR3, VAR5);
    if (!VAR7)
    {
        return 0;
    }
    VAR7 += VAR3->VAR8.VAR9[VAR10];
    return *VAR7;
}
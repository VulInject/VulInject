int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    if (VAR2->VAR7 > 8)
    {
        FUN2(VAR2, VAR8, "");
        return VAR9;
    }
    VAR5 = 1 << VAR2->VAR7;
    if (VAR2->VAR10 < VAR5 * 3)
    {
        FUN2(VAR2, VAR8, "");
        return VAR9;
    }
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        VAR4[VAR6] = 0xFF000000 | FUN3(VAR2->VAR11 + VAR6 * 3);
    }
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6;
    int VAR7 = FUN2(VAR4, VAR5);
    if (VAR7 < 0)
        return VAR7;
    if (!VAR2->VAR8.VAR9 || !VAR2->VAR8.VAR9->VAR10)
        return 0;
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        int VAR11 = (VAR6 > 0) ? VAR2->VAR12 : 0;
        int VAR13 = (VAR6 > 0) ? VAR2->VAR14 : 0;
        int VAR15 = ((VAR2->VAR8.VAR9->VAR16 >> VAR11) << VAR2->VAR17) + (VAR2->VAR8.VAR9->VAR18 >> VAR13) * VAR4->VAR19[VAR6];
        VAR4->VAR20[VAR6] += VAR15;
    }
    return 0;
}
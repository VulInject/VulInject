static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    if (!VAR7->VAR11)
        return 0;
    for (VAR9 = 0; VAR9 < VAR7->VAR12; VAR9++)
    {
        if (VAR7->VAR13[VAR9]->VAR14 == VAR4->VAR15)
        {
            VAR16 *VAR17 = VAR17 = VAR7->VAR13[VAR9];
            for (VAR10 = VAR17->VAR18 - 1; VAR10 >= 0; VAR10--)
            {
                if (VAR17->VAR19[VAR10].VAR20 <= VAR5)
                {
                    if (VAR17->VAR19[VAR10].VAR21)
                        return 0;
                    return FUN2(VAR2, VAR17->VAR19[VAR10].VAR22);
                }
            }
        }
    }
    return 0;
}
static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR4->VAR8[VAR5];
    int VAR9, VAR10, VAR11 = VAR2->VAR12;
    for (VAR10 = 0; VAR10 < VAR4->VAR13; VAR10++)
    {
        int VAR14 = FUN2(VAR2, VAR4, VAR5, VAR10);
        if (VAR14)
        {
            VAR15 *VAR16 = VAR7->VAR17[VAR10];
            if (VAR7->VAR18[VAR10])
            {
                VAR15 *VAR19 = VAR7->VAR20[VAR10];
                int VAR21 = VAR7->VAR22[VAR10];
                for (VAR9 = 0; VAR9 < VAR11; VAR9++)
                    VAR16[VAR9] = VAR16[VAR9] * (1 << VAR14) + (VAR19[VAR9] << VAR21);
            }
            else
            {
                for (VAR9 = 0; VAR9 < VAR11; VAR9++)
                    VAR16[VAR9] = VAR16[VAR9] * (1 << VAR14);
            }
        }
    }
}
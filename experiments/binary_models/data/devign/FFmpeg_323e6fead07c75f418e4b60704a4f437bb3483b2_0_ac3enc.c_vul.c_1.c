static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR5; VAR3++)
    {
        VAR6 *VAR7 = &VAR2->VAR8[VAR3];
        VAR2->VAR9 = VAR2->VAR10 = VAR2->VAR11 = 0;
        VAR2->VAR12 = VAR2->VAR13 = VAR2->VAR14 = NULL;
        for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
        {
            FUN2(VAR2, VAR7->VAR16[VAR4], VAR7->VAR17[VAR4], VAR7->VAR18[VAR4], VAR7->VAR19[VAR4], VAR7->VAR20[VAR4], VAR2->VAR21[VAR4]);
        }
    }
}
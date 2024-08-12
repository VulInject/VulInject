static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8[0], VAR9;
    int VAR10, VAR11;
    for (VAR11 = 0; VAR11 < VAR6->VAR12.VAR13; VAR11 += VAR6->VAR12.VAR14[VAR11])
    {
        for (VAR10 = 0; VAR10 < VAR6->VAR12.VAR15; VAR10++)
        {
            if (!VAR6->VAR16[VAR11 * 16 + VAR10])
            {
                VAR9 = VAR6->VAR8[VAR11 * 16 + VAR10] - VAR7 + VAR17;
                if (VAR9 < 0 || VAR9 > 120)
                    FUN2(VAR2, VAR18, "");
                VAR7 = VAR6->VAR8[VAR11 * 16 + VAR10];
                FUN3(&VAR4->VAR19, VAR20[VAR9], VAR21[VAR9]);
            }
        }
    }
}
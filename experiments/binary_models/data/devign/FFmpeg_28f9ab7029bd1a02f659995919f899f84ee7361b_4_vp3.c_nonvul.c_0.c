static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7;
    int *VAR8 = VAR2->VAR9 + 127;
    int VAR10 = VAR2->VAR11[!!VAR3];
    int VAR12 = VAR2->VAR13[!!VAR3];
    int VAR14 = VAR2->VAR15[VAR3] + VAR4 * VAR10;
    int VAR16 = VAR2->VAR17.VAR18[VAR3];
    VAR19 *VAR20 = VAR2->VAR17.VAR21[VAR3];
    if (!VAR2->VAR22)
        VAR16 = -VAR16;
    VAR20 += VAR2->VAR23[VAR3] + 8 * VAR4 * VAR16;
    for (VAR7 = VAR4; VAR7 < VAR5; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR10; VAR6++)
        {
            if (VAR2->VAR24[VAR14].VAR25 != VAR26)
            {
                if (VAR6 > 0)
                {
                    VAR2->VAR27.FUN2(VAR20 + 8 * VAR6, VAR16, VAR8);
                }
                if (VAR7 > 0)
                {
                    VAR2->VAR27.FUN3(VAR20 + 8 * VAR6, VAR16, VAR8);
                }
                if ((VAR6 < VAR10 - 1) && (VAR2->VAR24[VAR14 + 1].VAR25 == VAR26))
                {
                    VAR2->VAR27.FUN2(VAR20 + 8 * VAR6 + 8, VAR16, VAR8);
                }
                if ((VAR7 < VAR12 - 1) && (VAR2->VAR24[VAR14 + VAR10].VAR25 == VAR26))
                {
                    VAR2->VAR27.FUN3(VAR20 + 8 * VAR6 + 8 * VAR16, VAR16, VAR8);
                }
            }
            VAR14++;
        }
        VAR20 += 8 * VAR16;
    }
}
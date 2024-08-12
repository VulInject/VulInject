static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    int VAR7, VAR8 = 0;
    int VAR9;
    if (!VAR4->VAR10)
    {
        if (VAR4->VAR11)
        {
            VAR5 = (VAR4->VAR12 - 1) * VAR4->VAR13 + VAR4->VAR11 - 1;
            if (VAR2->VAR14 == VAR15)
                VAR8 = VAR2->VAR16[VAR5];
            VAR7 = VAR4->VAR17 << VAR8;
            VAR9 = (16 - VAR8) >> (VAR8 == 0);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR20][0], VAR4->VAR21[0] - 16 * VAR4->VAR17 - 16, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR20][1], VAR4->VAR21[0] - 16 * VAR4->VAR17 - 8, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR20][2], VAR4->VAR21[0] - VAR9 * VAR4->VAR17 - 16, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR20][3], VAR4->VAR21[0] - VAR9 * VAR4->VAR17 - 8, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR20][4], VAR4->VAR21[1] - 8 * VAR4->VAR22 - 8, VAR4->VAR22);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR20][5], VAR4->VAR21[2] - 8 * VAR4->VAR22 - 8, VAR4->VAR22);
        }
        if (VAR4->VAR11 == VAR4->VAR23 - 1)
        {
            VAR6 = (VAR4->VAR12 - 1) * VAR4->VAR13 + VAR4->VAR11;
            if (VAR2->VAR14 == VAR15)
                VAR8 = VAR2->VAR16[VAR6];
            VAR7 = VAR4->VAR17 << VAR8;
            VAR9 = VAR8 ? 15 : 8;
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR24][0], VAR4->VAR21[0] - 16 * VAR4->VAR17, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR24][1], VAR4->VAR21[0] - 16 * VAR4->VAR17 + 8, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR24][2], VAR4->VAR21[0] - VAR9 * VAR4->VAR17, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR24][3], VAR4->VAR21[0] - VAR9 * VAR4->VAR17 + 8, VAR7);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR24][4], VAR4->VAR21[1] - 8 * VAR4->VAR22, VAR4->VAR22);
            VAR4->VAR18.FUN2(VAR2->VAR19[VAR2->VAR24][5], VAR4->VAR21[2] - 8 * VAR4->VAR22, VAR4->VAR22);
        }
    }
    VAR25++;
    if (VAR25 >= VAR2->VAR26)
        VAR25 = 0;
}
while (0)
    FUN3(VAR2->VAR20);
FUN3(VAR2->VAR24);
FUN3(VAR2->VAR27);
FUN3(VAR2->VAR28);
}
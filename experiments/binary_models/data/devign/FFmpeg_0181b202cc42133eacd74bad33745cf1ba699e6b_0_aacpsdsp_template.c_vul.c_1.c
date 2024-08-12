static void FUN1(VAR1 *VAR2, const FUN2 (*VAR3)[2], int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        VAR2[VAR5] += FUN3(VAR3[VAR5][0], VAR3[VAR5][0], VAR3[VAR5][1], VAR3[VAR5][1]);
}
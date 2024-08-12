static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *const VAR13 = (VAR11 *)&VAR9->VAR12;
    int VAR14, VAR15;
    if (VAR13->VAR3[0])
        VAR2->FUN2(VAR2, VAR13);
    VAR13->VAR16 = 0;
    if (VAR2->FUN3(VAR2, VAR13) < 0)
    {
        FUN4(VAR2, VAR17, "");
        return -1;
    }
    VAR13->VAR18 = VAR19;
    VAR13->VAR20 = 1;
    FUN5(&VAR9->VAR21, VAR6, VAR7);
    for (VAR15 = 0; VAR15 < VAR2->VAR22; VAR15++)
    {
        VAR5 *VAR23 = &VAR9->VAR12.VAR3[0][VAR15 * VAR9->VAR12.VAR24[0]];
        VAR5 *VAR25 = &VAR9->VAR12.VAR3[1][VAR15 * VAR9->VAR12.VAR24[1]];
        VAR5 *VAR26 = &VAR9->VAR12.VAR3[2][VAR15 * VAR9->VAR12.VAR24[2]];
        for (VAR14 = 0; VAR14 < VAR2->VAR27; VAR14 += 4)
        {
            VAR23[3] = FUN6(&VAR9->VAR21, 5) << 3;
            VAR23[2] = FUN6(&VAR9->VAR21, 5) << 3;
            VAR23[1] = FUN6(&VAR9->VAR21, 5) << 3;
            VAR23[0] = FUN6(&VAR9->VAR21, 5) << 3;
            VAR23 += 4;
            *(VAR25++) = FUN6(&VAR9->VAR21, 6) << 2;
            *(VAR26++) = FUN6(&VAR9->VAR21, 6) << 2;
        }
    }
    *VAR12 = *(VAR11 *)&VAR9->VAR12;
    *VAR4 = sizeof(VAR28);
    FUN7();
    return VAR7;
}
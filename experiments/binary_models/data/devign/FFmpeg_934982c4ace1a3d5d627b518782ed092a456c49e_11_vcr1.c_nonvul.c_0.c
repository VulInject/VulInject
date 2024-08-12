static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *const VAR13 = (VAR11 *)&VAR9->VAR12;
    VAR5 *VAR14 = VAR6;
    int VAR15, VAR16, VAR17;
    if (VAR13->VAR3[0])
        VAR2->FUN2(VAR2, VAR13);
    VAR13->VAR18 = 0;
    if (VAR2->FUN3(VAR2, VAR13) < 0)
    {
        FUN4(VAR2, VAR19, "");
        return -1;
    }
    VAR13->VAR20 = VAR21;
    VAR13->VAR22 = 1;
    for (VAR15 = 0; VAR15 < 16; VAR15++)
    {
        VAR9->VAR23[VAR15] = *(VAR14++);
        VAR14++;
    }
    for (VAR17 = 0; VAR17 < VAR2->VAR24; VAR17++)
    {
        int VAR25;
        VAR5 *VAR26 = &VAR9->VAR12.VAR3[0][VAR17 * VAR9->VAR12.VAR27[0]];
        if ((VAR17 & 3) == 0)
        {
            VAR5 *VAR28 = &VAR9->VAR12.VAR3[1][(VAR17 >> 2) * VAR9->VAR12.VAR27[1]];
            VAR5 *VAR29 = &VAR9->VAR12.VAR3[2][(VAR17 >> 2) * VAR9->VAR12.VAR27[2]];
            for (VAR15 = 0; VAR15 < 4; VAR15++)
                VAR9->VAR25[VAR15] = *(VAR14++);
            VAR25 = VAR9->VAR25[0] - VAR9->VAR23[VAR14[2] & 0xF];
            for (VAR16 = 0; VAR16 < VAR2->VAR30; VAR16 += 4)
            {
                VAR26[0] = (VAR25 += VAR9->VAR23[VAR14[2] & 0xF]);
                VAR26[1] = (VAR25 += VAR9->VAR23[VAR14[2] >> 4]);
                VAR26[2] = (VAR25 += VAR9->VAR23[VAR14[0] & 0xF]);
                VAR26[3] = (VAR25 += VAR9->VAR23[VAR14[0] >> 4]);
                VAR26 += 4;
                *(VAR28++) = VAR14[3];
                *(VAR29++) = VAR14[1];
                VAR14 += 4;
            }
        }
        else
        {
            VAR25 = VAR9->VAR25[VAR17 & 3] - VAR9->VAR23[VAR14[2] & 0xF];
            for (VAR16 = 0; VAR16 < VAR2->VAR30; VAR16 += 8)
            {
                VAR26[0] = (VAR25 += VAR9->VAR23[VAR14[2] & 0xF]);
                VAR26[1] = (VAR25 += VAR9->VAR23[VAR14[2] >> 4]);
                VAR26[2] = (VAR25 += VAR9->VAR23[VAR14[3] & 0xF]);
                VAR26[3] = (VAR25 += VAR9->VAR23[VAR14[3] >> 4]);
                VAR26[4] = (VAR25 += VAR9->VAR23[VAR14[0] & 0xF]);
                VAR26[5] = (VAR25 += VAR9->VAR23[VAR14[0] >> 4]);
                VAR26[6] = (VAR25 += VAR9->VAR23[VAR14[1] & 0xF]);
                VAR26[7] = (VAR25 += VAR9->VAR23[VAR14[1] >> 4]);
                VAR26 += 8;
                VAR14 += 4;
            }
        }
    }
    *VAR12 = *(VAR11 *)&VAR9->VAR12;
    *VAR4 = sizeof(VAR31);
    FUN5();
    return VAR7;
}
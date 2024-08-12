static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    if (VAR8->VAR19.VAR3[0])
        VAR2->FUN2(VAR2, &VAR8->VAR19);
    VAR13 = FUN3(VAR2, &VAR8->VAR19);
    if (VAR13 < 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR13;
    }
    VAR8->VAR21 = VAR8->VAR19.VAR3[0];
    VAR8->VAR22 = VAR8->VAR19.VAR3[0];
    VAR8->VAR23 = VAR6->VAR3 + 4;
    VAR8->VAR24 = NULL;
    VAR12 = VAR6->VAR3[0];
    VAR11 = VAR8->VAR25[VAR12];
    VAR18 = (VAR17 *)VAR8->VAR19.VAR3[1];
    for (VAR14 = 0; VAR14 < VAR8->VAR26; VAR14++, VAR8->VAR23 += 3)
        VAR18[VAR14 + VAR11] = (VAR8->VAR23[0] << 18) | (VAR8->VAR23[1] << 10) | (VAR8->VAR23[2] << 2);
    VAR8->VAR19.VAR27 = 1;
    for (VAR16 = 0; VAR16 < VAR2->VAR28; VAR16 += 2)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR29; VAR15 += 2)
        {
            if (VAR8->VAR23 - VAR6->VAR3 >= VAR6->VAR30)
            {
                FUN4(VAR2, VAR20, "");
                return VAR31;
            }
            VAR10 = FUN5(VAR8);
            if (VAR10 != 0xf)
            {
                FUN6(VAR8, VAR10);
            }
            else
            {
                VAR10 = FUN5(VAR8);
                VAR13 = FUN7(VAR8, VAR10);
                if (VAR13 < 0)
                {
                    VAR2->FUN2(VAR2, &VAR8->VAR19);
                    return VAR13;
                }
            }
            VAR8->VAR22 += 2;
        }
        VAR8->VAR22 += 2 * VAR8->VAR19.VAR32[0] - VAR15;
    }
    *VAR4 = 1;
    *(VAR33 *)VAR3 = VAR8->VAR19;
    return VAR6->VAR30;
}
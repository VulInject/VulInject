static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    int VAR11, VAR12;
    int VAR13 = (VAR2->VAR14 != VAR15);
    VAR16 *VAR17;
    int VAR18 = VAR13 ? 2 : 0;
    if (!VAR8->VAR3[0] && VAR6)
    {
        int VAR19 = VAR6->VAR20 / VAR2->VAR21 - VAR18;
        if (VAR6->VAR20 % VAR2->VAR21)
        {
            FUN2(VAR2, VAR22, "");
        }
        if (VAR6->VAR20 < (VAR18 + 1) * VAR2->VAR21)
        {
            FUN2(VAR2, VAR23, "");
            return FUN3(VAR24);
        }
        if (VAR13)
        {
            VAR8->VAR25[0] = VAR6->VAR3[1] + 128;
            if (VAR2->VAR21 == 2)
                VAR8->VAR25[1] = VAR6->VAR3[2 + VAR19 + 1] + 128;
        }
        VAR8->VAR26 = 0;
        VAR8->VAR27 = VAR19;
        if (!(VAR8->VAR3[0] = FUN4(VAR19)))
            return FUN3(VAR28);
        if (VAR2->VAR21 == 2)
        {
            if (!(VAR8->VAR3[1] = FUN4(VAR19)))
            {
                FUN5(&VAR8->VAR3[0]);
                return FUN3(VAR28);
            }
        }
        memcpy(VAR8->VAR3[0], &VAR6->VAR3[VAR18], VAR19);
        if (VAR2->VAR21 == 2)
            memcpy(VAR8->VAR3[1], &VAR6->VAR3[2 * VAR18 + VAR19], VAR19);
    }
    if (!VAR8->VAR3[0])
    {
        FUN2(VAR2, VAR23, "");
        return FUN3(VAR24);
    }
    VAR10 = FUN6(VAR29, VAR8->VAR27 - VAR8->VAR26);
    if (VAR10 <= 0)
    {
        *VAR4 = 0;
        return VAR6->VAR20;
    }
    VAR8->VAR30.VAR31 = VAR10 * (VAR13 + 1);
    if ((VAR12 = VAR2->FUN7(VAR2, &VAR8->VAR30)) < 0)
    {
        FUN2(VAR2, VAR23, "");
        return VAR12;
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR21; VAR11++)
    {
        if (VAR13)
        {
            FUN8(VAR8->VAR30.VAR3[VAR11], &VAR8->VAR3[VAR11][VAR8->VAR26], VAR10, &VAR8->VAR25[VAR11], VAR8->VAR32);
        }
        else
        {
            FUN9(VAR8->VAR30.VAR3[VAR11], &VAR8->VAR3[VAR11][VAR8->VAR26], VAR10);
        }
    }
    VAR8->VAR26 += VAR10;
    *VAR4 = 1;
    *(VAR33 *)VAR3 = VAR8->VAR30;
    return ((VAR2->VAR34 == 0) * VAR18 + VAR10) * VAR2->VAR21;
}
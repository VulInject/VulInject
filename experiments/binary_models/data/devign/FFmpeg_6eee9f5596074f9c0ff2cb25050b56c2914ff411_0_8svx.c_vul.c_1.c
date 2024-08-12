static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    VAR13 *VAR14, *VAR15;
    if (!VAR8->VAR16 && VAR6)
    {
        VAR13 *VAR17, *VAR18 = NULL;
        VAR8->VAR19 = !VAR8->VAR20 ? VAR6->VAR21 : VAR2->VAR22 + (VAR6->VAR21 - VAR2->VAR22) * 2;
        if (!(VAR8->VAR16 = FUN2(VAR8->VAR19)))
            return FUN3(VAR23);
        if (VAR8->VAR20)
        {
            const VAR13 *VAR24 = VAR6->VAR3;
            VAR13 *VAR15;
            int VAR25 = VAR6->VAR21;
            int VAR26, VAR10 = VAR8->VAR19;
            if (VAR25 < 2)
            {
                FUN4(VAR2, VAR27, "");
                return FUN3(VAR28);
            }
            if (!(VAR17 = FUN5(VAR10)))
                return FUN3(VAR23);
            VAR15 = VAR18 = VAR17;
            VAR15 = VAR17;
            for (VAR26 = 0; VAR26 < VAR2->VAR22; VAR26++)
            {
                FUN6(VAR15, VAR24 + 1, VAR25 / VAR2->VAR22 - 1, VAR24[0], VAR8->VAR20);
                VAR24 += VAR25 / VAR2->VAR22;
                VAR15 += VAR10 / VAR2->VAR22 - 1;
            }
        }
        else
        {
            VAR17 = VAR6->VAR3;
        }
        if (VAR2->VAR22 == 2)
            FUN7(VAR8->VAR16, VAR17, VAR8->VAR19);
        else
            memcpy(VAR8->VAR16, VAR17, VAR8->VAR19);
        FUN8(&VAR18);
    }
    FUN9(!(VAR8->VAR19 % VAR2->VAR22 || VAR8->VAR29 % VAR2->VAR22));
    VAR8->VAR30.VAR31 = FUN10(VAR32, VAR8->VAR19 - VAR8->VAR29) / VAR2->VAR22;
    if ((VAR12 = VAR2->FUN11(VAR2, &VAR8->VAR30)) < 0)
    {
        FUN4(VAR2, VAR27, "");
        return VAR12;
    }
    *VAR4 = 1;
    *(VAR33 *)VAR3 = VAR8->VAR30;
    VAR15 = VAR8->VAR30.VAR3[0];
    VAR14 = VAR8->VAR16 + VAR8->VAR29;
    VAR11 = VAR8->VAR30.VAR31 * VAR2->VAR22;
    for (VAR10 = VAR11; VAR10 > 0; VAR10--)
        *VAR15++ = *VAR14++ + 128;
    VAR8->VAR29 += VAR11;
    return VAR8->VAR20 ? (VAR2->VAR34 == 0) * 2 + VAR11 / 2 : VAR11;
}
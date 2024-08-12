static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10 = 0;
    int VAR11;
    if (FUN2(VAR9))
        return VAR12;
    if (VAR6->VAR13 == 0)
    {
        int VAR14;
        VAR6->VAR15 = FUN3(VAR9);
        VAR14 = (VAR6->VAR16 - 1) * VAR6->VAR15 + 1;
        FUN4(VAR9, 8);
        VAR6->VAR17 = 0;
        FUN5(&VAR6->VAR18, &VAR6->VAR19, VAR14 * sizeof(*VAR6->VAR18));
        if (!VAR6->VAR19)
        {
            FUN6(VAR2, VAR20, "");
            return FUN7(VAR21);
            for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                VAR6->VAR18[VAR11] = FUN8(VAR9);
            VAR10 = FUN9(VAR9, VAR4, VAR6->VAR18[VAR6->VAR17]);
            if (VAR10 >= 0)
            {
                VAR10 = 0;
                if (VAR6->VAR13 == 0)
                    VAR4->VAR22 = VAR2->VAR23[0]->VAR24++;
                VAR4->VAR25 = VAR6->VAR13;
                if (VAR6->VAR17 % VAR6->VAR15 == 0)
                    VAR6->VAR13 = (VAR6->VAR13 + 1) % VAR6->VAR16;
                VAR6->VAR17++;
                return VAR10;
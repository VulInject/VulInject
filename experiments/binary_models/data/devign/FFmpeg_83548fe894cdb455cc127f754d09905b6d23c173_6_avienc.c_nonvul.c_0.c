static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8;
    int VAR9;
    char VAR10[5];
    if (VAR4->VAR11 & VAR12)
    {
        VAR13 *VAR14;
        VAR15 *VAR16 = 0, *VAR17;
        int VAR18, VAR19 = -1;
        VAR8 = FUN2(VAR4, "");
        for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
        {
            VAR14 = VAR2->VAR21[VAR9]->VAR7;
            VAR14->VAR22 = 0;
        }
        do
        {
            VAR18 = 1;
            for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
            {
                VAR14 = VAR2->VAR21[VAR9]->VAR7;
                if (VAR14->VAR23.VAR22 <= VAR14->VAR22)
                    continue;
                VAR17 = FUN3(&VAR14->VAR23, VAR14->VAR22);
                if (VAR18 || VAR17->VAR24 < VAR16->VAR24)
                {
                    VAR16 = VAR17;
                    VAR19 = VAR9;
                }
                VAR18 = 0;
            }
            if (!VAR18)
            {
                VAR14 = VAR2->VAR21[VAR19]->VAR7;
                FUN4(VAR10, VAR19, VAR2->VAR21[VAR19]->VAR25->VAR26);
                FUN5(VAR4, VAR10);
                FUN6(VAR4, VAR16->VAR27);
                FUN6(VAR4, VAR16->VAR24);
                FUN6(VAR4, VAR16->VAR28);
                VAR14->VAR22++;
            }
        } while (!VAR18);
        FUN7(VAR4, VAR8);
        FUN8(VAR2, VAR6->VAR29);
    }
    return 0;
}
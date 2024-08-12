static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    for (VAR4 = VAR2->VAR5.VAR6; VAR4; VAR4 = VAR4->VAR7.VAR8)
    {
        int VAR9, VAR10, VAR11;
        VAR12 *VAR13 = &VAR4->VAR13;
        VAR14 *VAR15;
        VAR11 = VAR9 = FUN2(VAR13);
        VAR10 = VAR13->VAR10;
        while (VAR9)
        {
            int VAR16 = VAR13->VAR17 - VAR10;
            int VAR18 = FUN3(VAR9, VAR16);
            struct VAR19 *VAR20;
            struct VAR21 *VAR22;
            VAR20 = VAR13->VAR23 + VAR10;
            VAR13->FUN4(VAR4->VAR24, VAR20, VAR18);
            FUN5(VAR20, VAR18);
            for (VAR22 = VAR4->VAR25.VAR6; VAR22; VAR22 = VAR22->VAR7.VAR8)
            {
                VAR22->VAR26.FUN6(VAR22->VAR27, VAR4->VAR24, VAR18 << VAR13->VAR28.VAR29);
            }
            VAR10 = (VAR10 + VAR18) % VAR13->VAR17;
            VAR9 -= VAR18;
        }
        VAR13->VAR10 = VAR10;
        for (VAR15 = VAR13->VAR30.VAR6; VAR15; VAR15 = VAR15->VAR7.VAR8)
        {
            if (!VAR15->VAR31 && VAR15->VAR32)
            {
                continue;
            }
            if (FUN7(VAR33, VAR11 > VAR15->VAR34))
            {
                FUN8("", VAR11, VAR15->VAR34);
                VAR11 = VAR15->VAR34;
            }
            VAR15->VAR34 -= VAR11;
            VAR15->VAR32 = VAR15->VAR34 == 0;
        }
    }
}
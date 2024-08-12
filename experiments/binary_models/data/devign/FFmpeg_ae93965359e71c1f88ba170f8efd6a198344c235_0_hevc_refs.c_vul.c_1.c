int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    do
    {
        int VAR6 = 0;
        int VAR7 = VAR8;
        int VAR9, VAR10, VAR11;
        if (VAR2->VAR12.VAR13 == 1)
        {
            for (VAR9 = 0; VAR9 < FUN2(VAR2->VAR14); VAR9++)
            {
                VAR15 *VAR16 = &VAR2->VAR14[VAR9];
                if (!(VAR16->VAR17 & VAR18) && VAR16->VAR19 != VAR2->VAR19 && VAR16->VAR20 == VAR2->VAR21)
                {
                    FUN3(VAR2, VAR16, VAR22);
                }
            }
        }
        for (VAR9 = 0; VAR9 < FUN2(VAR2->VAR14); VAR9++)
        {
            VAR15 *VAR16 = &VAR2->VAR14[VAR9];
            if ((VAR16->VAR17 & VAR22) && VAR16->VAR20 == VAR2->VAR21)
            {
                VAR6++;
                if (VAR16->VAR19 < VAR7)
                {
                    VAR7 = VAR16->VAR19;
                    VAR10 = VAR9;
                }
            }
        }
        if (!VAR5 && VAR2->VAR21 == VAR2->VAR23 && VAR2->VAR24 && VAR6 <= VAR2->VAR24->VAR25[VAR2->VAR24->VAR26 - 1].VAR27)
            return 0;
        if (VAR6)
        {
            VAR15 *VAR16 = &VAR2->VAR14[VAR10];
            VAR3 *VAR28 = VAR4;
            VAR3 *VAR29 = VAR16->VAR16;
            const VAR30 *VAR31 = FUN4(VAR29->VAR32);
            int VAR33 = !!(VAR31->VAR34[0].VAR35 > 7);
            VAR11 = FUN5(VAR4, VAR29);
            if (VAR16->VAR17 & VAR18)
                FUN3(VAR2, VAR16, VAR22 | VAR18);
            else
                FUN3(VAR2, VAR16, VAR22);
            if (VAR11 < 0)
                return VAR11;
            for (VAR9 = 0; VAR9 < 3; VAR9++)
            {
                int VAR36 = (VAR9 > 0) ? VAR31->VAR37 : 0;
                int VAR38 = (VAR9 > 0) ? VAR31->VAR39 : 0;
                int VAR40 = ((VAR16->VAR41.VAR42 >> VAR36) << VAR33) + (VAR16->VAR41.VAR43 >> VAR38) * VAR28->VAR44[VAR9];
                VAR28->VAR45[VAR9] += VAR40;
            }
            FUN6(VAR2->VAR46, VAR47, "", VAR16->VAR19);
            return 1;
        }
        if (VAR2->VAR21 != VAR2->VAR23)
            VAR2->VAR21 = (VAR2->VAR21 + 1) & 0xff;
        else
            break;
    } while (1);
    return 0;
}
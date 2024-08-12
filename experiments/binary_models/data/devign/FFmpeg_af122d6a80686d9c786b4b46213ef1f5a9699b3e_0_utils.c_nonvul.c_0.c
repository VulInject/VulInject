int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR7 *VAR8;
    for (;;)
    {
        VAR9 *VAR10 = VAR2->VAR11;
        if (VAR10)
        {
            *VAR4 = VAR10->VAR4;
            if (VAR2->VAR12[VAR4->VAR13]->VAR14->VAR15 != VAR16 || !VAR2->VAR12[VAR4->VAR13]->VAR17 || VAR2->VAR18 < VAR4->VAR19)
            {
                VAR20 *VAR21 = &VAR2->VAR12[VAR4->VAR13]->VAR22;
                FUN2(&VAR21->VAR23);
                VAR21->VAR24 = 0;
                VAR2->VAR11 = VAR10->VAR25;
                VAR2->VAR18 += VAR4->VAR19;
                FUN3(VAR10);
                return 0;
            }
        }
        FUN4(VAR4);
        VAR5 = VAR2->VAR26->FUN5(VAR2, VAR4);
        if (VAR5 < 0)
        {
            if (!VAR10 || VAR5 == FUN6(VAR27))
                return VAR5;
            for (VAR6 = 0; VAR6 < VAR2->VAR28; VAR6++)
                VAR2->VAR12[VAR6]->VAR17 = 0;
            continue;
        }
        VAR8 = VAR2->VAR12[VAR4->VAR13];
        switch (VAR8->VAR14->VAR29)
        {
        case VAR30:
            if (VAR2->VAR31)
                VAR8->VAR14->VAR15 = VAR2->VAR31;
            break;
        case VAR32:
            if (VAR2->VAR33)
                VAR8->VAR14->VAR15 = VAR2->VAR33;
            break;
        case VAR34:
            if (VAR2->VAR35)
                VAR8->VAR14->VAR15 = VAR2->VAR35;
            break;
        }
        if (!VAR10 && (VAR8->VAR14->VAR15 != VAR16 || !VAR8->VAR17))
            return VAR5;
        FUN7(&VAR2->VAR11, VAR4, &VAR2->VAR36);
        VAR2->VAR18 -= VAR4->VAR19;
        if (VAR8->VAR14->VAR15 == VAR16)
        {
            VAR20 *VAR21 = &VAR8->VAR22;
            --VAR8->VAR17;
            VAR21->VAR23 = FUN8(VAR21->VAR23, VAR21->VAR24 + VAR4->VAR19 + VAR37);
            memcpy(VAR21->VAR23 + VAR21->VAR24, VAR4->VAR38, VAR4->VAR19);
            VAR21->VAR24 += VAR4->VAR19;
            memset(VAR21->VAR23 + VAR21->VAR24, 0, VAR37);
            if (FUN9(VAR21->VAR24) != FUN9(VAR21->VAR24 - VAR4->VAR19))
            {
                FUN10(VAR8, VAR21, 1);
                if (VAR8->VAR14->VAR15 != VAR16)
                {
                    VAR21->VAR24 = 0;
                    FUN2(&VAR21->VAR23);
                }
            }
        }
    }
}
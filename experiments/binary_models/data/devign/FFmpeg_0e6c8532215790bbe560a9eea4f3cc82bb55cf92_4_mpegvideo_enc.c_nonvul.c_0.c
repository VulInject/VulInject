static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 1; VAR3 < VAR5; VAR3++)
        VAR2->VAR6[VAR3 - 1] = VAR2->VAR6[VAR3];
    VAR2->VAR6[VAR5 - 1] = NULL;
    if (!VAR2->VAR6[0] && VAR2->VAR7[0])
    {
        if (!VAR2->VAR8 || VAR2->VAR9)
        {
            VAR2->VAR6[0] = VAR2->VAR7[0];
            VAR2->VAR6[0]->VAR10->VAR11 = VAR12;
            VAR2->VAR6[0]->VAR10->VAR13 = VAR2->VAR13++;
        }
        else
        {
            int VAR14 = 0;
            if (VAR2->VAR15->VAR16 || VAR2->VAR15->VAR17)
            {
                if (VAR2->VAR18 < VAR2->VAR19 && FUN2(VAR2, VAR2->VAR7[0], VAR2->VAR8))
                {
                    FUN3(VAR2->VAR7[0]->VAR10);
                    FUN4();
                    FUN5(VAR2, 0);
                    goto VAR20;
                }
            }
            if (VAR2->VAR15->VAR21 & VAR22)
            {
                for (VAR3 = 0; VAR3 < VAR2->VAR23 + 1; VAR3++)
                {
                    int VAR24 = VAR2->VAR7[0]->VAR10->VAR25 + VAR3;
                    if (VAR24 >= VAR2->VAR26.VAR27)
                        break;
                    if (!VAR2->VAR7[VAR3])
                    {
                        VAR2->VAR26.VAR28[VAR24 - 1].VAR29 = VAR30;
                        break;
                    }
                    VAR2->VAR7[VAR3]->VAR10->VAR11 = VAR2->VAR26.VAR28[VAR24].VAR29;
                }
            }
            if (VAR2->VAR31 == 0)
            {
                VAR14 = VAR2->VAR23;
                while (VAR14 && !VAR2->VAR7[VAR14])
                    VAR14--;
            }
            else if (VAR2->VAR31 == 1)
            {
                for (VAR3 = 1; VAR3 < VAR2->VAR23 + 1; VAR3++)
                {
                    if (VAR2->VAR7[VAR3] && VAR2->VAR7[VAR3]->VAR32 == 0)
                    {
                        VAR2->VAR7[VAR3]->VAR32 = FUN6(VAR2, VAR2->VAR7[VAR3]->VAR10->VAR33[0], VAR2->VAR7[VAR3 - 1]->VAR10->VAR33[0], VAR2->VAR34) + 1;
                    }
                }
                for (VAR3 = 0; VAR3 < VAR2->VAR23 + 1; VAR3++)
                {
                    if (!VAR2->VAR7[VAR3] || VAR2->VAR7[VAR3]->VAR32 - 1 > VAR2->VAR35 / VAR2->VAR36)
                        break;
                }
                VAR14 = FUN7(0, VAR3 - 1);
                for (VAR3 = 0; VAR3 < VAR14 + 1; VAR3++)
                {
                    VAR2->VAR7[VAR3]->VAR32 = 0;
                }
            }
            else if (VAR2->VAR31 == 2)
            {
                VAR14 = FUN8(VAR2);
            }
            FUN4();
            for (VAR3 = VAR14 - 1; VAR3 >= 0; VAR3--)
            {
                int VAR37 = VAR2->VAR7[VAR3]->VAR10->VAR11;
                if (VAR37 && VAR37 != VAR38)
                    VAR14 = VAR3;
            }
            if (VAR2->VAR7[VAR14]->VAR10->VAR11 == VAR38 && VAR14 == VAR2->VAR23)
            {
                FUN9(VAR2->VAR15, VAR39, "");
            }
            if (VAR2->VAR18 + VAR14 >= VAR2->VAR19)
            {
                if ((VAR2->VAR40 & VAR41) && VAR2->VAR19 > VAR2->VAR18)
                {
                    VAR14 = VAR2->VAR19 - VAR2->VAR18 - 1;
                }
                else
                {
                    if (VAR2->VAR15->VAR21 & VAR42)
                        VAR14 = 0;
                    VAR2->VAR7[VAR14]->VAR10->VAR11 = VAR12;
                }
            }
            if ((VAR2->VAR15->VAR21 & VAR42) && VAR14 && VAR2->VAR7[VAR14]->VAR10->VAR11 == VAR12)
                VAR14--;
            VAR2->VAR6[0] = VAR2->VAR7[VAR14];
            if (VAR2->VAR6[0]->VAR10->VAR11 != VAR12)
                VAR2->VAR6[0]->VAR10->VAR11 = VAR30;
            VAR2->VAR6[0]->VAR10->VAR13 = VAR2->VAR13++;
            for (VAR3 = 0; VAR3 < VAR14; VAR3++)
            {
                VAR2->VAR6[VAR3 + 1] = VAR2->VAR7[VAR3];
                VAR2->VAR6[VAR3 + 1]->VAR10->VAR11 = VAR38;
                VAR2->VAR6[VAR3 + 1]->VAR10->VAR13 = VAR2->VAR13++;
            }
        }
    }
VAR20:
    FUN10(VAR2->VAR15, &VAR2->VAR43);
    if (VAR2->VAR6[0])
    {
        VAR2->VAR6[0]->VAR44 = VAR2->VAR6[0]->VAR10->VAR11 != VAR38 ? 3 : 0;
        if ((VAR4 = FUN11(VAR2->VAR15, &VAR2->VAR43, VAR2->VAR6[0])))
            return VAR4;
        if (VAR2->VAR6[0]->VAR45 || VAR2->VAR15->VAR46)
        {
            VAR47 *VAR48;
            int VAR3 = FUN12(VAR2->VAR15, VAR2->VAR49, 0);
            if (VAR3 < 0)
                return VAR3;
            VAR48 = &VAR2->VAR49[VAR3];
            VAR48->VAR44 = VAR2->VAR6[0]->VAR44;
            if (FUN13(VAR2, VAR48, 0) < 0)
            {
                return -1;
            }
            VAR4 = FUN14(VAR48->VAR10, VAR2->VAR6[0]->VAR10);
            if (VAR4 < 0)
                return VAR4;
            FUN3(VAR2->VAR6[0]->VAR10);
            VAR2->VAR6[0]->VAR45 = 0;
            VAR2->VAR50 = VAR48;
        }
        else
        {
            VAR2->VAR50 = VAR2->VAR6[0];
            for (VAR3 = 0; VAR3 < 4; VAR3++)
            {
                VAR2->VAR43.VAR10->VAR33[VAR3] += VAR51;
            }
        }
        FUN10(VAR2->VAR15, &VAR2->VAR52);
        if ((VAR4 = FUN11(VAR2->VAR15, &VAR2->VAR52, VAR2->VAR50)) < 0)
            return VAR4;
        VAR2->VAR53 = VAR2->VAR43.VAR10->VAR25;
    }
    return 0;
}
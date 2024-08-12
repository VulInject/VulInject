static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 1; VAR3 < VAR4; VAR3++)
        VAR2->VAR5[VAR3 - 1] = VAR2->VAR5[VAR3];
    VAR2->VAR5[VAR4 - 1] = NULL;
    if (VAR2->VAR5[0] == NULL && VAR2->VAR6[0])
    {
        if (VAR2->VAR7 == NULL || VAR2->VAR8)
        {
            VAR2->VAR5[0] = VAR2->VAR6[0];
            VAR2->VAR5[0]->VAR9 = VAR10;
            VAR2->VAR5[0]->VAR11 = VAR2->VAR11++;
        }
        else
        {
            int VAR12;
            if (VAR2->VAR13->VAR14 || VAR2->VAR13->VAR15)
            {
                if (VAR2->VAR16 < VAR2->VAR17 && FUN2(VAR2, VAR2->VAR6[0], VAR2->VAR7))
                {
                    if (VAR2->VAR6[0]->VAR18 == VAR19)
                    {
                        for (VAR3 = 0; VAR3 < 4; VAR3++)
                            VAR2->VAR6[0]->VAR20[VAR3] = NULL;
                        VAR2->VAR6[0]->VAR18 = 0;
                    }
                    else
                    {
                        assert(VAR2->VAR6[0]->VAR18 == VAR21 || VAR2->VAR6[0]->VAR18 == VAR22);
                        VAR2->VAR13->FUN3(VAR2->VAR13, (VAR23 *)VAR2->VAR6[0]);
                    }
                    FUN4();
                    FUN5(VAR2, 0);
                    goto VAR24;
                }
            }
            if (VAR2->VAR25 & VAR26)
            {
                for (VAR3 = 0; VAR3 < VAR2->VAR27 + 1; VAR3++)
                {
                    int VAR28 = VAR2->VAR6[0]->VAR29 + VAR3;
                    if (VAR28 >= VAR2->VAR30.VAR31)
                        break;
                    if (!VAR2->VAR6[VAR3])
                    {
                        VAR2->VAR30.VAR32[VAR28 - 1].VAR33 = VAR34;
                        break;
                    }
                    VAR2->VAR6[VAR3]->VAR9 = VAR2->VAR30.VAR32[VAR28].VAR33;
                }
            }
            if (VAR2->VAR13->VAR35 == 0)
            {
                VAR12 = VAR2->VAR27;
                while (VAR12 && !VAR2->VAR6[VAR12])
                    VAR12--;
            }
            else if (VAR2->VAR13->VAR35 == 1)
            {
                for (VAR3 = 1; VAR3 < VAR2->VAR27 + 1; VAR3++)
                {
                    if (VAR2->VAR6[VAR3] && VAR2->VAR6[VAR3]->VAR36 == 0)
                    {
                        VAR2->VAR6[VAR3]->VAR36 = FUN6(VAR2, VAR2->VAR6[VAR3]->VAR20[0], VAR2->VAR6[VAR3 - 1]->VAR20[0], VAR2->VAR37) + 1;
                    }
                }
                for (VAR3 = 0; VAR3 < VAR2->VAR27 + 1; VAR3++)
                {
                    if (VAR2->VAR6[VAR3] == NULL || VAR2->VAR6[VAR3]->VAR36 - 1 > VAR2->VAR38 / 40)
                        break;
                }
                VAR12 = FUN7(0, VAR3 - 1);
                for (VAR3 = 0; VAR3 < VAR12 + 1; VAR3++)
                {
                    VAR2->VAR6[VAR3]->VAR36 = 0;
                }
            }
            else
            {
                FUN8(VAR2->VAR13, VAR39, "");
                VAR12 = 0;
            }
            FUN4();
            for (VAR3 = VAR12 - 1; VAR3 >= 0; VAR3--)
            {
                int VAR18 = VAR2->VAR6[VAR3]->VAR9;
                if (VAR18 && VAR18 != VAR40)
                    VAR12 = VAR3;
            }
            if (VAR2->VAR6[VAR12]->VAR9 == VAR40 && VAR12 == VAR2->VAR27)
            {
                FUN8(VAR2->VAR13, VAR39, "");
            }
            if (VAR2->VAR16 + VAR12 >= VAR2->VAR17)
            {
                if ((VAR2->VAR41 & VAR42) && VAR2->VAR17 > VAR2->VAR16)
                {
                    VAR12 = VAR2->VAR17 - VAR2->VAR16 - 1;
                }
                else
                {
                    if (VAR2->VAR25 & VAR43)
                        VAR12 = 0;
                    VAR2->VAR6[VAR12]->VAR9 = VAR10;
                }
            }
            if ((VAR2->VAR25 & VAR43) && VAR12 && VAR2->VAR6[VAR12]->VAR9 == VAR10)
                VAR12--;
            VAR2->VAR5[0] = VAR2->VAR6[VAR12];
            if (VAR2->VAR5[0]->VAR9 != VAR10)
                VAR2->VAR5[0]->VAR9 = VAR34;
            VAR2->VAR5[0]->VAR11 = VAR2->VAR11++;
            for (VAR3 = 0; VAR3 < VAR12; VAR3++)
            {
                VAR2->VAR5[VAR3 + 1] = VAR2->VAR6[VAR3];
                VAR2->VAR5[VAR3 + 1]->VAR9 = VAR40;
                VAR2->VAR5[VAR3 + 1]->VAR11 = VAR2->VAR11++;
            }
        }
    }
VAR24:
    if (VAR2->VAR5[0])
    {
        VAR2->VAR5[0]->VAR44 = VAR2->VAR5[0]->VAR9 != VAR40 ? 3 : 0;
        FUN9(&VAR2->VAR45, VAR2->VAR5[0]);
        if (VAR2->VAR5[0]->VAR18 == VAR19)
        {
            int VAR3 = FUN10(VAR2, 0);
            VAR46 *VAR47 = &VAR2->VAR48[VAR3];
            for (VAR3 = 0; VAR3 < 4; VAR3++)
                VAR2->VAR5[0]->VAR20[VAR3] = NULL;
            VAR2->VAR5[0]->VAR18 = 0;
            VAR47->VAR44 = VAR2->VAR5[0]->VAR44;
            FUN11(VAR2, VAR47, 0);
            FUN12(VAR2, (VAR23 *)VAR47, (VAR23 *)VAR2->VAR5[0]);
            VAR2->VAR49 = VAR47;
        }
        else
        {
            assert(VAR2->VAR5[0]->VAR18 == VAR21 || VAR2->VAR5[0]->VAR18 == VAR22);
            VAR2->VAR49 = VAR2->VAR5[0];
            for (VAR3 = 0; VAR3 < 4; VAR3++)
            {
                VAR2->VAR45.VAR20[VAR3] += 16;
            }
        }
        FUN9(&VAR2->VAR50, VAR2->VAR49);
        VAR2->VAR51 = VAR2->VAR45.VAR29;
    }
    else
    {
        memset(&VAR2->VAR45, 0, sizeof(VAR46));
    }
}
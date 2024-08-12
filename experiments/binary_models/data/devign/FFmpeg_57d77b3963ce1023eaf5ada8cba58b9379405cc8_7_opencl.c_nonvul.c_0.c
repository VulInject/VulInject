static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    size_t VAR5;
    cl_int VAR6;
    cl_uint VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    cl_context_properties VAR11[3];
    char VAR12[100];
    int VAR13, VAR14 = 0;
    cl_device_type VAR15[] = {VAR16, VAR17, VAR18};
    if (VAR4)
    {
        if (VAR2->VAR19)
            return 0;
        VAR2->VAR20 = VAR4->VAR20;
        VAR2->VAR19 = 1;
        VAR2->VAR21 = VAR4->VAR21;
        VAR2->VAR22 = VAR4->VAR22;
        VAR2->VAR23 = VAR4->VAR23;
        VAR2->VAR24 = VAR4->VAR24;
        VAR2->VAR15 = VAR4->VAR15;
    }
    else
    {
        if (!VAR2->VAR19)
        {
            VAR6 = FUN2(0, NULL, &VAR7);
            if (VAR6 != VAR25)
            {
                FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                return VAR28;
            }
            if (VAR2->VAR29.VAR30 >= 0)
            {
                if (VAR7 < VAR2->VAR29.VAR30 + 1)
                {
                    FUN3(&VAR26, VAR27, "");
                    return FUN5(VAR31);
                }
            }
            if (VAR7 > 0)
            {
                VAR10 = FUN6(VAR7 * sizeof(VAR9));
                if (!VAR10)
                {
                    VAR14 = FUN5(VAR32);
                    goto VAR33;
                }
                VAR6 = FUN2(VAR7, VAR10, NULL);
                if (VAR6 != VAR25)
                {
                    FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                    VAR14 = VAR28;
                    goto VAR33;
                }
                VAR13 = 0;
                if (VAR2->VAR29.VAR30 >= 0)
                {
                    VAR13 = VAR2->VAR29.VAR30;
                }
                while (VAR13 < VAR7)
                {
                    VAR6 = FUN7(VAR10[VAR13], VAR34, sizeof(VAR12), VAR12, NULL);
                    if (VAR6 != VAR25)
                    {
                        FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                        VAR14 = VAR28;
                        goto VAR33;
                    }
                    VAR2->VAR20 = VAR10[VAR13];
                    VAR6 = FUN8(VAR2->VAR20, VAR16, 0, NULL, &VAR8);
                    if (VAR6 != VAR25)
                    {
                        FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                        VAR14 = VAR28;
                        goto VAR33;
                    }
                    if (VAR8 == 0)
                    {
                        VAR6 = FUN8(VAR2->VAR20, VAR17, 0, NULL, &VAR8);
                    }
                    if (VAR6 != VAR25)
                    {
                        FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                        VAR14 = FUN5(VAR31);
                        goto VAR33;
                    }
                    if (VAR8)
                        break;
                    if (VAR2->VAR29.VAR30 >= 0)
                    {
                        FUN3(&VAR26, VAR27, "");
                        VAR14 = VAR28;
                        goto VAR33;
                    }
                    VAR13++;
                }
            }
            if (!VAR2->VAR20)
            {
                FUN3(&VAR26, VAR27, "");
                VAR14 = VAR28;
                goto VAR33;
            }
            if (VAR2->VAR29.VAR35 >= 0)
            {
                if (VAR8 < VAR2->VAR29.VAR35 + 1)
                {
                    FUN3(&VAR26, VAR27, "");
                    VAR14 = FUN5(VAR31);
                    goto VAR33;
                }
            }
            FUN3(&VAR26, VAR36, "", VAR12);
            VAR11[0] = VAR37;
            VAR11[1] = (VAR38)VAR2->VAR20;
            VAR11[2] = 0;
            for (VAR13 = 0; VAR13 < sizeof(VAR15); VAR13++)
            {
                VAR2->VAR15 = VAR15[VAR13];
                VAR2->VAR22 = FUN9(VAR11, VAR2->VAR15, NULL, NULL, &VAR6);
                if (VAR6 != VAR25)
                {
                    FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                    VAR14 = VAR28;
                    goto VAR33;
                }
                if (VAR2->VAR22)
                    break;
            }
            if (!VAR2->VAR22)
            {
                FUN3(&VAR26, VAR27, "");
                VAR14 = VAR28;
                goto VAR33;
            }
            VAR6 = FUN10(VAR2->VAR22, VAR39, 0, NULL, &VAR5);
            if (VAR6 != VAR25)
            {
                FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                VAR14 = VAR28;
                goto VAR33;
            }
            if (VAR5 == 0)
            {
                FUN3(&VAR26, VAR27, "");
                VAR14 = VAR28;
                goto VAR33;
            }
            VAR2->VAR23 = FUN6(VAR5);
            if (!VAR2->VAR23)
            {
                VAR14 = FUN5(VAR32);
                goto VAR33;
            }
            VAR6 = FUN10(VAR2->VAR22, VAR39, VAR5, VAR2->VAR23, NULL);
            if (VAR6 != VAR25)
            {
                FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                VAR14 = VAR28;
                goto VAR33;
            }
            VAR13 = 0;
            if (VAR2->VAR29.VAR35 >= 0)
            {
                VAR13 = VAR2->VAR29.VAR35;
            }
            VAR2->VAR21 = FUN11(VAR2->VAR22, VAR2->VAR23[VAR13], 0, &VAR6);
            if (VAR6 != VAR25)
            {
                FUN3(&VAR26, VAR27, "", FUN4(VAR6));
                VAR14 = VAR28;
                goto VAR33;
            }
        }
    }
VAR33:
    FUN12(VAR10);
    return VAR14;
}
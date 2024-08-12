static const char *FUN1(VAR1 *VAR2, const char *VAR3)
{
    const VAR4 *VAR5 = &VAR6[VAR2->VAR7];
    int *VAR8 = &VAR2->VAR9[VAR2->VAR7];
    int *VAR10 = VAR2->VAR11[VAR2->VAR7];
    int *VAR12, VAR13, VAR14;
    while (VAR3 && *VAR3)
    {
        if (VAR3[0] == '')
        {
            VAR2->VAR7 = -1;
            break;
        }
        if (VAR3[0] == '' || (VAR3[0] == '' && VAR3[1] == ''))
        {
        }
        else if (VAR5->VAR15 && !VAR10)
        {
            VAR14 = strlen(VAR5->VAR15);
            if (FUN2(VAR3, VAR5->VAR15, VAR14) || VAR3[VAR14] != '')
                return NULL;
            VAR3 += VAR14 + 1;
            while (!FUN3(*VAR3))
            {
                VAR3 = FUN4(VAR3);
                VAR14 = strcspn(VAR3, "");
                if (!(VAR12 = FUN5(VAR10, (*VAR8 + 1) * sizeof(*VAR10))))
                    return NULL;
                VAR10 = VAR12;
                VAR10[*VAR8] = -1;
                for (VAR13 = 0; VAR5->VAR16[VAR13].VAR17; VAR13++)
                    if (!FUN2(VAR3, VAR5->VAR16[VAR13].VAR17, VAR14))
                    {
                        VAR10[*VAR8] = VAR13;
                        break;
                    }
                (*VAR8)++;
                VAR3 = FUN4(VAR3 + VAR14 + (VAR3[VAR14] == ''));
            }
            VAR2->VAR11[VAR2->VAR7] = VAR10;
        }
        else if (VAR5->VAR18)
        {
            VAR14 = strlen(VAR5->VAR18);
            if (!FUN2(VAR3, VAR5->VAR18, VAR14) && VAR3[VAR14] == '')
            {
                VAR19 *VAR20, *VAR21 = FUN6(VAR2);
                if (!VAR21)
                    return NULL;
                VAR3 += VAR14 + 1;
                for (VAR13 = 0; !FUN3(*VAR3) && VAR13 < *VAR8; VAR13++)
                {
                    int VAR22 = VAR13 == *VAR8 - 1;
                    VAR3 = FUN4(VAR3);
                    VAR14 = strcspn(VAR3, VAR22 ? "" : "");
                    if (VAR10[VAR13] >= 0)
                    {
                        ASSFieldType VAR23 = VAR5->VAR16[VAR10[VAR13]].VAR23;
                        VAR20 = VAR21 + VAR5->VAR16[VAR10[VAR13]].VAR24;
                        VAR25[VAR23](VAR20, VAR3, VAR14);
                    }
                    VAR3 += VAR14;
                    if (!VAR22 && *VAR3)
                        VAR3++;
                    VAR3 = FUN4(VAR3);
                }
            }
        }
        else
        {
            VAR14 = strcspn(VAR3, "");
            if (VAR3[VAR14] == '')
            {
                for (VAR13 = 0; VAR5->VAR16[VAR13].VAR17; VAR13++)
                    if (!FUN2(VAR3, VAR5->VAR16[VAR13].VAR17, VAR14))
                    {
                        ASSFieldType VAR23 = VAR5->VAR16[VAR13].VAR23;
                        VAR19 *VAR20 = (VAR19 *)&VAR2->VAR26 + VAR5->VAR24;
                        VAR20 += VAR5->VAR16[VAR13].VAR24;
                        VAR3 = FUN4(VAR3 + VAR14 + 1);
                        VAR25[VAR23](VAR20, VAR3, strcspn(VAR3, ""));
                        break;
                    }
            }
        }
        VAR3 += strcspn(VAR3, "");
        VAR3 += !!*VAR3;
    }
    return VAR3;
}
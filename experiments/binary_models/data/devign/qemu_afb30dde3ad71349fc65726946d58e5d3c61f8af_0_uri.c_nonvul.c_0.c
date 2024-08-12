FUN1(const char *VAR1, const char *VAR2)
{
    char *VAR3 = NULL;
    int VAR4;
    int VAR5;
    int VAR6 = 0;
    int VAR7 = 0;
    int VAR8;
    VAR9 *VAR10 = NULL;
    VAR9 *VAR11 = NULL;
    char *VAR12, *VAR13, *VAR14;
    int VAR15 = 0;
    if ((VAR1 == NULL) || (*VAR1 == 0))
        return NULL;
    VAR10 = FUN2();
    if (VAR1[0] != '')
    {
        VAR4 = FUN3(VAR10, VAR1);
        if (VAR4 != 0)
            goto VAR16;
    }
    else
        VAR10->VAR17 = FUN4(VAR1);
    if ((VAR2 == NULL) || (*VAR2 == 0))
    {
        VAR3 = FUN4(VAR1);
        goto VAR16;
    }
    VAR11 = FUN2();
    if (VAR2[0] != '')
    {
        VAR4 = FUN3(VAR11, VAR2);
        if (VAR4 != 0)
            goto VAR16;
    }
    else
        VAR11->VAR17 = FUN4(VAR2);
    if ((VAR10->VAR18 != NULL) && ((VAR11->VAR18 == NULL) || (strcmp(VAR11->VAR18, VAR10->VAR18)) || (strcmp(VAR11->VAR19, VAR10->VAR19))))
    {
        VAR3 = FUN4(VAR1);
        goto VAR16;
    }
    if (VAR11->VAR17 == VAR10->VAR17 || (VAR11->VAR17 && VAR10->VAR17 && !strcmp(VAR11->VAR17, VAR10->VAR17)))
    {
        VAR3 = FUN4("");
        goto VAR16;
    }
    if (VAR11->VAR17 == NULL)
    {
        VAR3 = FUN4(VAR10->VAR17);
        goto VAR16;
    }
    if (VAR10->VAR17 == NULL)
    {
        VAR10->VAR17 = (char *)"";
        VAR15 = 1;
    }
    if (VAR11->VAR17 == NULL)
    {
        if (VAR10->VAR17 != NULL)
        {
            VAR13 = VAR10->VAR17;
            if (*VAR13 == '')
                VAR13++;
            VAR3 = FUN5(VAR13, "");
        }
        goto VAR16;
    }
    VAR12 = VAR11->VAR17;
    if (VAR10->VAR17 == NULL)
    {
        for (VAR5 = 0; VAR12[VAR5] != 0; VAR5++)
        {
            if (VAR12[VAR5] == '')
                VAR7++;
        }
        VAR13 = NULL;
        VAR8 = 1;
    }
    else
    {
        if ((VAR10->VAR17[VAR6] == '') && (VAR10->VAR17[VAR6 + 1] == ''))
            VAR6 += 2;
        if ((*VAR12 == '') && (VAR12[1] == ''))
            VAR12 += 2;
        else if ((*VAR12 == '') && (VAR10->VAR17[VAR6] != ''))
            VAR12++;
        while ((VAR12[VAR6] == VAR10->VAR17[VAR6]) && (VAR12[VAR6] != 0))
            VAR6++;
        if (VAR12[VAR6] == VAR10->VAR17[VAR6])
        {
            VAR3 = FUN4("");
            goto VAR16;
        }
        VAR5 = VAR6;
        if ((VAR10->VAR17[VAR5] == '') && (VAR5 > 0))
            VAR5--;
        else if ((VAR10->VAR17[VAR5] == 0) && (VAR5 > 1) && (VAR10->VAR17[VAR5 - 1] == ''))
            VAR5 -= 2;
        for (; VAR5 > 0; VAR5--)
        {
            if (VAR10->VAR17[VAR5] == '')
                break;
        }
        if (VAR5 == 0)
        {
            VAR13 = VAR10->VAR17;
        }
        else
        {
            VAR5++;
            VAR13 = &VAR10->VAR17[VAR5];
        }
        if (VAR12[VAR6] != VAR10->VAR17[VAR6])
        {
            for (; VAR12[VAR5] != 0; VAR5++)
            {
                if (VAR12[VAR5] == '')
                    VAR7++;
            }
        }
        VAR8 = strlen(VAR13) + 1;
    }
    if (VAR7 == 0)
    {
        if (VAR13 != NULL)
            VAR3 = FUN5(VAR13, "");
        goto VAR16;
    }
    VAR3 = FUN6(VAR8 + 3 * VAR7);
    VAR14 = VAR3;
    for (; VAR7 > 0; VAR7--)
    {
        *VAR14++ = '';
        *VAR14++ = '';
        *VAR14++ = '';
    }
    if (VAR13 != NULL)
    {
        if ((VAR14 > VAR3) && (VAR8 > 0) && (VAR13[0] == '') && (VAR14[-1] == ''))
        {
            memcpy(VAR14, VAR13 + 1, VAR8 - 1);
            VAR14[VAR8 - 2] = 0;
        }
        else
        {
            memcpy(VAR14, VAR13, VAR8);
            VAR14[VAR8 - 1] = 0;
        }
    }
    else
    {
        VAR14[VAR8 - 1] = 0;
    }
    VAR14 = VAR3;
    VAR3 = FUN5(VAR14, "");
    FUN7(VAR14);
VAR16:
    if (VAR15 != 0)
        VAR10->VAR17 = NULL;
    if (VAR10 != NULL)
        FUN8(VAR10);
    if (VAR11 != NULL)
        FUN8(VAR11);
    return VAR3;
}
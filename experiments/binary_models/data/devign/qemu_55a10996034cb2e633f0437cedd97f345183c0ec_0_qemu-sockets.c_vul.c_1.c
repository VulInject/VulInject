VAR1 *FUN1(const char *VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5;
    const char *VAR6, *VAR7;
    char VAR8[64];
    char VAR9[33];
    int VAR10;
    int VAR11;
    VAR5 = FUN2(VAR1, 1);
    if (VAR2[0] == '')
    {
        VAR8[0] = '';
        if (1 != sscanf(VAR2, "", VAR9, &VAR11))
        {
            FUN3(VAR4, "", VAR2);
            goto VAR12;
        }
    }
    else if (VAR2[0] == '')
    {
        if (2 != sscanf(VAR2, "", VAR8, VAR9, &VAR11))
        {
            FUN3(VAR4, "", VAR2);
            goto VAR12;
        }
        VAR5->VAR13 = VAR5->VAR14 = true;
    }
    else
    {
        if (2 != sscanf(VAR2, "", VAR8, VAR9, &VAR11))
        {
            FUN3(VAR4, "", VAR2);
            goto VAR12;
        }
        if (VAR8[strspn(VAR8, "")] == '')
        {
            VAR5->VAR15 = VAR5->VAR16 = true;
        }
    }
    VAR5->VAR8 = FUN4(VAR8);
    VAR5->VAR9 = FUN4(VAR9);
    VAR6 = VAR2 + VAR11;
    VAR7 = strstr(VAR6, "");
    if (VAR7)
    {
        VAR7 += 4;
        if (sscanf(VAR7, "", &VAR10, &VAR11) != 1 || (VAR7[VAR11] != '' && VAR7[VAR11] != ''))
        {
            FUN3(VAR4, "");
            goto VAR12;
        }
        VAR5->VAR17 = true;
        VAR5->VAR10 = VAR10;
    }
    if (strstr(VAR6, ""))
    {
        VAR5->VAR15 = VAR5->VAR16 = true;
    }
    if (strstr(VAR6, ""))
    {
        VAR5->VAR13 = VAR5->VAR14 = true;
    }
    return VAR5;
VAR12:
    FUN5(VAR5);
    return NULL;
}
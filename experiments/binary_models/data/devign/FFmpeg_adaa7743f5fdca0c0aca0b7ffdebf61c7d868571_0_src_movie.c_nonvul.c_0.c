static VAR1 *FUN1(void *VAR2, VAR3 *VAR4, const char *VAR5)
{
    int VAR6, VAR7, VAR8 = 0, VAR9 = -1;
    char VAR10[2], VAR11;
    VAR1 *VAR12 = NULL;
    enum AVMediaType VAR13;
    VAR7 = sscanf(VAR5, "", VAR10, &VAR9, &VAR11);
    if (VAR7 >= 1 && VAR7 <= 2)
    {
        VAR13 = VAR10[0] == '' ? VAR14 : VAR15;
        VAR7 = FUN2(VAR4, VAR13, VAR9, -1, NULL, 0);
        if (VAR7 < 0)
        {
            FUN3(VAR2, VAR16, "", FUN4(VAR13), VAR9);
            return NULL;
        }
        return VAR4->VAR17[VAR7];
    }
    for (VAR6 = 0; VAR6 < VAR4->VAR18; VAR6++)
    {
        VAR7 = FUN5(VAR4, VAR4->VAR17[VAR6], VAR5);
        if (VAR7 < 0)
        {
            FUN3(VAR2, VAR16, ""%VAR19\"", VAR5);
            return NULL;
        }
        if (!VAR7)
            continue;
        if (VAR4->VAR17[VAR6]->VAR20 != VAR21)
        {
            VAR8++;
            continue;
        }
        if (VAR12)
        {
            FUN3(VAR2, VAR22, ""%VAR19\"", VAR5, VAR6);
            break;
        }
        VAR12 = VAR4->VAR17[VAR6];
    }
    if (!VAR12)
    {
        FUN3(VAR2, VAR22, ""%VAR19\"", VAR5, VAR8 ? "" : "");
        return NULL;
    }
    if (VAR12->VAR23->VAR24 != VAR14 && VAR12->VAR23->VAR24 != VAR15)
    {
        FUN3(VAR2, VAR16, ""%VAR19\""
                                  "",
               VAR5, FUN4(VAR12->VAR23->VAR24));
        return NULL;
    }
    return VAR12;
}
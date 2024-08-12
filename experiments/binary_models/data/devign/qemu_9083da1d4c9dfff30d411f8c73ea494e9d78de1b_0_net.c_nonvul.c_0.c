VAR1 *FUN1(bool VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR1 *VAR8 = NULL, *VAR9 = NULL;
    FUN2(VAR7, &VAR10, VAR11)
    {
        VAR1 *VAR12;
        VAR13 *VAR14;
        if (VAR2 && strcmp(VAR7->VAR3, VAR3) != 0)
        {
            continue;
        }
        if (VAR7->VAR14->VAR15 != VAR16)
        {
            if (VAR2)
            {
                FUN3(VAR5, "", VAR3);
                return NULL;
            }
            continue;
        }
        if (VAR7->VAR14->VAR17)
        {
            VAR14 = VAR7->VAR14->FUN4(VAR7);
            VAR12 = FUN5(sizeof(*VAR12));
            VAR12->VAR18 = VAR14;
            if (!VAR8)
            {
                VAR8 = VAR12;
            }
            else
            {
                VAR9->VAR11 = VAR12;
            }
            VAR9 = VAR12;
        }
        else if (VAR2)
        {
            FUN3(VAR5, ""
                             "",
                       VAR3);
            return NULL;
        }
        if (VAR2)
        {
            break;
        }
    }
    if (VAR8 == NULL && VAR2)
    {
        FUN3(VAR5, "", VAR3);
    }
    return VAR8;
}
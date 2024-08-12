char *FUN1(struct VAR1 *VAR2, VAR3 **VAR4)
{
    char *VAR5;
    VAR6 *VAR7;
    char VAR8[VAR9 + 5 + 4];
    switch (VAR2->VAR10)
    {
    case VAR11:
        VAR7 = VAR2->VAR12.VAR7.VAR13;
        if (strchr(VAR7->VAR14, '') == NULL)
        {
            snprintf(VAR8, sizeof(VAR8), "", VAR7->VAR14, VAR7->VAR15);
            VAR5 = FUN2(VAR8);
        }
        else
        {
            snprintf(VAR8, sizeof(VAR8), "", VAR7->VAR14, VAR7->VAR15);
            VAR5 = FUN2(VAR8);
        }
        break;
    case VAR16:
        VAR5 = FUN2(VAR2->VAR12.VAR17.VAR13->VAR18);
        break;
    case VAR19:
        VAR5 = FUN2(VAR2->VAR12.VAR20.VAR13->VAR21);
        break;
    case VAR22:
        VAR5 = FUN3("", VAR2->VAR12.VAR23.VAR13->VAR24, VAR2->VAR12.VAR23.VAR13->VAR15);
        break;
    default:
        FUN4(VAR4, "", VAR2->VAR10);
        return NULL;
    }
    return VAR5;
}
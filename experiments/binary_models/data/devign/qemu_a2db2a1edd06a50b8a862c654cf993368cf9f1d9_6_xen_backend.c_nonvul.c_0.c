static struct VAR1 *FUN1(const char *VAR2, int VAR3, int VAR4, struct VAR5 *VAR6)
{
    struct VAR1 *VAR7;
    VAR7 = FUN2(VAR2, VAR3, VAR4);
    if (VAR7)
    {
        return VAR7;
    }
    VAR7 = FUN3(VAR6->VAR8);
    VAR7->VAR2 = VAR2;
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    VAR7->VAR6 = VAR6;
    snprintf(VAR7->VAR9, sizeof(VAR7->VAR9), "", VAR7->VAR2, VAR7->VAR3, VAR7->VAR4);
    snprintf(VAR7->VAR10, sizeof(VAR7->VAR10), "", VAR7->VAR2, VAR7->VAR4);
    VAR7->VAR11 = VAR11;
    VAR7->VAR12 = -1;
    VAR7->VAR13 = FUN4(NULL, 0);
    if (VAR7->VAR13 == NULL)
    {
        FUN5(NULL, 0, "");
        FUN6(VAR7);
        return NULL;
    }
    FUN7(FUN8(VAR7->VAR13), VAR14, VAR15);
    if (VAR6->VAR16 & VAR17)
    {
        VAR7->VAR18 = FUN9(NULL, 0);
        if (VAR7->VAR18 == VAR19)
        {
            FUN5(NULL, 0, "");
            FUN10(VAR7->VAR13);
            FUN6(VAR7);
            return NULL;
        }
    }
    else
    {
        VAR7->VAR18 = VAR19;
    }
    FUN11(&VAR20, VAR7, VAR21);
    if (VAR7->VAR6->VAR22)
    {
        VAR7->VAR6->FUN12(VAR7);
    }
    return VAR7;
}
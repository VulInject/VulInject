static struct VAR1 *FUN1(const char *VAR2, int VAR3, int VAR4, struct VAR5 *VAR6)
{
    struct VAR1 *VAR7;
    char *VAR8;
    VAR7 = FUN2(VAR2, VAR3, VAR4);
    if (VAR7)
    {
        return VAR7;
    }
    VAR7 = FUN3(VAR6->VAR9);
    VAR7->VAR2 = VAR2;
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    VAR7->VAR6 = VAR6;
    VAR8 = FUN4(VAR10, 0);
    snprintf(VAR7->VAR11, sizeof(VAR7->VAR11), "", VAR8, VAR7->VAR2, VAR7->VAR3, VAR7->VAR4);
    snprintf(VAR7->VAR12, sizeof(VAR7->VAR12), "", VAR7->VAR2, VAR7->VAR4);
    free(VAR8);
    VAR7->VAR13 = VAR13;
    VAR7->VAR14 = -1;
    VAR7->VAR15 = FUN5(NULL, 0);
    if (VAR7->VAR15 == VAR16)
    {
        FUN6(NULL, 0, "");
        FUN7(VAR7);
        return NULL;
    }
    FUN8(FUN9(VAR7->VAR15), VAR17, VAR18);
    if (VAR6->VAR19 & VAR20)
    {
        VAR7->VAR21 = FUN10(NULL, 0);
        if (VAR7->VAR21 == VAR16)
        {
            FUN6(NULL, 0, "");
            FUN11(VAR7->VAR15);
            FUN7(VAR7);
            return NULL;
        }
    }
    else
    {
        VAR7->VAR21 = VAR16;
    }
    FUN12(&VAR22, VAR7, VAR23);
    if (VAR7->VAR6->VAR24)
    {
        VAR7->VAR6->FUN13(VAR7);
    }
    return VAR7;
}
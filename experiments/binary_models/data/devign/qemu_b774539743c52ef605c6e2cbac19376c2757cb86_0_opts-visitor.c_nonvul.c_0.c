FUN1(VAR1 *VAR2, void **VAR3, const char *VAR4, const char *VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR9, VAR11, VAR2);
    const VAR12 *VAR13;
    if (VAR3)
    {
        *VAR3 = FUN3(VAR6 > 0 ? VAR6 : 1);
    }
    if (VAR10->VAR14++ > 0)
    {
        return;
    }
    VAR10->VAR15 = FUN4(&VAR16, &VAR17, NULL, &VAR18);
    FUN5(VAR13, &VAR10->VAR19->VAR20, VAR21)
    {
        assert(strcmp(VAR13->VAR5, "") != 0);
        FUN6(VAR10->VAR15, VAR13);
    }
    if (VAR10->VAR19->VAR22 != NULL)
    {
        VAR10->VAR23 = FUN3(sizeof *VAR10->VAR23);
        VAR10->VAR23->VAR5 = "";
        VAR10->VAR23->VAR24 = VAR10->VAR19->VAR22;
        FUN6(VAR10->VAR15, VAR10->VAR23);
    }
}
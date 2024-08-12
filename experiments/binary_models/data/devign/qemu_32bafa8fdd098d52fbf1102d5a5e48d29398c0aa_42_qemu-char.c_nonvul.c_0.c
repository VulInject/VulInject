static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR10.VAR12;
    VAR13 *VAR14 = FUN2(VAR10);
    HANDLE VAR15;
    if (VAR10->VAR16)
    {
        FUN3(VAR8, "");
        return NULL;
    }
    VAR15 = FUN4(VAR10->VAR15, VAR17, VAR18, NULL, VAR19, VAR20, NULL);
    if (VAR15 == VAR21)
    {
        FUN3(VAR8, "", VAR10->VAR15);
        return NULL;
    }
    return FUN5(VAR15, VAR14, VAR8);
}
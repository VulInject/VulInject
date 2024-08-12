static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    const char *VAR9 = VAR4->VAR10.VAR11->VAR12;
    VAR1 *VAR13;
    VAR14 *VAR15;
    if (VAR9 == NULL)
    {
        fprintf(VAR16, "");
        return NULL;
    }
    VAR13 = FUN2("", VAR17);
    VAR15 = VAR13->VAR18;
    VAR15->VAR19.VAR20 = FUN3(VAR9);
    return VAR13;
}
static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR4->VAR11.VAR12);
    VAR1 *VAR13;
    VAR13 = FUN3(VAR10, VAR8);
    if (!VAR13)
    {
        return NULL;
    }
    VAR13->VAR14 = VAR15;
    VAR13->VAR16 = VAR17;
    VAR13->VAR18 = true;
    FUN4(VAR19, VAR13, 0, "");
    return VAR13;
}
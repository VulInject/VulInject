static VAR1 *FUN1(int VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    if (FUN2(VAR2, VAR10) < 0)
    {
        FUN3(VAR6, VAR11, "");
        close(VAR2);
        return NULL;
    }
    VAR9 = FUN4(VAR8, 1);
    VAR9->VAR2 = VAR2;
    VAR9->VAR12 = VAR13;
    VAR7 = FUN5(VAR4, VAR6);
    if (!VAR7)
    {
        return NULL;
    }
    VAR7->VAR14 = VAR15;
    VAR7->VAR16 = VAR17;
    VAR7->VAR18 = VAR19;
    VAR7->VAR20 = VAR9;
    return VAR7;
}
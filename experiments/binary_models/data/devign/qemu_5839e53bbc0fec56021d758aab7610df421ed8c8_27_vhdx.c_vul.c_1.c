static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5 = 0;
    VAR6 *VAR7 = NULL;
    VAR7 = FUN2(sizeof(VAR6));
    VAR7->VAR8 = VAR9;
    VAR7->VAR10 = FUN3();
    VAR7->VAR11 = 0;
    VAR7->VAR12 = 1;
    VAR7->VAR13 = VAR4;
    VAR7->VAR14 = VAR15;
    FUN4(&VAR7->VAR16);
    FUN4(&VAR7->VAR17);
    VAR5 = FUN5(VAR2, VAR7, VAR18, false);
    if (VAR5 < 0)
    {
        goto VAR19;
    }
    VAR7->VAR10++;
    VAR5 = FUN5(VAR2, VAR7, VAR20, false);
    if (VAR5 < 0)
    {
        goto VAR19;
    }
VAR19:
    FUN6(VAR7);
    return VAR5;
}
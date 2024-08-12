int FUN1(VAR1 *VAR2, const char *VAR3)
{
    cl_int VAR4;
    int VAR5, VAR6 = 0;
    VAR7;
    if (strlen(VAR3) + 1 > VAR8)
    {
        FUN2(&VAR9, VAR10, "", VAR3);
        VAR6 = FUN3(VAR11);
        goto VAR12;
    }
    if (!VAR2->VAR13)
    {
        if (VAR14.VAR15 >= VAR16)
        {
            FUN2(&VAR9, VAR10, "", VAR3, VAR16);
            VAR6 = FUN3(VAR11);
            goto VAR12;
        }
        for (VAR5 = 0; VAR5 < VAR14.VAR17; VAR5++)
        {
            VAR2->VAR13 = FUN4(VAR14.VAR18[VAR5], VAR3, &VAR4);
            if (VAR4 == VAR19)
                break;
        }
        if (VAR4 != VAR19)
        {
            FUN2(&VAR9, VAR10, "", FUN5(VAR4));
            VAR6 = VAR20;
            goto VAR12;
        }
        VAR14.VAR15++;
        VAR2->VAR21 = VAR14.VAR21;
        FUN6(VAR2->VAR3, VAR3, sizeof(VAR2->VAR3));
    }
VAR12:
    VAR22;
    return VAR6;
}
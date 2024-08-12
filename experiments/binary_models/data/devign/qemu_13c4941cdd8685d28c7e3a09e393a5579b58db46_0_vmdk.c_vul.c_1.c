static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    int VAR8, VAR9;
    VAR8 = VAR4->VAR8 * sizeof(VAR10);
    VAR4->VAR11 = FUN2(VAR8);
    if (VAR8 && VAR4->VAR11 == NULL)
    {
        return -VAR12;
    }
    VAR7 = FUN3(VAR4->VAR13, VAR4->VAR14, VAR4->VAR11, VAR8);
    if (VAR7 < 0)
    {
        FUN4(VAR6, -VAR7, "", VAR4->VAR13->VAR15);
        goto VAR16;
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR8; VAR9++)
    {
        FUN5(&VAR4->VAR11[VAR9]);
    }
    if (VAR4->VAR17)
    {
        VAR4->VAR18 = FUN2(VAR8);
        if (VAR8 && VAR4->VAR18 == NULL)
        {
            VAR7 = -VAR12;
            goto VAR16;
        }
        VAR7 = FUN3(VAR4->VAR13, VAR4->VAR17, VAR4->VAR18, VAR8);
        if (VAR7 < 0)
        {
            FUN4(VAR6, -VAR7, "", VAR4->VAR13->VAR15);
            goto VAR19;
        }
        for (VAR9 = 0; VAR9 < VAR4->VAR8; VAR9++)
        {
            FUN5(&VAR4->VAR18[VAR9]);
        }
    }
    VAR4->VAR20 = FUN6(VAR10, VAR4->VAR21 * VAR22);
    return 0;
VAR19:
    FUN7(VAR4->VAR18);
VAR16:
    FUN7(VAR4->VAR11);
    return VAR7;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    int VAR13, VAR14, VAR15 = 0;
    if (VAR5 < 2 * VAR8->VAR16)
    {
        FUN2(VAR2, VAR17, "");
        return -1;
    }
VAR18:
    FUN3(VAR11, VAR4, VAR5);
    if (VAR8->VAR19 == 0 || VAR15)
    {
        const VAR20 *VAR21 = VAR6;
        FUN4(VAR8, 1);
        for (VAR13 = 0; VAR13 < VAR2->VAR22 * VAR2->VAR23; VAR13++)
        {
            FUN5(VAR11, 16, *VAR21++);
        }
    }
    else
    {
        FUN6(VAR8, VAR6);
        FUN4(VAR8, 0);
        FUN7(VAR8);
    }
    FUN8(VAR11, 3, 7);
    FUN9(VAR11);
    VAR14 = FUN10(VAR11) >> 3;
    if (VAR14 > VAR8->VAR16)
    {
        if (VAR15 || VAR8->VAR19 == 0)
        {
            FUN2(VAR2, VAR17, "");
            return -1;
        }
        VAR15 = 1;
        goto VAR18;
    }
    return VAR14;
}
static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4);
    int VAR8;
    FUN3(VAR4, NULL, VAR9);
    VAR8 = FUN4(VAR2);
    if (VAR8)
    {
        goto VAR10;
    }
    FUN5(&VAR6->VAR11, "", FUN6(VAR2));
    VAR8 = FUN7(VAR2, &VAR4->VAR12, &VAR6->VAR11, 0);
    if (VAR8)
    {
        goto VAR13;
    }
    VAR8 = FUN8(VAR2, 0, VAR6->VAR14, 0);
    if (VAR8)
    {
        goto VAR15;
    }
    if ((VAR6->VAR16 & (1 << VAR17)) && VAR18)
    {
        VAR8 = FUN9(VAR2, 0, 1, true, true);
        if (VAR8 < 0)
        {
            goto VAR19;
        }
    }
    FUN10(VAR2, 0, VAR20 | VAR21, &VAR6->VAR11);
    VAR2->VAR22[VAR23] = 0x1;
    return 0;
VAR19:
    FUN11(VAR2);
VAR15:
    FUN12(VAR2, &VAR6->VAR11);
VAR13:
    FUN13(&VAR6->VAR11);
VAR10:
    return VAR8;
}
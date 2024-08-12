static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    if (FUN2(VAR2, VAR2->VAR8, VAR3) == 0)
    {
        VAR6->VAR9 = 0x200;
    }
    else
    {
        VAR4 = FUN3(VAR2, VAR3, 0);
        if (VAR4)
        {
            goto VAR10;
        }
    }
    VAR4 = FUN4(VAR2);
    if (VAR4)
    {
        goto VAR10;
    }
    VAR6->VAR11 = FUN5(VAR2, 1);
    FUN6(&VAR6->VAR12);
    FUN7(&VAR6->VAR13, VAR14, "", VAR2->VAR15, "");
    FUN8(VAR6->VAR13);
    return 0;
VAR10:
    FUN9(VAR2);
    return VAR4;
}
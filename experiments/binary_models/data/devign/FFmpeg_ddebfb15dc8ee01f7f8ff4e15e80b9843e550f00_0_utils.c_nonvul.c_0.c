int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = -1;
    VAR6++;
    if (VAR6 != 1)
    {
        FUN2(VAR2, VAR7, "");
        goto VAR8;
    }
    if (VAR2->VAR4)
        goto VAR8;
    VAR2->VAR4 = VAR4;
    VAR2->VAR9 = VAR4->VAR10;
    VAR2->VAR11 = 0;
    if (VAR4->VAR12 > 0)
    {
        VAR2->VAR13 = FUN3(VAR4->VAR12);
        if (!VAR2->VAR13)
            goto VAR8;
    }
    else
    {
        VAR2->VAR13 = NULL;
    }
    if (VAR2->VAR14 && VAR2->VAR15)
        FUN4(VAR2, VAR2->VAR14, VAR2->VAR15);
    else if (VAR2->VAR16 && VAR2->VAR17)
        FUN4(VAR2, VAR2->VAR16, VAR2->VAR17);
    if ((VAR2->VAR14 || VAR2->VAR15) && FUN5(VAR2, VAR2->VAR14, VAR2->VAR15))
    {
        FUN6(&VAR2->VAR13);
        goto VAR8;
    }
    VAR5 = VAR2->VAR4->FUN7(VAR2);
    if (VAR5 < 0)
    {
        FUN6(&VAR2->VAR13);
        goto VAR8;
    }
    VAR5 = 0;
VAR8:
    VAR6--;
    return VAR5;
}
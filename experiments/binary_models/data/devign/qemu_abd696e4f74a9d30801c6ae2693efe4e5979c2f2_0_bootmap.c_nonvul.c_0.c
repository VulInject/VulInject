static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    struct VAR5 *VAR6;
    uint8_t VAR7[VAR8];
    FUN2(VAR2->VAR9, VAR7);
    VAR4 = (struct VAR3 *)VAR7;
    if (!FUN3(VAR7))
    {
        goto VAR10;
    }
    if (VAR4->VAR11 != VAR12)
    {
        goto VAR10;
    }
    FUN4("");
    VAR6 = (struct VAR5 *)(&VAR4[1]);
    while (VAR6->VAR13 == VAR14)
    {
        if (FUN5(VAR6) < 0)
        {
            goto VAR10;
        }
        VAR6++;
        if ((VAR15 *)(&VAR6[1]) > (VAR7 + VAR8))
        {
            goto VAR10;
        }
    }
    if (VAR6->VAR13 != VAR16)
    {
        goto VAR10;
    }
    FUN6(VAR6->VAR17);
    return 0;
VAR10:
    FUN7("");
    return -1;
}
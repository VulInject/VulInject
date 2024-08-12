static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = FUN4(VAR7, VAR9, VAR2->VAR10);
    if (!VAR4->VAR11.VAR12)
    {
        FUN5("");
        goto VAR13;
    }
    if (VAR4->VAR14 == -1)
    {
        VAR4->VAR14 = VAR8->VAR15 ? 1 : 0;
    }
    if (VAR4->VAR14 >= VAR8->VAR16)
    {
        FUN5("", VAR4->VAR14, VAR8->VAR16);
        goto VAR13;
    }
    switch (VAR4->VAR14)
    {
    case 0:
        if (VAR8->VAR15)
        {
            FUN5("", VAR4->VAR14);
            goto VAR13;
        }
        VAR8->VAR15 = VAR4;
        break;
    case 1:
        if (VAR8->VAR17)
        {
            FUN5("", VAR4->VAR14);
            goto VAR13;
        }
        VAR8->VAR17 = VAR4;
        break;
    default:
        FUN5("", VAR4->VAR14);
        goto VAR13;
    }
    return VAR6->FUN6(VAR4);
VAR13:
    return -1;
}
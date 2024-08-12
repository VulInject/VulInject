void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR3;
    FUN2("");
    FUN3("", (long)VAR2);
    FUN3("", VAR2->VAR4);
    if (VAR2->VAR4 < sizeof(struct VAR3))
    {
        goto VAR5;
    }
    VAR3 = FUN4(VAR2, struct VAR3 *);
    if (VAR3->VAR6 != VAR7)
    {
        goto VAR5;
    }
    if (FUN5(VAR3->VAR8) > VAR9)
    {
        FUN6(VAR2, VAR10, 0);
        goto VAR5;
    }
    if (VAR3->VAR11 == 0)
    {
        FUN6(VAR2, VAR12, VAR13);
        goto VAR5;
    }
    switch (VAR3->VAR14)
    {
    case VAR15:
        FUN6(VAR2, VAR16, VAR17);
        break;
    case VAR18:
        FUN6(VAR2, VAR16, VAR17);
        break;
    case VAR19:
        FUN7(VAR2);
        break;
    default:
        FUN8(VAR2);
    }
    return;
VAR5:
    FUN8(VAR2);
}
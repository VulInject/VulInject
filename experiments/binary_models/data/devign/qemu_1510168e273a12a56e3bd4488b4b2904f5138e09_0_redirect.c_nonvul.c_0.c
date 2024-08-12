static int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3.VAR4 == VAR5)
    {
        FUN2("");
        goto VAR6;
    }
    if (VAR2->VAR7)
    {
        if (!FUN3(VAR2->VAR8, VAR9))
        {
            FUN2(""
                  "");
            goto VAR6;
        }
        if (FUN4(VAR2->VAR7, VAR2->VAR10, VAR2->VAR11.VAR12, VAR2->VAR11.VAR13, VAR2->VAR11.VAR14, VAR2->VAR3.VAR15, VAR2->VAR3.VAR16, VAR2->VAR3.VAR17, VAR2->VAR3.VAR4, VAR2->VAR11.VAR18, VAR2->VAR11.VAR19, VAR2->VAR11.VAR20, 0) != 0)
        {
            goto VAR6;
        }
    }
    return 0;
VAR6:
    FUN5(VAR2);
    if (FUN3(VAR2->VAR8, VAR21))
    {
        FUN6(VAR2->VAR8);
        FUN7(VAR2->VAR8);
    }
    return -1;
}
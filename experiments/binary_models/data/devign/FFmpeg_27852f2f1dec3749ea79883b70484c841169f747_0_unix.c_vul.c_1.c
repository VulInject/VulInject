static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    FUN2(VAR3, "", &VAR3);
    VAR6->VAR10.VAR11 = VAR12;
    FUN3(VAR6->VAR10.VAR13, VAR3, sizeof(VAR6->VAR10.VAR13));
    if ((VAR8 = FUN4(VAR12, VAR6->VAR14, 0)) < 0)
        return FUN5();
    if (VAR6->VAR15)
    {
        VAR8 = FUN6(VAR8, (struct VAR16 *)&VAR6->VAR10, sizeof(VAR6->VAR10), VAR6->VAR17, VAR2);
        if (VAR8 < 0)
        {
            VAR9 = VAR8;
            goto VAR18;
        }
    }
    else
    {
        VAR9 = FUN7(VAR8, (struct VAR16 *)&VAR6->VAR10, sizeof(VAR6->VAR10), VAR6->VAR17, VAR2, 0);
        if (VAR9 < 0)
            goto VAR18;
    }
    VAR6->VAR8 = VAR8;
    return 0;
VAR18:
    if (VAR6->VAR15 && FUN8(VAR9) != VAR19)
        unlink(VAR6->VAR10.VAR13);
    if (VAR8 >= 0)
        FUN9(VAR8);
    return VAR9;
}
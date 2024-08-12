static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7;
    int VAR8 = 0;
    if (VAR4->VAR9)
        VAR4->VAR10 %= VAR4->VAR9;
    if (FUN2(VAR6->VAR11, sizeof(VAR6->VAR11), VAR4->VAR12, VAR4->VAR10++) < 0)
    {
        FUN3(VAR6, VAR13, "", VAR4->VAR12);
        return FUN4(VAR14);
    }
    if ((VAR8 = FUN5(&VAR6->VAR15, VAR6->VAR11, VAR16, &VAR2->VAR17, NULL)) < 0)
        return VAR8;
    if (VAR6->VAR18->VAR19 && VAR6->VAR5)
        FUN6(VAR6->VAR5, "", "", 0);
    return 0;
}
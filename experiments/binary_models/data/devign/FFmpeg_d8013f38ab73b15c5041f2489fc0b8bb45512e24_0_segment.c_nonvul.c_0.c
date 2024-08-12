static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7;
    int VAR8 = 0;
    if (VAR4->VAR9)
        VAR4->VAR10 %= VAR4->VAR9;
    if (FUN2(VAR6->VAR11, sizeof(VAR6->VAR11), VAR2->VAR11, VAR4->VAR10++) < 0)
    {
        FUN3(VAR6, VAR12, "", VAR2->VAR11);
        return FUN4(VAR13);
    }
    if ((VAR8 = FUN5(&VAR6->VAR14, VAR6->VAR11, VAR15, &VAR2->VAR16, NULL)) < 0)
        return VAR8;
    if (!VAR6->VAR5 && VAR6->VAR17->VAR18 > 0)
    {
        VAR6->VAR5 = FUN6(VAR6->VAR17->VAR18);
        if (!VAR6->VAR5)
        {
            FUN7(VAR6->VAR14);
            return FUN4(VAR19);
        }
        if (VAR6->VAR17->VAR20)
        {
            *(const VAR21 **)VAR6->VAR5 = VAR6->VAR17->VAR20;
            FUN8(VAR6->VAR5);
        }
    }
    if ((VAR8 = VAR6->VAR17->FUN9(VAR6)) < 0)
    {
        goto VAR22;
    }
    return 0;
VAR22:
    FUN3(VAR6, VAR12, "", VAR6->VAR11);
    FUN7(VAR6->VAR14);
    FUN10(&VAR6->VAR5);
    return VAR8;
}
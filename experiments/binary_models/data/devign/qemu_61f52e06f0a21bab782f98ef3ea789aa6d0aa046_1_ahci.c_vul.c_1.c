static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR2, VAR2);
    VAR6 *VAR7 = &VAR5->VAR8.VAR9[0];
    VAR10 *VAR11 = VAR7->VAR12 + VAR7->VAR13;
    int VAR14 = VAR7->VAR15 - VAR7->VAR13;
    if (FUN3(VAR5, &VAR7->VAR16))
    {
        return 0;
    }
    if (VAR3)
    {
        FUN4(VAR11, VAR14, &VAR7->VAR16);
    }
    else
    {
        FUN5(VAR11, VAR14, &VAR7->VAR16);
    }
    VAR5->VAR17->VAR18 = FUN6(FUN7(VAR5->VAR17->VAR18) + VAR14);
    VAR7->VAR13 += VAR14;
    FUN8(VAR5->VAR19, "", VAR14);
    return 1;
}
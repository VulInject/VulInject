int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7;
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = &VAR9->VAR11;
    if ((FUN3(VAR3[0]) == '') && FUN4(VAR3 + 1, FUN5(VAR11->VAR12), &VAR7))
    {
        *VAR5 = VAR11->VAR12[VAR7];
        return 0;
    }
    if ((FUN3(VAR3[0]) == '') && FUN4(VAR3 + 1, FUN5(VAR11->VAR13), &VAR7))
    {
        *VAR5 = VAR11->VAR13[VAR7];
        return 0;
    }
    for (VAR6 = 0; VAR6 < FUN5(VAR11->VAR14); ++VAR6)
    {
        VAR15 *VAR16 = &VAR11->VAR14[VAR6];
        if (VAR16->VAR3 && (FUN6(VAR3, VAR16->VAR3) == 0))
        {
            *VAR5 = VAR11->VAR16[VAR6];
            return 0;
        }
    }
    if ((FUN7(VAR3, "", 2) == 0) && FUN4(VAR3 + 2, FUN5(VAR11->VAR17), &VAR7))
    {
        *VAR5 = VAR11->VAR17[VAR7];
        return 0;
    }
    return -VAR18;
}
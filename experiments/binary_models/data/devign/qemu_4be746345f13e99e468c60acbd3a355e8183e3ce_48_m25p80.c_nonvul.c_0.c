static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR6->VAR9 = VAR8->VAR9;
    VAR6->VAR10 = VAR6->VAR9->VAR11 * VAR6->VAR9->VAR12;
    VAR6->VAR13 = -1;
    VAR6->VAR14 = FUN4(VAR6->VAR15, VAR6->VAR10);
    VAR4 = FUN5(VAR16);
    if (VAR4)
    {
        FUN6(0, "");
        VAR6->VAR15 = FUN7(VAR4);
        if (FUN8(VAR6->VAR15, 0, VAR6->VAR14, FUN9(VAR6->VAR10, VAR17)))
        {
            fprintf(VAR18, "");
            return 1;
        }
    }
    else
    {
        FUN6(0, "");
        memset(VAR6->VAR14, 0xFF, VAR6->VAR10);
    }
    return 0;
}
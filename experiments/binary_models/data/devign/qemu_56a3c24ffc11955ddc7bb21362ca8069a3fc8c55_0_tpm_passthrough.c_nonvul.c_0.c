static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR4);
    const char *VAR7;
    VAR7 = FUN3(VAR2, "");
    VAR4->VAR8 = FUN4(VAR7);
    VAR7 = FUN3(VAR2, "");
    if (!VAR7)
    {
        VAR7 = VAR9;
    }
    VAR6->VAR10 = FUN4(VAR7);
    VAR4->VAR11 = FUN4(VAR6->VAR10);
    VAR6->VAR12 = FUN5(VAR6->VAR10, VAR13);
    if (VAR6->VAR12 < 0)
    {
        FUN6("", VAR6->VAR10, strerror(VAR14));
        goto VAR15;
    }
    if (FUN7(VAR6->VAR12, &VAR6->VAR16))
    {
        FUN6("", VAR6->VAR10);
        goto VAR17;
    }
    return 0;
VAR17:
    FUN8(VAR6->VAR12);
    VAR6->VAR12 = -1;
VAR15:
    FUN9(VAR4->VAR11);
    VAR4->VAR11 = NULL;
    FUN9(VAR6->VAR10);
    VAR6->VAR10 = NULL;
    return 1;
}
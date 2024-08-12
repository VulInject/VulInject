static void FUN1(void *VAR1, int VAR2)
{
    const char *VAR3 = VAR1;
    VAR4 *VAR5[VAR6];
    VAR7 *VAR8;
    VAR9 *VAR10 = NULL;
    int VAR11;
    VAR11 = FUN2(VAR3, VAR5, VAR12, VAR6);
    VAR8 = FUN3(VAR7, VAR13, VAR5[0]);
    switch (VAR2)
    {
    case VAR14:
        if (FUN4(VAR11, VAR5) < 0)
        {
            FUN5(1);
        }
        FUN6(VAR3, true, &VAR10);
        FUN7(""%VAR8\"", VAR8->VAR15->VAR16);
        break;
    case VAR17:
        FUN6(VAR3, true, &VAR10);
        FUN8(VAR11, VAR5);
        FUN7(""%VAR8\"", VAR8->VAR15->VAR16);
        break;
    }
    if (VAR10)
    {
        FUN9(VAR10);
    }
}
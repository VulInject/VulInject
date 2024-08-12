static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8;
    FUN4(&VAR6->VAR9, FUN5(VAR6), &VAR10, VAR6, "", 0x1000);
    FUN6(VAR2, &VAR6->VAR9);
    FUN7(VAR2, &VAR6->VAR11[0]);
    FUN7(VAR2, &VAR6->VAR11[1]);
    FUN8(VAR4, VAR6->VAR12, 2);
    VAR8 = FUN9(VAR13);
    VAR6->VAR14 = FUN10(VAR8 ? FUN11(VAR8) : NULL, false);
    if (VAR6->VAR14 == NULL)
    {
        return -1;
    }
    return 0;
}
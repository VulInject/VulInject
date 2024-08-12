static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR5, VAR2);
    VAR7 *VAR8;
    VAR6->VAR9 = VAR10;
    VAR8 = FUN4(VAR11);
    VAR6->VAR12 = FUN5(VAR8 ? FUN6(VAR8) : NULL, true);
    if (VAR6->VAR12 == NULL)
    {
        return -1;
    }
    FUN7(VAR4, "", -1, 1, VAR13, VAR14, VAR6);
    return 0;
}
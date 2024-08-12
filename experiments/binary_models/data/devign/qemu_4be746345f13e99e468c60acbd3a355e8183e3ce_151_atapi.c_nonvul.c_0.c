static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    if (VAR3 > VAR4)
        VAR3 = VAR4;
    VAR2->VAR5 = -1;
    VAR2->VAR6 = VAR3;
    VAR2->VAR7 = VAR3;
    VAR2->VAR8 = 0;
    VAR2->VAR9 = 0;
    if (VAR2->VAR10)
    {
        FUN2(FUN3(VAR2->VAR11), &VAR2->VAR12, VAR3, VAR13);
        VAR2->VAR14 = VAR15 | VAR16 | VAR17;
        FUN4(VAR2, VAR18);
    }
    else
    {
        VAR2->VAR14 = VAR15 | VAR16;
        FUN5(VAR2);
    }
}
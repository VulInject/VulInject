static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    int VAR4, VAR5, VAR6;
    VAR2->VAR7 = VAR8 | VAR9;
    VAR3 = FUN2(VAR2);
    FUN3("", VAR3);
    VAR5 = VAR2->VAR10;
    if (VAR5 > VAR2->VAR11)
        VAR5 = VAR2->VAR11;
    VAR4 = FUN4(VAR2->VAR12, VAR3, VAR2->VAR13, VAR5);
    VAR2->VAR10 -= VAR5;
    if (VAR2->VAR10 == 0)
    {
        FUN5(VAR2);
    }
    else
    {
        VAR6 = VAR2->VAR10;
        if (VAR6 > VAR2->VAR11)
            VAR6 = VAR2->VAR11;
        FUN6(VAR2, VAR2->VAR13, 512 * VAR6, VAR14);
    }
    FUN7(VAR2, VAR3 + VAR5);
    if (VAR15 && ((++VAR2->VAR16 % 16) == 0))
    {
        FUN8(VAR2->VAR17, FUN9(VAR18) + (VAR19 / 1000));
    }
    else
    {
        FUN10(VAR2);
    }
}
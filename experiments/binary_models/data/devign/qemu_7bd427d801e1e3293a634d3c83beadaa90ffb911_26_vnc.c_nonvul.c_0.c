static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5, *VAR6;
    int VAR7, VAR8 = 0;
    FUN2();
    if (FUN3(VAR3))
    {
        VAR3->VAR9 = VAR10;
        FUN4(VAR3->VAR11, FUN5(VAR12) + VAR3->VAR9);
        return;
    }
    VAR7 = FUN6(VAR3);
    FUN7(VAR3);
    FUN8(VAR5, &VAR3->VAR13, VAR14, VAR6) { VAR8 += FUN9(VAR5, VAR7); }
    if (VAR3->VAR11 == NULL)
        return;
    if (VAR7 && VAR8)
    {
        VAR3->VAR9 /= 2;
        if (VAR3->VAR9 < VAR10)
            VAR3->VAR9 = VAR10;
    }
    else
    {
        VAR3->VAR9 += VAR15;
        if (VAR3->VAR9 > VAR16)
            VAR3->VAR9 = VAR16;
    }
    FUN4(VAR3->VAR11, FUN5(VAR12) + VAR3->VAR9);
}
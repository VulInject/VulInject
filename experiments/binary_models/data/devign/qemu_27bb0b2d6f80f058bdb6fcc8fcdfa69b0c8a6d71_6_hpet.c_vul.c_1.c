static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    uint64_t VAR4;
    uint64_t VAR5 = VAR3->VAR5;
    uint64_t VAR6 = FUN2();
    if (FUN3(VAR3) && VAR5 != 0)
    {
        if (VAR3->VAR7 & VAR8)
        {
            while (FUN4(VAR6, VAR3->VAR9))
                VAR3->VAR9 = (VAR10)(VAR3->VAR9 + VAR3->VAR5);
        }
        else
            while (FUN5(VAR6, VAR3->VAR9))
                VAR3->VAR9 += VAR5;
        VAR4 = FUN6(VAR3, VAR6);
        FUN7(VAR3->VAR11, FUN8(VAR12) + (VAR13)FUN9(VAR4));
    }
    else if (VAR3->VAR7 & VAR8 && !FUN3(VAR3))
    {
        if (VAR3->VAR14)
        {
            VAR4 = FUN6(VAR3, VAR6);
            FUN7(VAR3->VAR11, FUN8(VAR12) + (VAR13)FUN9(VAR4));
            VAR3->VAR14 = 0;
        }
    }
    FUN10(VAR3);
}
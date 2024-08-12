static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int64_t VAR7;
    int VAR8;
    VAR3 *VAR9 = NULL;
    while (1)
    {
        VAR6 = VAR2->VAR10;
        VAR7 = VAR6->VAR11 - VAR6->VAR12;
        if (VAR2->VAR13)
        {
            VAR7 -= VAR2->VAR14;
            if (VAR2->VAR15 + VAR2->VAR16 < VAR6->VAR11)
            {
                VAR7 -= VAR6->VAR11 - (VAR2->VAR15 + VAR2->VAR16);
            }
        }
        FUN2(VAR2, VAR6, VAR2->VAR14, VAR7, &VAR9);
        if (VAR9)
        {
            FUN3(VAR4, VAR9);
            return;
        }
        VAR8 = FUN4(VAR2, VAR6);
        if (VAR8 == 1)
        {
            FUN5(VAR2);
        }
    }
}
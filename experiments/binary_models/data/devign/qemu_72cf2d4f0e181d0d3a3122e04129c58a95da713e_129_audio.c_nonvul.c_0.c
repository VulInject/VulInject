static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR6;
    while (VAR4)
    {
        VAR3 *VAR7 = VAR4->VAR8.VAR9;
        VAR10 *VAR11 = &VAR4->VAR11;
        VAR12 *VAR13 = VAR4->VAR13;
        int VAR14 = VAR11->VAR15;
        if (VAR11->VAR16)
        {
            FUN2(VAR11->VAR16);
            VAR11->VAR16 = NULL;
        }
        FUN3(VAR11, VAR8);
        FUN3(VAR4, VAR8);
        FUN4(VAR4);
        if (VAR14)
        {
            FUN5(VAR13);
        }
        VAR4 = VAR7;
    }
}
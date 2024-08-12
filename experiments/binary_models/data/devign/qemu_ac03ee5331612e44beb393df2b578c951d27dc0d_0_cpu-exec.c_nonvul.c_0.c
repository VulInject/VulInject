void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    target_ulong VAR7, VAR8;
    uint32_t VAR9;
    uint32_t VAR10 = 1 | VAR11;
    uint32_t VAR12 = VAR10 & VAR13;
    if (FUN3(VAR2->VAR14, 0) == 0)
    {
        VAR6 = FUN4(VAR2, &VAR8, &VAR7, &VAR9, VAR12);
        if (VAR6 == NULL)
        {
            FUN5();
            FUN6();
            VAR6 = FUN7(VAR2, VAR8, VAR7, VAR9, VAR12);
            if (FUN8(VAR6 == NULL))
            {
                VAR6 = FUN9(VAR2, VAR8, VAR7, VAR9, VAR10);
            }
            FUN10();
            FUN11();
        }
        FUN12();
        VAR15 = false;
        VAR4->FUN13(VAR2);
        FUN14(VAR6, VAR8);
        FUN15(VAR2, VAR6);
        VAR4->FUN16(VAR2);
        VAR15 = true;
        FUN17();
    }
    else
    {
        FUN18(!FUN19());
        FUN20();
    }
}
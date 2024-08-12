static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = VAR9;
    VAR4->VAR10 = true;
    if (FUN3())
    {
        X86CPUDefinition VAR11 = {};
        uint32_t VAR12 = 0, VAR13 = 0, VAR14 = 0, VAR15 = 0;
        FUN4(VAR11.VAR16, &VAR11.VAR17, &VAR11.VAR18, &VAR11.VAR19);
        FUN5(VAR11.VAR20);
        FUN6(VAR4, &VAR11, &VAR21);
        VAR6->VAR22 = FUN7(VAR8, 0x0, 0, VAR23);
        VAR6->VAR24 = FUN7(VAR8, 0x80000000, 0, VAR23);
        VAR6->VAR25 = FUN7(VAR8, 0xC0000000, 0, VAR23);
        if (FUN8())
        {
            FUN9(FUN10(VAR4), true, "", &VAR21);
        }
    }
    else
    {
        FUN11(FUN10(VAR4), VAR26, "", &VAR21);
        FUN12(FUN10(VAR4), 6, "", &VAR21);
        FUN12(FUN10(VAR4), 6, "", &VAR21);
        FUN12(FUN10(VAR4), 3, "", &VAR21);
        FUN11(FUN10(VAR4), "" VAR27, "", &VAR21);
    }
    FUN9(FUN10(VAR4), true, "", &VAR21);
}
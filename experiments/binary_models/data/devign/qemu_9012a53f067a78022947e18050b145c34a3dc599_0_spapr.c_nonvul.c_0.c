static void FUN1(void)
{
    VAR1 *VAR2 = FUN2(FUN3());
    VAR3 *VAR4 = FUN4(VAR2);
    VAR5 *VAR6;
    uint32_t VAR7;
    hwaddr VAR8, VAR9;
    void *VAR10;
    int VAR11;
    FUN5(VAR12, NULL);
    FUN6(VAR4);
    VAR6 = FUN7(VAR13);
    if (FUN8() && FUN9() && FUN10(VAR6, VAR14, 0, VAR4->VAR15))
    {
        VAR4->VAR16 = VAR17;
    }
    else
    {
        FUN11(VAR4);
    }
    if (!VAR4->VAR18)
    {
        FUN12(VAR4->VAR19);
        VAR4->VAR19 = FUN13();
        FUN14(VAR6, VAR4->VAR15, &VAR20);
    }
    FUN15();
    FUN16(FUN17(), VAR21, NULL);
    FUN18(VAR4);
    VAR7 = FUN19(VAR4->VAR22, VAR23);
    VAR8 = VAR7 - VAR24;
    VAR9 = VAR8 - VAR25;
    VAR10 = FUN20(VAR4, VAR8, VAR4->VAR26);
    FUN21(VAR4, VAR10, VAR8);
    VAR11 = FUN22(VAR10);
    assert(VAR11 == 0);
    if (FUN23(VAR10) > VAR25)
    {
        FUN24("", FUN23(VAR10), VAR25);
        FUN25(1);
    }
    FUN26(VAR10, FUN23(VAR10));
    FUN27(VAR9, VAR10, FUN23(VAR10));
    FUN28(VAR10);
    VAR6->VAR27.VAR28[3] = VAR9;
    VAR6->VAR27.VAR28[5] = 0;
    VAR13->VAR29 = 0;
    VAR6->VAR27.VAR30 = VAR31;
    VAR4->VAR18 = false;
}
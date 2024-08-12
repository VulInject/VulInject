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
    VAR6 = FUN6(VAR13);
    if (FUN7() && FUN8() && FUN9(VAR6, VAR14, 0, VAR4->VAR15))
    {
        VAR4->VAR16 = VAR17;
    }
    else
    {
        FUN10(VAR4);
    }
    FUN11();
    FUN12(FUN13(), VAR18, NULL);
    FUN14(VAR4);
    VAR7 = FUN15(VAR4->VAR19, VAR20);
    VAR8 = VAR7 - VAR21;
    VAR9 = VAR8 - VAR22;
    if (!VAR4->VAR23)
    {
        FUN16(VAR4->VAR24);
        VAR4->VAR24 = FUN17();
        FUN18(VAR6, VAR4->VAR15, &VAR25);
    }
    VAR10 = FUN19(VAR4, VAR8, VAR4->VAR26);
    FUN20(VAR4, VAR10, VAR8);
    VAR11 = FUN21(VAR10);
    assert(VAR11 == 0);
    if (FUN22(VAR10) > VAR22)
    {
        FUN23("", FUN22(VAR10), VAR22);
        FUN24(1);
    }
    FUN25(VAR10, FUN22(VAR10));
    FUN26(VAR9, VAR10, FUN22(VAR10));
    FUN27(VAR10);
    VAR6->VAR27.VAR28[3] = VAR9;
    VAR6->VAR27.VAR28[5] = 0;
    VAR13->VAR29 = 0;
    VAR6->VAR27.VAR30 = VAR31;
    VAR4->VAR23 = false;
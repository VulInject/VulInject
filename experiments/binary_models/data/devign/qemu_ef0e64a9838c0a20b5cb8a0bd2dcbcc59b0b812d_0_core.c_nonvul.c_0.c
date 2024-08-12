static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5;
    int64_t VAR6;
    uint64_t VAR7;
    bool VAR8 = false;
    if (VAR2 == -VAR9)
    {
        return;
    }
    if (VAR2 < 0)
    {
        if (FUN2(VAR4, -VAR2, FUN3(VAR4->VAR10)))
        {
            VAR4->VAR11->VAR12->VAR13 = NULL;
            FUN4(VAR4, 0);
            return;
        }
    }
    VAR5 = VAR4->VAR14 >> 9;
    if (VAR5 > VAR4->VAR15)
    {
        VAR5 = VAR4->VAR15;
        VAR8 = true;
    }
    VAR6 = FUN5(VAR4);
    if (VAR5 > 0)
    {
        assert(VAR5 * 512 == VAR4->VAR16.VAR17);
        FUN4(VAR4, VAR4->VAR16.VAR17);
        VAR6 += VAR5;
        FUN6(VAR4, VAR6);
        VAR4->VAR15 -= VAR5;
    }
    if (VAR4->VAR15 == 0)
    {
        VAR4->VAR18 = VAR19 | VAR20;
        FUN7(VAR4->VAR11);
        goto VAR21;
    }
    VAR5 = VAR4->VAR15;
    VAR4->VAR22 = 0;
    VAR4->VAR14 = VAR5 * 512;
    if (VAR4->VAR11->VAR12->VAR23->FUN8(VAR4->VAR11->VAR12, VAR4->VAR14) < 512)
    {
        VAR4->VAR18 = VAR19 | VAR20;
        FUN4(VAR4, 0);
        goto VAR21;
    }
    FUN9(VAR4, VAR6, VAR5, FUN10(VAR4->VAR10));
    if ((VAR4->VAR10 == VAR24 || VAR4->VAR10 == VAR25) && !FUN11(VAR4, VAR6, VAR5))
    {
        FUN12(VAR4);
        FUN13(FUN14(VAR4->VAR26), VAR4->VAR27.VAR28);
        return;
    }
    VAR7 = VAR6 << VAR29;
    switch (VAR4->VAR10)
    {
    case VAR24:
        VAR4->VAR11->VAR12->VAR13 = FUN15(VAR4->VAR26, &VAR4->VAR16, VAR7, VAR30, VAR31, VAR4);
        break;
    case VAR25:
        VAR4->VAR11->VAR12->VAR13 = FUN16(VAR4->VAR26, &VAR4->VAR16, VAR7, VAR30, VAR31, VAR4);
        break;
    case VAR32:
        VAR4->VAR11->VAR12->VAR13 = FUN17(FUN18(VAR4->VAR26), &VAR4->VAR16, VAR7, VAR30, VAR33, VAR4, VAR31, VAR4, VAR34);
        break;
    default:
        FUN19();
    }
    return;
VAR21:
    if (VAR4->VAR10 == VAR24 || VAR4->VAR10 == VAR25)
    {
        FUN20(FUN14(VAR4->VAR26), &VAR4->VAR27);
    }
    FUN21(VAR4, VAR8);
}
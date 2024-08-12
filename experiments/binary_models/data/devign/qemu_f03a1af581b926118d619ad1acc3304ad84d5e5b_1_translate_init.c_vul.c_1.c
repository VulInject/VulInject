static void FUN1(VAR1 *VAR2, int VAR3)
{
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR2);
    FUN7(VAR2);
    switch (VAR3)
    {
    case VAR4:
    case VAR5:
        FUN8(VAR2);
        FUN9(VAR2);
        FUN10(VAR2);
        FUN11(VAR2);
        FUN12(VAR2);
        break;
    case VAR6:
    case VAR7:
        FUN13(VAR2);
        FUN14(VAR2, VAR3 >= VAR7);
        FUN15(VAR2);
        VAR2->VAR8 = true;
        break;
    default:
        FUN16();
    }
    if (VAR3 >= VAR5)
    {
        FUN17(VAR2);
        FUN18(VAR2);
        FUN19(VAR2);
    }
    else
    {
        FUN20(VAR2);
    }
    if (VAR3 == VAR4)
    {
        FUN21(VAR2);
    }
    if (VAR3 >= VAR9)
    {
        FUN22(VAR2);
        FUN23(VAR2);
    }
    if (VAR3 == VAR6)
    {
        FUN24(VAR2);
    }
    if (VAR3 >= VAR7)
    {
        FUN25(VAR2);
        FUN26(VAR2);
        FUN27(VAR2);
        FUN28(VAR2);
        FUN29(VAR2);
        FUN30(VAR2);
        FUN31(VAR2);
        FUN32(VAR2);
        FUN33(VAR2);
        FUN34(VAR2);
        FUN35(VAR2);
    }
    if (VAR3 < VAR7)
    {
        FUN36(VAR2);
    }
    else
    {
        FUN37(VAR2);
    }
    switch (VAR3)
    {
    case VAR4:
    case VAR5:
        VAR2->VAR10 = 64;
        break;
    case VAR6:
    case VAR7:
    default:
        VAR2->VAR10 = 32;
        break;
    }
    switch (VAR3)
    {
    case VAR4:
    case VAR5:
        FUN38(VAR2);
        FUN39(FUN40(VAR2));
        break;
    case VAR6:
    case VAR7:
        FUN41(VAR2);
        FUN42(FUN40(VAR2));
        break;
    default:
        FUN16();
    }
    VAR2->VAR11 = 128;
    VAR2->VAR12 = 128;
}
static void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3, VAR4;
    VAR5 *VAR6;
    int VAR7 = VAR2->VAR8;
    switch (VAR7)
    {
    case VAR9:
        VAR7 = FUN2(FUN3(VAR2, VAR2->VAR10.VAR4));
        break;
    case VAR11:
        VAR7 = FUN2(FUN3(VAR2, VAR2->VAR10.VAR4));
        VAR2->VAR10.VAR4 += VAR7;
        break;
    default:
        assert(VAR7 == 2 || VAR7 == 4 || VAR7 == 6);
    }
    FUN4(VAR12, "", VAR13, VAR2->VAR14, VAR7);
    VAR6 = FUN5(VAR2);
    VAR6->VAR15 = FUN6(VAR7);
    VAR6->VAR16 = FUN6(VAR2->VAR14);
    VAR6->VAR17.VAR3 = FUN7(FUN8(VAR2));
    VAR6->VAR17.VAR4 = FUN7(VAR2->VAR10.VAR4);
    VAR3 = FUN9(VAR6->VAR18.VAR3);
    VAR4 = FUN9(VAR6->VAR18.VAR4);
    FUN10(VAR6);
    FUN11("" VAR19 "" VAR19 "", VAR13, VAR2->VAR14, VAR7, VAR2->VAR10.VAR3, VAR2->VAR10.VAR4);
    FUN12(VAR2, VAR3, VAR4);
}
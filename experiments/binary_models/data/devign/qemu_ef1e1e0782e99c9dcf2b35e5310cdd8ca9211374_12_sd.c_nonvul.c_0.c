static void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3;
    uint64_t VAR4;
    if (VAR2->VAR5)
    {
        FUN2(VAR2->VAR5, &VAR4);
    }
    else
    {
        VAR4 = 0;
    }
    VAR3 = VAR4 << 9;
    VAR4 = FUN3(VAR3) + 1;
    VAR2->VAR6 = VAR7;
    VAR2->VAR8 = 0x0000;
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR2);
    FUN7(VAR2, VAR3);
    FUN8(VAR2);
    FUN9(VAR2);
    FUN10(VAR2->VAR9);
    VAR2->VAR10 = VAR2->VAR5 ? FUN11(VAR2->VAR5) : false;
    VAR2->VAR11 = VAR4;
    VAR2->VAR9 = FUN12(VAR2->VAR11);
    memset(VAR2->VAR12, 0, sizeof(VAR2->VAR12));
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    VAR2->VAR3 = VAR3;
    VAR2->VAR15 = 0x200;
    VAR2->VAR16 = 0;
    VAR2->VAR17 = false;
}
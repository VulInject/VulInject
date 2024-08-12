static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR3->VAR4 += (FUN2() / VAR5);
    VAR3->VAR6 = 0;
    VAR3->VAR7 = false;
    FUN3(VAR3->VAR8);
    if (!(VAR3->VAR9 & VAR10))
    {
        FUN4();
        FUN5(VAR3->VAR11);
        FUN6(VAR3);
        VAR3->VAR12 |= VAR13;
        return;
    }
    FUN7(VAR3->VAR14);
    FUN8(VAR3);
    FUN9(VAR3);
    FUN10(VAR3);
    VAR3->VAR14 = (VAR3->VAR14 + 1) & 0x7ff;
    if (VAR3->VAR15)
    {
        VAR3->VAR16 |= VAR3->VAR15;
        VAR3->VAR12 |= VAR17;
        FUN11(VAR3);
    }
    VAR3->VAR15 = 0;
    FUN12(VAR3->VAR11, VAR3->VAR4);
}
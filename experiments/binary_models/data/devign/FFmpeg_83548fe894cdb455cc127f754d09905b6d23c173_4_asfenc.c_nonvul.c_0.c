static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int64_t VAR6, VAR7;
    if (VAR4->VAR8.VAR9 > VAR4->VAR8.VAR10)
        FUN2(VAR2);
    VAR7 = FUN3(VAR2->VAR8);
    if ((!VAR4->VAR11) && (VAR4->VAR12 != 0))
        FUN4(VAR2, VAR4->VAR13, VAR4->VAR14, VAR4->VAR12);
    FUN5(VAR2->VAR8);
    if (VAR4->VAR11 || !(VAR2->VAR8->VAR15 & VAR16))
    {
        FUN6(VAR2, 0x4524, 0, 0);
    }
    else
    {
        VAR6 = FUN3(VAR2->VAR8);
        FUN7(VAR2->VAR8, 0, VAR17);
        FUN8(VAR2, VAR6, VAR7 - VAR4->VAR18);
    }
    FUN9(VAR4->VAR13);
    return 0;
}
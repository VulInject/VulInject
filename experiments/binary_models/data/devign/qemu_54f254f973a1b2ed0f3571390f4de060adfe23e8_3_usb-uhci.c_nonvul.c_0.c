static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int64_t VAR4;
    if (!(VAR3->VAR5 & VAR6))
    {
        FUN2(VAR3->VAR7);
        VAR3->VAR8 |= VAR9;
        return;
    }
    if (VAR3->VAR10)
    {
        VAR3->VAR11 |= VAR3->VAR10;
        VAR3->VAR8 |= VAR12;
        FUN3(VAR3);
    }
    VAR3->VAR13 = (VAR3->VAR13 + 1) & 0x7ff;
    FUN4("", VAR3->VAR13);
    FUN5(VAR3);
    FUN6(VAR3);
    FUN7(VAR3);
    VAR4 = FUN8(VAR14) + (VAR15 / VAR16);
    FUN9(VAR3->VAR7, VAR4);
}
static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5.VAR6, VAR2);
    VAR7 *VAR8 = FUN3(VAR4);
    bool VAR9;
    VAR9 = FUN4(FUN5(VAR4->VAR10));
    VAR4->VAR11 = 0xfee00000 | (VAR9 ? VAR12 : 0) | VAR13;
    VAR4->VAR14 = 0;
    VAR8->FUN6(VAR4);
    FUN7(VAR2);
    if (VAR9)
    {
        VAR4->VAR15[VAR16] = 0x700;
    }
}
static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = VAR9;
    VAR4->VAR10 = true;
    if (FUN3())
    {
        VAR6->VAR11 = FUN4(VAR8, 0x0, 0, VAR12);
        VAR6->VAR13 = FUN4(VAR8, 0x80000000, 0, VAR12);
        VAR6->VAR14 = FUN4(VAR8, 0xC0000000, 0, VAR12);
    }
    FUN5(FUN6(VAR4), true, "", &VAR15);
}
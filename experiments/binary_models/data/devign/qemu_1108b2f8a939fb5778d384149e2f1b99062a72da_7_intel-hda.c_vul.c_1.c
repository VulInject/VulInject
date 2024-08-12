static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = VAR6->VAR2.VAR9;
    VAR6->VAR10 = FUN3(FUN4(VAR6));
    FUN5(VAR8, 1);
    VAR8[0x40] = 0x01;
    FUN6(&VAR6->VAR11, FUN4(VAR6), &VAR12, VAR6, "", 0x4000);
    FUN7(&VAR6->VAR2, 0, 0, &VAR6->VAR11);
    if (VAR6->VAR13 != VAR14)
    {
        FUN8(&VAR6->VAR2, VAR6->VAR15 ? 0x50 : 0x60, 1, true, false);
    }
    FUN9(FUN10(VAR2), &VAR6->VAR16, sizeof(VAR6->VAR16), VAR17, VAR18);
}
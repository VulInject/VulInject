static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = FUN3(VAR5);
    VAR9 *VAR10 = FUN4(VAR8);
    VAR11 *VAR12;
    VAR12 = VAR8->VAR13;
    VAR12[0x5f] = 0x10 | (FUN5(VAR10, 0x378) ? 0x80 : 0);
    VAR12[0x63] = 0x60;
    VAR12[0x67] = (FUN5(VAR10, 0x3f8) ? 0x08 : 0) | (FUN5(VAR10, 0x2f8) ? 0x90 : 0);
    if (VAR5->VAR14)
    {
        FUN6(FUN7(VAR8), VAR15, VAR5);
    }
    else
    {
        FUN8(FUN7(VAR8), VAR5);
    }
}
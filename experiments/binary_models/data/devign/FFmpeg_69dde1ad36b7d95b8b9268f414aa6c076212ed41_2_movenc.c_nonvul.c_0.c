static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5;
    FUN2(VAR2, 0x5c);
    FUN3(VAR2, "");
    FUN2(VAR2, 0xf);
    FUN2(VAR2, VAR4->VAR6);
    FUN2(VAR2, VAR4->VAR6);
    FUN2(VAR2, VAR4->VAR7);
    FUN2(VAR2, 0);
    VAR5 = ((VAR8)VAR9 * (VAR8)VAR4->VAR10) / (VAR8)VAR4->VAR11;
    FUN2(VAR2, (long)VAR5);
    FUN2(VAR2, 0);
    FUN2(VAR2, 0);
    FUN2(VAR2, 0x0);
    if (VAR4->VAR12->VAR13 == VAR14)
        FUN4(VAR2, 0x0100);
    else
        FUN4(VAR2, 0);
    FUN4(VAR2, 0);
    FUN2(VAR2, 0x00010000);
    FUN2(VAR2, 0x0);
    FUN2(VAR2, 0x0);
    FUN2(VAR2, 0x0);
    FUN2(VAR2, 0x00010000);
    FUN2(VAR2, 0x0);
    FUN2(VAR2, 0x0);
    FUN2(VAR2, 0x0);
    FUN2(VAR2, 0x40000000);
    if (VAR4->VAR12->VAR13 == VAR15)
    {
        double VAR16 = FUN5(VAR4->VAR12->VAR16);
        if (!VAR16)
            VAR16 = 1;
        FUN2(VAR2, VAR16 * VAR4->VAR12->VAR17 * 0x10000);
        FUN2(VAR2, VAR4->VAR12->VAR18 * 0x10000);
    }
    else
    {
        FUN2(VAR2, 0);
        FUN2(VAR2, 0);
    }
    return 0x5c;
}
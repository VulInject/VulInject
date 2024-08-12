static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR6 = FUN2(VAR5, VAR6, VAR2->VAR8.VAR9);
    VAR2->VAR4 = VAR4;
    VAR2->VAR10 = VAR6->VAR10;
    VAR2->VAR11 = sizeof(VAR12);
    VAR7 = VAR13;
    VAR7 += FUN3(VAR2) * VAR14;
    VAR7 += VAR2->VAR11 * 2;
    VAR7 += FUN4(&VAR2->VAR6);
    VAR6->VAR10 += VAR7;
    VAR2->VAR15 = FUN5(&VAR2->VAR6, VAR2->VAR15);
    FUN6(VAR2);
    FUN7(VAR2);
    if (VAR2->VAR8.VAR16)
    {
        FUN8(VAR17, VAR2->VAR10);
    }
    return 0;
}
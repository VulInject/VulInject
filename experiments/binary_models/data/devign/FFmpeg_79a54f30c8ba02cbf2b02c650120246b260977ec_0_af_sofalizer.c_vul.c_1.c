static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    float VAR6;
    float VAR7 = 0;
    float *VAR8;
    int VAR9;
    if (VAR4->VAR10.VAR11)
    {
        struct VAR12 *VAR10 = &VAR4->VAR10;
        VAR9 = FUN2(VAR4, 0, 0, 1);
        VAR8 = VAR10->VAR13 + 2 * VAR9 * VAR10->VAR14;
        if (VAR10->VAR14 & 31)
        {
            VAR7 = FUN3(VAR8, VAR8, VAR10->VAR14);
        }
        else
        {
            VAR7 = VAR4->VAR15->FUN4(VAR8, VAR8, VAR10->VAR14);
        }
        VAR6 = 256 / (VAR10->VAR14 * FUN5(VAR7));
        FUN6(VAR2, VAR16, "", VAR6);
        VAR8 = VAR10->VAR13;
        VAR4->VAR15->FUN7(VAR8, VAR8, VAR6, VAR10->VAR14 * VAR10->VAR17 * 2);
        FUN8();
    }
    return 0;
}
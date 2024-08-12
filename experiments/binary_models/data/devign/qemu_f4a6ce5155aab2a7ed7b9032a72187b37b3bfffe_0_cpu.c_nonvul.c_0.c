static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = &VAR4->VAR8;
    float64 VAR9 = FUN4(NULL);
    int VAR10;
    VAR6->FUN5(VAR2);
    memset(VAR8, 0, FUN6(VAR7, VAR11));
    VAR8->VAR12 = 0x2700;
    FUN7(VAR8);
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        VAR8->VAR13[VAR10] = VAR9;
    }
    VAR8->VAR14 = 0;
    VAR8->VAR15 = 0;
    FUN8(VAR8, 0);
    VAR8->VAR16 = 0;
}
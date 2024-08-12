static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4)
{
    FUN2(VAR5, VAR3);
    TCGv VAR6 = FUN3();
    TCGv VAR7;
    if (FUN4(VAR5.VAR8 != VAR9))
    {
        VAR7 = VAR2->VAR10[VAR5.VAR8];
    }
    else
    {
        VAR7 = FUN3();
    }
    FUN5(VAR6, FUN6(VAR2, VAR5.VAR11), VAR5.VAR12);
    FUN7(VAR7, VAR6, VAR2->VAR13, VAR4);
    if (FUN8(VAR5.VAR8 == VAR9))
    {
        FUN9(VAR7);
    }
    FUN9(VAR6);
}
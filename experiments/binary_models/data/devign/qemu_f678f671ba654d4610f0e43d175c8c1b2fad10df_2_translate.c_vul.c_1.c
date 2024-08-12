static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int32_t VAR5;
    int32_t VAR6;
    uint32_t VAR7;
    TCGv VAR8;
    VAR6 = FUN2(VAR4->VAR9);
    VAR7 = FUN3(VAR4->VAR9);
    VAR5 = FUN4(VAR4->VAR9);
    VAR8 = FUN5(FUN6(VAR7));
    switch (VAR5)
    {
    case VAR10:
        FUN7(VAR11[VAR6], VAR8, VAR4->VAR12, VAR13);
        break;
    case VAR14:
        FUN8(VAR15[VAR6 + 1], VAR15[VAR6], VAR8, VAR4);
        break;
    case VAR16:
        FUN8(VAR11[VAR6 + 1], VAR11[VAR6], VAR8, VAR4);
        break;
    case VAR17:
        FUN7(VAR15[VAR6], VAR8, VAR4->VAR12, VAR13);
        break;
    }
    FUN9(VAR8);
}
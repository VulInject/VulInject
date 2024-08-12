static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    if (FUN3(VAR2->VAR4))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    switch (FUN4(VAR2->VAR5))
    {
    case 0:
    case 1:
    case 2:
    {
        TCGv_i32 VAR6 = FUN5(FUN4(VAR2->VAR5));
        FUN6(VAR7[FUN7(VAR2->VAR5)], VAR8, VAR6, VAR7[FUN8(VAR2->VAR5)]);
        FUN9(VAR6);
    }
    break;
    default:
        FUN2(VAR2, VAR9);
        break;
    }
}
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
        FUN5(VAR6[FUN6(VAR2->VAR5)], VAR7, VAR6[FUN7(VAR2->VAR5)]);
        break;
    case 1:
        FUN8(VAR6[FUN6(VAR2->VAR5)], VAR7, VAR6[FUN7(VAR2->VAR5)]);
        break;
    default:
        FUN2(VAR2, VAR8);
        break;
    }
}
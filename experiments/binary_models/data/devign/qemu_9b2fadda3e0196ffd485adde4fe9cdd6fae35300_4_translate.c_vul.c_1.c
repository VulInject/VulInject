static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4;
    if (FUN3(VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4();
    FUN5(VAR2, VAR4);
    switch ((VAR2->VAR6 >> 21) & 0x3)
    {
    case 0:
        FUN6(VAR7, VAR4);
        break;
    case 1:
        FUN7(VAR7, VAR4);
        break;
    case 3:
        FUN8(VAR7, VAR4);
        break;
    default:
        FUN2(VAR2, VAR8);
        break;
    }
    FUN9(VAR4);
}
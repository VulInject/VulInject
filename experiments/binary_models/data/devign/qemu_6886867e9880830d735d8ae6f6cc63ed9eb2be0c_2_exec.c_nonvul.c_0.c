static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    if (!FUN2(VAR2, VAR5))
    {
        FUN3(VAR2, VAR4);
    }
    switch (VAR4)
    {
    case 1:
        FUN4(FUN5(VAR2), VAR3);
        break;
    case 2:
        FUN6(FUN5(VAR2), VAR3);
        break;
    case 4:
        FUN7(FUN5(VAR2), VAR3);
        break;
    default:
        FUN8();
    }
    FUN9(VAR2, VAR4);
    if (!FUN10(VAR2))
    {
        VAR6 *VAR7 = VAR8->VAR9;
        FUN11(VAR7, VAR8->VAR10);
    }
}
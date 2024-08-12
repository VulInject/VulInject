void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    int VAR10 = -VAR11;
    int VAR12;
    if (FUN2(VAR3, &VAR7, &VAR4, &VAR5, &VAR6))
    {
        FUN3(&VAR2->VAR13, VAR14, 4);
        return;
    }
    FUN4("", VAR4, VAR5, VAR6);
    VAR9 = FUN5(VAR7, VAR4, VAR5, VAR6);
    if (VAR9 && FUN6(VAR9))
    {
        VAR10 = FUN7(VAR9);
    }
    switch (VAR10)
    {
    case -VAR11:
        VAR12 = 3;
        break;
    case -VAR15:
        VAR12 = 2;
        break;
    case 0:
        VAR12 = 0;
        break;
    default:
        VAR12 = 1;
        break;
    }
    FUN8(VAR2, VAR12);
}
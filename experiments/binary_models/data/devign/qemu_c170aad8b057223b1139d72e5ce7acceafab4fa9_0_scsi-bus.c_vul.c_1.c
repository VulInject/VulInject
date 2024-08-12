int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR4->VAR8 = -1;
    VAR4->VAR9 = FUN2(VAR6);
    switch (VAR2->VAR10)
    {
    case VAR11:
        VAR7 = FUN3(VAR4, VAR2, VAR6);
        break;
    case VAR12:
        VAR7 = FUN4(VAR4, VAR2, VAR6);
        break;
    default:
        VAR7 = FUN5(VAR4, VAR2, VAR6);
        break;
    }
    if (VAR7 != 0)
        return VAR7;
    memcpy(VAR4->VAR6, VAR6, VAR4->VAR9);
    FUN6(VAR4);
    VAR4->VAR8 = FUN7(VAR4);
    return 0;
}
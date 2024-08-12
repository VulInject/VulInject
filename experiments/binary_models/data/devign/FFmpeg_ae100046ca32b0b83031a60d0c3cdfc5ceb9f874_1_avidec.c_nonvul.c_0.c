static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    GetByteContext VAR5;
    VAR6 *VAR7 = VAR4->VAR8->VAR9;
    int VAR10 = VAR4->VAR8->VAR11;
    int VAR12, VAR13;
    if (!VAR7 || VAR10 < 8)
    {
        return VAR14;
    }
    FUN2(&VAR5, VAR7, VAR10);
    VAR12 = FUN3(&VAR5);
    switch (VAR12)
    {
    case FUN4('', '', '', ''):
        FUN5(&VAR5, 4);
        VAR13 = FUN6(&VAR5);
        return FUN7(VAR2, VAR7 + VAR13, VAR10 - VAR13, 1, 0, &VAR4->VAR15);
        break;
    case FUN4('', '', '', ''):
        FUN8(VAR2, "", VAR12);
        break;
    case FUN4('', '', '', ''):
        FUN8(VAR2, "", VAR12);
        break;
    default:
        break;
    }
    return 0;
}
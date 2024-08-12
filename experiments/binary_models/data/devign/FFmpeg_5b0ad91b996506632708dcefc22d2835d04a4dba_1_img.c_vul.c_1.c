static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024];
    int VAR9;
    ByteIOContext VAR10, *VAR11;
    if (FUN2(VAR8, sizeof(VAR8), VAR6->VAR12, VAR6->VAR13) < 0)
        return -VAR14;
    if (!VAR6->VAR15)
    {
        VAR11 = &VAR10;
        if (FUN3(VAR11, VAR8, VAR16) < 0)
            return -VAR14;
    }
    else
    {
        VAR11 = &VAR2->VAR17;
        if (FUN4(VAR11))
            return -VAR14;
    }
    FUN5(VAR4, VAR6->VAR18);
    VAR4->VAR19 = 0;
    switch (VAR6->VAR20)
    {
    case VAR21:
        VAR9 = FUN6(VAR6, VAR11, VAR4->VAR22, VAR4->VAR23, 1);
        break;
    case VAR24:
        VAR9 = FUN6(VAR6, VAR11, VAR4->VAR22, VAR4->VAR23, 0);
        break;
    case VAR25:
        VAR9 = FUN7(VAR6, VAR8, VAR4->VAR22, VAR4->VAR23);
        break;
    case VAR26:
        VAR9 = FUN8(VAR6, VAR11, VAR4->VAR22, VAR4->VAR23);
        break;
    default:
        return -VAR14;
    }
    if (!VAR6->VAR15)
    {
        FUN9(VAR11);
    }
    if (VAR9 < 0)
    {
        FUN10(VAR4);
        return -VAR14;
    }
    else
    {
        VAR6->VAR13++;
        return 0;
    }
}
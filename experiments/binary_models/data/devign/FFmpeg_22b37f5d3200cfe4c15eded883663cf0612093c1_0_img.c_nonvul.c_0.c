static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    char VAR11[1024];
    ByteIOContext VAR12, *VAR13 = &VAR12;
    VAR14 *VAR15;
    VAR15 = FUN2(VAR2, 0);
    if (!VAR15)
    {
        FUN3(VAR6);
        return -VAR16;
    }
    if (VAR4 && VAR4->VAR17)
        VAR6->VAR18 = VAR4->VAR17;
    strcpy(VAR6->VAR19, VAR2->VAR20);
    VAR6->VAR21 = 0;
    VAR6->VAR22 = 0;
    if (VAR2->VAR23->VAR24 & VAR25)
        VAR6->VAR26 = 0;
    else
        VAR6->VAR26 = 1;
    if (!VAR4 || !VAR4->VAR27)
    {
        VAR15->VAR28.VAR27 = 25;
        VAR15->VAR28.VAR29 = 1;
    }
    else
    {
        VAR15->VAR28.VAR27 = VAR4->VAR27;
        VAR15->VAR28.VAR29 = VAR4->VAR29;
    }
    if (!VAR6->VAR26)
    {
        if (FUN4(&VAR9, &VAR10, VAR6->VAR19) < 0)
            goto VAR30;
        VAR6->VAR31 = VAR9;
        VAR6->VAR32 = VAR10;
        VAR6->VAR21 = VAR9;
        VAR15->VAR33 = 0;
        VAR15->VAR34 = ((VAR35)VAR36 * (VAR10 - VAR9 + 1) * VAR15->VAR28.VAR29) / VAR15->VAR28.VAR27;
        if (FUN5(VAR11, sizeof(VAR11), VAR6->VAR19, VAR6->VAR21) < 0)
            goto VAR30;
        if (FUN6(VAR13, VAR11, VAR37) < 0)
            goto VAR30;
    }
    else
    {
        VAR13 = &VAR2->VAR38;
    }
    VAR8 = FUN7(VAR13, VAR2->VAR20, VAR6->VAR18, VAR39, VAR6);
    if (VAR8 < 0)
        goto VAR40;
    if (!VAR6->VAR26)
    {
        FUN8(VAR13);
    }
    else
    {
        FUN9(VAR13, 0, VAR41);
    }
    VAR15->VAR28.VAR42 = VAR43;
    VAR15->VAR28.VAR44 = VAR45;
    VAR15->VAR28.VAR46 = VAR6->VAR46;
    VAR15->VAR28.VAR47 = VAR6->VAR47;
    VAR15->VAR28.VAR48 = VAR6->VAR48;
    VAR6->VAR49 = FUN10(VAR6->VAR48, VAR6->VAR46, VAR6->VAR47);
    return 0;
VAR40:
    if (!VAR6->VAR26)
        FUN8(VAR13);
VAR30:
    FUN3(VAR6);
    return -VAR50;
}
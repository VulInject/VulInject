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
    if (VAR4->VAR17)
        VAR6->VAR18 = VAR4->VAR17;
    FUN4(VAR6->VAR19, sizeof(VAR6->VAR19), VAR2->VAR20);
    VAR6->VAR21 = 0;
    VAR6->VAR22 = 0;
    if (VAR2->VAR23->VAR24 & VAR25)
        VAR6->VAR26 = 0;
    else
        VAR6->VAR26 = 1;
    if (!VAR4->VAR27.VAR28)
    {
        VAR15->VAR29->VAR27 = (VAR30){1, 25};
    }
    else
    {
        VAR15->VAR29->VAR27 = VAR4->VAR27;
    }
    if (!VAR6->VAR26)
    {
        if (FUN5(&VAR9, &VAR10, VAR6->VAR19) < 0)
            goto VAR31;
        VAR6->VAR32 = VAR9;
        VAR6->VAR33 = VAR10;
        VAR6->VAR21 = VAR9;
        VAR15->VAR34 = 0;
        VAR15->VAR35 = VAR10 - VAR9 + 1;
        if (FUN6(VAR11, sizeof(VAR11), VAR6->VAR19, VAR6->VAR21) < 0)
            goto VAR31;
        if (FUN7(VAR13, VAR11, VAR36) < 0)
            goto VAR31;
    }
    else
    {
        VAR13 = &VAR2->VAR37;
    }
    VAR8 = FUN8(VAR13, VAR2->VAR20, VAR6->VAR18, VAR38, VAR6);
    if (VAR8 < 0)
        goto VAR39;
    if (!VAR6->VAR26)
    {
        FUN9(VAR13);
    }
    else
    {
        FUN10(VAR13, 0, VAR40);
    }
    VAR15->VAR29->VAR41 = VAR42;
    VAR15->VAR29->VAR43 = VAR44;
    VAR15->VAR29->VAR45 = VAR6->VAR45;
    VAR15->VAR29->VAR46 = VAR6->VAR46;
    VAR15->VAR29->VAR47 = VAR6->VAR47;
    VAR6->VAR48 = FUN11(VAR6->VAR47, (VAR6->VAR45 + 15) & (~15), (VAR6->VAR46 + 15) & (~15));
    return 0;
VAR39:
    if (!VAR6->VAR26)
        FUN9(VAR13);
VAR31:
    FUN3(VAR6);
    return VAR49;
}
static int FUN1(int VAR1, struct VAR2 *VAR2)
{
    dev_t VAR3;
    int VAR4 = 0;
    int VAR5 = VAR6;
    V9fsString VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    FUN2(&VAR8);
    FUN2(&VAR7);
    VAR4 = FUN3(VAR2, VAR5, "", &VAR10, &VAR11);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR5 += VAR4;
    VAR4 = FUN4(VAR10, VAR11, &VAR12, &VAR13);
    if (VAR4 < 0)
    {
        goto VAR14;
    }
    switch (VAR1)
    {
    case VAR15:
        VAR4 = FUN3(VAR2, VAR5, "", &VAR8, &VAR9, &VAR3);
        if (VAR4 < 0)
        {
            goto VAR16;
        }
        VAR4 = FUN5(VAR8.VAR17, VAR9, VAR3);
        break;
    case VAR18:
        VAR4 = FUN3(VAR2, VAR5, "", &VAR8, &VAR9);
        if (VAR4 < 0)
        {
            goto VAR16;
        }
        VAR4 = mkdir(VAR8.VAR17, VAR9);
        break;
    case VAR19:
        VAR4 = FUN3(VAR2, VAR5, "", &VAR7, &VAR8);
        if (VAR4 < 0)
        {
            goto VAR16;
        }
        VAR4 = FUN6(VAR7.VAR17, VAR8.VAR17);
        break;
    }
    if (VAR4 < 0)
    {
        VAR4 = -VAR20;
    }
VAR16:
    FUN7(VAR12, VAR13);
VAR14:
    FUN8(&VAR8);
    FUN8(&VAR7);
    return VAR4;
}
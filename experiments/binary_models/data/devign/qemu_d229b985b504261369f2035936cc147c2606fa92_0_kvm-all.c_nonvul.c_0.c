static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    unsigned long VAR6, VAR7 = 0;
    KVMDirtyLog VAR8 = {};
    VAR9 *VAR10;
    int VAR11 = 0;
    hwaddr VAR12 = VAR2->VAR13;
    hwaddr VAR14 = VAR12 + FUN2(VAR2->VAR6);
    VAR8.VAR15 = NULL;
    while (VAR12 < VAR14)
    {
        VAR10 = FUN3(VAR4, VAR12, VAR14);
        if (VAR10 == NULL)
        {
            break;
        }
        VAR6 = FUN4(((VAR10->VAR16) >> VAR17), 64) / 8;
        if (!VAR8.VAR15)
        {
            VAR8.VAR15 = FUN5(VAR6);
        }
        else if (VAR6 > VAR7)
        {
            VAR8.VAR15 = FUN6(VAR8.VAR15, VAR6);
        }
        VAR7 = VAR6;
        memset(VAR8.VAR15, 0, VAR7);
        VAR8.VAR18 = VAR10->VAR18;
        if (FUN7(VAR4, VAR19, &VAR8) == -1)
        {
            FUN8("", VAR20);
            VAR11 = -1;
            break;
        }
        FUN9(VAR2, VAR8.VAR15);
        VAR12 = VAR10->VAR12 + VAR10->VAR16;
    }
    FUN10(VAR8.VAR15);
    return VAR11;
}
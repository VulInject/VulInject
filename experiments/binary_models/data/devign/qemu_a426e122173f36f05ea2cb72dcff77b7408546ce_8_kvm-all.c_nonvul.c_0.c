static int FUN1(target_phys_addr_t VAR1, target_phys_addr_t VAR2)
{
    VAR3 *VAR4 = VAR5;
    unsigned long VAR6, VAR7 = 0;
    KVMDirtyLog VAR8;
    VAR9 *VAR10;
    int VAR11 = 0;
    VAR8.VAR12 = NULL;
    while (VAR1 < VAR2)
    {
        VAR10 = FUN2(VAR4, VAR1, VAR2);
        if (VAR10 == NULL)
        {
            break;
        }
        VAR6 = FUN3(((VAR10->VAR13) >> VAR14), VAR15) / 8;
        if (!VAR8.VAR12)
        {
            VAR8.VAR12 = FUN4(VAR6);
        }
        else if (VAR6 > VAR7)
        {
            VAR8.VAR12 = FUN5(VAR8.VAR12, VAR6);
        }
        VAR7 = VAR6;
        memset(VAR8.VAR12, 0, VAR7);
        VAR8.VAR16 = VAR10->VAR16;
        if (FUN6(VAR4, VAR17, &VAR8) == -1)
        {
            FUN7("", VAR18);
            VAR11 = -1;
            break;
        }
        FUN8(VAR10->VAR1, VAR8.VAR12, VAR10->VAR1, VAR10->VAR13);
        VAR1 = VAR10->VAR1 + VAR10->VAR13;
    }
    FUN9(VAR8.VAR12);
    return VAR11;
}
static int FUN1(struct VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR2->VAR6; ++VAR5)
    {
        struct VAR7 *VAR8 = VAR2->VAR9 + VAR5;
        hwaddr VAR10;
        void *VAR11;
        if (!FUN2(VAR3, VAR4, VAR8->VAR12, VAR8->VAR13))
        {
            continue;
        }
        VAR10 = VAR8->VAR13;
        VAR11 = FUN3(VAR8->VAR12, &VAR10, 1);
        if (!VAR11 || VAR10 != VAR8->VAR13)
        {
            fprintf(VAR14, "", VAR5);
            return -VAR15;
        }
        if (VAR11 != VAR8->VAR16)
        {
            fprintf(VAR14, "", VAR5);
            return -VAR17;
        }
        FUN4(VAR11, VAR10, 0, 0);
    }
    return 0;
}
static int FUN1(VAR1 *VAR2)
{
    static int VAR3;
    int VAR4;
    if (VAR3 == 0)
    {
        struct kvm_msr_list VAR5, *VAR6;
        VAR3 = -1;
        VAR5.VAR7 = 0;
        VAR4 = FUN2(VAR2->VAR8, VAR9, &VAR5);
        if (VAR4 < 0)
            return 0;
        VAR6 = FUN3(FUN4(1024, sizeof(VAR5) + VAR5.VAR7 * sizeof(VAR5.VAR10[0])));
        VAR6->VAR7 = VAR5.VAR7;
        VAR4 = FUN2(VAR2->VAR8, VAR9, VAR6);
        if (VAR4 >= 0)
        {
            int VAR11;
            for (VAR11 = 0; VAR11 < VAR6->VAR7; VAR11++)
            {
                if (VAR6->VAR10[VAR11] == VAR12)
                {
                    VAR3 = 1;
                    break;
                }
            }
        }
        free(VAR6);
    }
    if (VAR3 == 1)
        return 1;
    return 0;
}
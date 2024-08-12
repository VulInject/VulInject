static void FUN1(void *VAR1, int VAR2, RunState VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    int VAR8 = FUN2(VAR9, VAR10);
    int VAR11;
    if (VAR2)
    {
        struct kvm_clock_data VAR12 = {};
        if (!VAR5->VAR13)
        {
            uint64_t VAR14 = FUN3(VAR5);
            if (VAR14)
            {
                VAR5->VAR15 = VAR14;
            }
        }
        VAR5->VAR16 = false;
        VAR12.VAR15 = VAR5->VAR15;
        VAR11 = FUN4(VAR9, VAR17, &VAR12);
        if (VAR11 < 0)
        {
            fprintf(VAR18, "", strerror(VAR11));
            FUN5();
        }
        if (!VAR8)
        {
            return;
        }
        FUN6(VAR7)
        {
            VAR11 = FUN7(VAR7, VAR19, 0);
            if (VAR11)
            {
                if (VAR11 != -VAR20)
                {
                    fprintf(VAR18, "", VAR21, strerror(-VAR11));
                }
                return;
            }
        }
    }
    else
    {
        if (VAR5->VAR16)
        {
            return;
        }
        FUN8();
        FUN9(VAR5);
        VAR5->VAR16 = true;
    }
}
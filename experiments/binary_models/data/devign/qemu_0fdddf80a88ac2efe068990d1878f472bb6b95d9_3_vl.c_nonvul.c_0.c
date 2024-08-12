static void FUN1(struct VAR1 *VAR2)
{
    timer_t VAR3 = (VAR4)(long)VAR2->VAR5;
    struct itimerspec VAR6;
    int64_t VAR7 = VAR8;
    int64_t VAR9;
    if (!VAR10[VAR11] && !VAR10[VAR12])
        return;
    VAR7 = FUN2();
    if (FUN3(VAR3, &VAR6))
    {
        FUN4("");
        fprintf(VAR13, "");
        FUN5(1);
    }
    VAR9 = VAR6.VAR14.VAR15 * 1000000 + VAR6.VAR14.VAR16 / 1000;
    if (VAR9 && VAR9 <= VAR7)
        return;
    VAR6.VAR17.VAR15 = 0;
    VAR6.VAR17.VAR16 = 0;
    VAR6.VAR14.VAR15 = VAR7 / 1000000;
    VAR6.VAR14.VAR16 = (VAR7 % 1000000) * 1000;
    if (FUN6(VAR3, 0, &VAR6, NULL))
    {
        FUN4("");
        fprintf(VAR13, "");
        FUN5(1);
    }
}
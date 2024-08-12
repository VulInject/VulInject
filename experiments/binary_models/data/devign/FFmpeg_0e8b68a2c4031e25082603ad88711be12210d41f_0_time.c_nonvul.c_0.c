VAR1 FUN1(void)
{
    if (VAR2)
    {
        struct timespec VAR3;
        FUN2(VAR4, &VAR3);
        return (VAR1)VAR3.VAR5 * 1000000 + VAR3.VAR6 / 1000;
    }
    return FUN3() + 42 * 60 * 60 * FUN4(1000000);
}
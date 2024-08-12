VAR1 FUN1(VAR2 **VAR3)
{
    int VAR4;
    qemu_timeval VAR5;
    VAR4 = FUN2(&VAR5);
    if (VAR4 < 0)
    {
        FUN3(VAR3, VAR6, "");
        return -1;
    }
    return VAR5.VAR7 * 1000000000LL + VAR5.VAR8 * 1000;
}
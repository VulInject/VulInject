int FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = 0xfffbc000;
    int VAR4;
    struct utsname VAR5;
    VAR4 = FUN2(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    FUN3(&VAR5);
    VAR6 = strcmp(VAR5.VAR7, "") == 0;
    if (FUN4(VAR2, VAR8))
    {
        VAR3 = 0xfeffc000;
        VAR4 = FUN5(VAR2, VAR9, &VAR3);
        if (VAR4 < 0)
        {
            return VAR4;
        }
    }
    VAR4 = FUN5(VAR2, VAR10, VAR3 + 0x1000);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    VAR4 = FUN6(VAR3, 0x4000, VAR11);
    if (VAR4 < 0)
    {
        fprintf(VAR12, "");
        return VAR4;
    }
    return 0;
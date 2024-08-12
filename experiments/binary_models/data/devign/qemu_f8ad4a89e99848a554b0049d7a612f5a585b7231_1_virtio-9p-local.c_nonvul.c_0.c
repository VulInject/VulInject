static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int VAR4;
    if (VAR3->VAR5 != -1)
    {
        uint32_t VAR6 = FUN2(VAR3->VAR5);
        VAR4 = FUN3(VAR1, "", &VAR6, sizeof(VAR7), 0);
        if (VAR4)
        {
            return VAR4;
        }
    }
    if (VAR3->VAR8 != -1)
    {
        uint32_t VAR9 = FUN2(VAR3->VAR8);
        VAR4 = FUN3(VAR1, "", &VAR9, sizeof(VAR10), 0);
        if (VAR4)
        {
            return VAR4;
        }
    }
    if (VAR3->VAR11 != -1)
    {
        uint32_t VAR12 = FUN2(VAR3->VAR11);
        VAR4 = FUN3(VAR1, "", &VAR12, sizeof(VAR13), 0);
        if (VAR4)
        {
            return VAR4;
        }
    }
    if (VAR3->VAR14 != -1)
    {
        uint64_t VAR15 = FUN4(VAR3->VAR14);
        VAR4 = FUN3(VAR1, "", &VAR15, sizeof(VAR16), 0);
        if (VAR4)
        {
            return VAR4;
        }
    }
    return 0;
}
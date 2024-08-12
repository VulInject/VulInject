void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    int64_t VAR7 = 0;
    long VAR8, VAR9;
    VAR8 = FUN2(VAR4, VAR10, &VAR7);
    if (VAR8 >= 0)
    {
        if ((VAR7 & ~0x7fffffffULL) == 0x80000000)
            VAR7 = (VAR11)VAR7;
        VAR2->VAR12 = VAR7;
    }
    else
    {
        fprintf(VAR13, "", VAR4);
        FUN3(1);
    }
    VAR9 = 0;
    if (VAR6)
    {
        VAR9 = FUN4(VAR6, VAR14 + VAR15 + VAR10);
        if (VAR9 == (VAR16)-1)
        {
            fprintf(VAR13, "", VAR6);
            FUN3(1);
        }
    }
    if (VAR9 > 0)
    {
        int VAR17;
        VAR17 = sprintf(VAR14 + (16 << 20) - 256, "" VAR18 "", VAR15, VAR9);
        strcpy(VAR14 + (16 << 20) - 256 + VAR17, VAR5);
    }
    else
    {
        strcpy(VAR14 + (16 << 20) - 256, VAR5);
    }
    *(int *)(VAR14 + (16 << 20) - 260) = FUN5(0x12345678);
    *(int *)(VAR14 + (16 << 20) - 264) = FUN5(VAR3);
}
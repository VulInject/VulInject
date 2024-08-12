VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5, uint32_t VAR6, uint64_t VAR7)
{
    int VAR8 = VAR9;
    FUN2("" VAR10 "" VAR10 "", VAR11, VAR5, VAR6, VAR7);
    switch (VAR5 & 0xff)
    {
    case VAR12:
        break;
    case VAR13:
        if (VAR7)
        {
            return 3;
        }
        VAR4->VAR14[VAR6] &= 0xffffffff00000000ULL;
        VAR8 = 1;
        break;
    case VAR15:
        FUN3();
        FUN4(FUN5(FUN6(VAR4)));
        break;
    case VAR16:
        FUN7();
        FUN4(FUN5(FUN6(VAR4)));
        break;
    default:
        fprintf(VAR17, "" VAR10 "", VAR5);
        VAR8 = VAR18;
    }
    return VAR8;
}
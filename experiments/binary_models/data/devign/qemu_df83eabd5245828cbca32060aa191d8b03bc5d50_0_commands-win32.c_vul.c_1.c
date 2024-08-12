static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    DWORD VAR4 = 0;
    MIB_IFROW VAR5;
    memset(&VAR5, 0, sizeof(VAR5));
    VAR4 = FUN2(VAR1);
    VAR5.VAR6 = VAR4;
    if (VAR7 == FUN3(&VAR5))
    {
        VAR3->VAR8 = VAR5.VAR9;
        VAR3->VAR10 = VAR5.VAR11;
        VAR3->VAR12 = VAR5.VAR13;
        VAR3->VAR14 = VAR5.VAR15;
        VAR3->VAR16 = VAR5.VAR17;
        VAR3->VAR18 = VAR5.VAR19;
        VAR3->VAR20 = VAR5.VAR21;
        VAR3->VAR22 = VAR5.VAR23;
        return 0;
    }
    return -1;
}
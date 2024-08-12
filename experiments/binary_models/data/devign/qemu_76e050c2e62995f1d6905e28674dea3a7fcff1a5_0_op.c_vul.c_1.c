void FUN1(void)
{
    target_ulong VAR1;
    VAR1 = VAR2;
    VAR2 = (VAR3)VAR2 - (VAR3)VAR4;
    if (!((VAR2 >> 31) ^ (VAR4 >> 31) ^ (VAR1 >> 31)))
    {
        FUN2(VAR5, VAR6);
    }
    FUN3();
}
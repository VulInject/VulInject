void FUN1(void)
{
    target_ulong VAR1;
    VAR1 = VAR2;
    VAR2 += VAR3;
    if ((VAR2 >> 31) ^ (VAR3 >> 31) ^ (VAR1 >> 31))
    {
        FUN2(VAR4, VAR5);
    }
    FUN3();
}
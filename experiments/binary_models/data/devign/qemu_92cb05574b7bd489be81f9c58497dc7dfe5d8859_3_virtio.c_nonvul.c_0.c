bool FUN1(void)
{
    if (VAR1)
    {
        return (FUN2() == 4096);
    }
    return (VAR2.VAR3.VAR4 == 15) && (VAR2.VAR3.VAR5 == 12) && (FUN2() == 4096);
}
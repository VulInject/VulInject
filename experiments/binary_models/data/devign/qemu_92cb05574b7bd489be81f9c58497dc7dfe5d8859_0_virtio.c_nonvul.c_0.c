bool FUN1(void)
{
    if (VAR1)
    {
        return (FUN2() == 512);
    }
    return (VAR2.VAR3.VAR4 == 255) && (VAR2.VAR3.VAR5 == 63) && (FUN2() == 512);
}
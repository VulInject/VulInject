int FUN1(void)
{
    if (VAR1)
    {
        if ((*VAR1)(&VAR2, VAR3))
            return -1;
    }
    return 0;
}
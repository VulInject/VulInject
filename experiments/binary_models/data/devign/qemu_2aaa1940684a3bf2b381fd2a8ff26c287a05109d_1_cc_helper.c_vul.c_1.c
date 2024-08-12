static VAR1 FUN1(int32_t VAR2)
{
    if ((VAR1)VAR2 == 0x80000000UL)
    {
        return 3;
    }
    else if (VAR2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
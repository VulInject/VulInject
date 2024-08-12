VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5)
{
    if ((VAR6)VAR5 != (VAR7)VAR5)
    {
        FUN2();
        return ((VAR6)VAR5 >> 63) ^ 0x7fffffff;
    }
    return VAR5;
}
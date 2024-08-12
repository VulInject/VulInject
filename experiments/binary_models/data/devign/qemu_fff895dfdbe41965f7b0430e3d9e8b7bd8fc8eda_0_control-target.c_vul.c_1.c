static bool FUN1(void)
{
    VAR1 *VAR2;
    size_t VAR3 = 0;
    FUN2(VAR2)
    {
        VAR3++;
        if (VAR3 > 1)
        {
            return false;
        }
    }
    return true;
}
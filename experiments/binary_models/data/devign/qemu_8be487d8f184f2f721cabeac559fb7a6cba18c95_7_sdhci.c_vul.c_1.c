FUN1(VAR1 *VAR2, unsigned VAR3)
{
    if ((VAR2->VAR4 & 0x3) != VAR3)
    {
        FUN2(""
                 "");
        return false;
    }
    return true;
}
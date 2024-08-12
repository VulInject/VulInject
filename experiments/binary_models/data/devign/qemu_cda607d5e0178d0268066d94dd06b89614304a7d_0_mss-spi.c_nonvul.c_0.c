static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3 = VAR2->VAR4[VAR5] & VAR6;
    if (VAR3 <= 8)
    {
        VAR2->VAR7 = 32;
    }
    else if (VAR3 <= 16)
    {
        VAR2->VAR7 = 16;
    }
    else
    {
        VAR2->VAR7 = 8;
    }
}
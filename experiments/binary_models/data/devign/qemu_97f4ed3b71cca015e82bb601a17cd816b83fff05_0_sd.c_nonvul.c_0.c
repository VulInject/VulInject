static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5)
    {
        return VAR4->VAR6 == 41 || VAR4->VAR6 == 42;
    }
    if (VAR4->VAR6 == 16 || VAR4->VAR6 == 55)
    {
        return 1;
    }
    return VAR7[VAR4->VAR6 & 0x3F] == 0 || VAR7[VAR4->VAR6 & 0x3F] == 7;
}
static int FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    int VAR4;
    VAR3 &= 0x7FFFFFFFFFFFFFFFULL;
    VAR4 = FUN2(VAR3);
    for (VAR4 -= 7; VAR4 > 0; VAR4 -= 7)
    {
        FUN3(VAR2, 0x80 | (VAR3 >> VAR4));
    }
    FUN3(VAR2, VAR3 & 0x7f);
    return 0;
}
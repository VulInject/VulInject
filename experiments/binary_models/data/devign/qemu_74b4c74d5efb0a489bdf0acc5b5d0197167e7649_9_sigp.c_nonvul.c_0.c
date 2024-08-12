static int FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR1 *VAR8;
    bool VAR9 = true;
    FUN2(VAR7)
    {
        VAR8 = FUN3(VAR7);
        if (VAR8 == VAR2)
        {
            continue;
        }
        if (FUN4(VAR8) != VAR10)
        {
            VAR9 = false;
        }
    }
    *VAR5 &= 0xffffffff00000000ULL;
    *VAR5 |= (VAR9 ? VAR11 : VAR12);
    return VAR13;
}
int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5)
{
    int VAR6;
    VAR7 *VAR8 = NULL;
    VAR6 = FUN2(VAR2, VAR3, VAR4, VAR5, &VAR8);
    if (VAR8)
    {
        assert(VAR6 < 0);
        FUN3(VAR8);
    }
    else
    {
        assert(VAR6 > 0);
    }
    return VAR6;
}
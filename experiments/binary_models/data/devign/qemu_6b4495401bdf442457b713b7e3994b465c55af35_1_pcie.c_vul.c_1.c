int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5)
{
    int VAR6;
    VAR7 *VAR8;
    assert(FUN2(VAR2));
    VAR6 = FUN3(VAR2, VAR9, VAR3, VAR10);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR2->VAR11.VAR8 = VAR6;
    VAR8 = VAR2->VAR12 + VAR6;
    FUN4(VAR8, VAR5, VAR4, VAR13);
    return VAR6;
}
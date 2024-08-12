VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, int VAR5)
{
    uint32_t VAR6 = 0;
    assert(VAR5 == 1 || VAR5 == 2 || VAR5 == 4);
    VAR5 = FUN2(VAR5, VAR7 - VAR4);
    memcpy(&VAR6, VAR3->VAR8 + VAR4, VAR5);
    return FUN3(VAR6);
}
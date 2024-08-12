static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)FUN2(sizeof(VAR4));
    assert(VAR5);
    VAR5->VAR6.VAR7.VAR3 = VAR3;
    FUN3(VAR2, VAR5);
}
void FUN1(uintptr_t VAR1, uintptr_t VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    *VAR4 = FUN2(*VAR4, 0, 26, VAR2 >> 2);
    FUN3(VAR1, VAR1 + 4);
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    if (FUN2(VAR2, VAR4, VAR5) < 0)
        return -1;
    VAR2->VAR6 = 1;
    if (VAR2->VAR7)
        return 1;
    return 0;
}
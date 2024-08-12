static void FUN1(struct VAR1 *VAR2)
{
    int VAR3[2];
    VAR3[0] = (VAR2->VAR4[9] >> 6) & 3;
    VAR2->VAR5[0] = (VAR3[0] == 3);
    VAR3[1] = (VAR2->VAR4[9] >> 2) & 3;
    VAR2->VAR5[1] = (VAR3[1] == 3);
    if (VAR3[0] == 1 || VAR3[0] == 2 || VAR3[1] == 1 || VAR3[1] == 2)
        fprintf(VAR6, "", VAR7);
}
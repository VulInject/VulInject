static int FUN1(const void *VAR1, const void *VAR2)
{
    const VAR3 *const *VAR4 = VAR1;
    const VAR3 *const *VAR5 = VAR2;
    return (*VAR4)->VAR6 != (*VAR5)->VAR6 ? (*VAR4)->VAR6 - (*VAR5)->VAR6 : strcmp((*VAR4)->VAR7, (*VAR5)->VAR7);
}
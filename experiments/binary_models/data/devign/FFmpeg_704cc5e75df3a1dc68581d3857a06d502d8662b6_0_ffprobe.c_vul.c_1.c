static void FUN1(VAR1 **VAR2)
{
    int VAR3;
    if (!*VAR2)
        return;
    if ((*VAR2)->VAR4->VAR5)
        (*VAR2)->VAR4->FUN2(*VAR2);
    for (VAR3 = 0; VAR3 < VAR6; VAR3++)
        FUN3(&(*VAR2)->VAR7[VAR3], NULL);
    if ((*VAR2)->VAR4->VAR8)
        FUN4((*VAR2)->VAR9);
    FUN5(&((*VAR2)->VAR9));
    FUN5(VAR2);
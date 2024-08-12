void FUN1(VAR1 **VAR2)
{
    int VAR3;
    if (!*VAR2)
        return;
    for (VAR3 = 0; VAR3 < (*VAR2)->VAR4; ++VAR3)
        FUN2(&(*VAR2)->VAR5[VAR3]);
    FUN3((*VAR2)->VAR5);
    FUN4(VAR2);
}
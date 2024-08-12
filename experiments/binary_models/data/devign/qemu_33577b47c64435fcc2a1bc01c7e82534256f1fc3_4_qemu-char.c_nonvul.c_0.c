int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = (FUN2(VAR2, &VAR3, 1) == 1) ? VAR3 : -1;
    if (VAR2->VAR5)
    {
        fprintf(VAR6, "");
        FUN3(1);
    }
    return VAR4;
}
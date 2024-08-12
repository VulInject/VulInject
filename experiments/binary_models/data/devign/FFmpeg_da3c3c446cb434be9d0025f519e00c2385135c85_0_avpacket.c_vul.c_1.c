static int FUN1(VAR1 **VAR2, int VAR3)
{
    int VAR4;
    if ((unsigned)VAR3 >= (unsigned)VAR3 + VAR5)
        return FUN2(VAR6);
    VAR4 = FUN3(VAR2, VAR3 + VAR5);
    if (VAR4 < 0)
        return VAR4;
    memset((*VAR2)->VAR7 + VAR3, 0, VAR5);
    return 0;
}
static int FUN1(void)
{
    int VAR1;
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
        if (!VAR3[VAR1])
        {
            VAR3[VAR1] = 1;
            return VAR1;
        }
    fprintf(VAR4, "", VAR2);
    return -1;
}
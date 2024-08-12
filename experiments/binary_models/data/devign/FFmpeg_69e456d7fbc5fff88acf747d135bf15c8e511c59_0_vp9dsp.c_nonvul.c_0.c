static int FUN1(const VAR1 *VAR2, int VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR3 / sizeof(VAR1); VAR4 += 2)
        if (FUN2(&VAR2[VAR4]))
            return 0;
    return 1;
}
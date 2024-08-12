static void FUN1(VAR1 *VAR2, const int *VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < 30; VAR4++)
        *(VAR2++) = *(VAR3++);
}
static void *FUN1(void *VAR1)
{
    char *VAR2 = VAR1;
    int VAR3;
    VAR3 = open(VAR2, VAR4);
    if (VAR3 >= 0)
    {
        close(VAR3);
    }
    return NULL;
}
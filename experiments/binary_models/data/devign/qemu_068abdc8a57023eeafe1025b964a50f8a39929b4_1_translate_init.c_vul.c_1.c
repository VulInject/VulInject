int FUN1(const unsigned char *VAR1, VAR2 **VAR3)
{
    int VAR4, VAR5;
    VAR5 = -1;
    *VAR3 = NULL;
    for (VAR4 = 0; strcmp(VAR6[VAR4].VAR1, "") != 0; VAR4++)
    {
        if (FUN2(VAR1, VAR6[VAR4].VAR1) == 0)
        {
            *VAR3 = &VAR6[VAR4];
            VAR5 = 0;
            break;
        }
    }
    return VAR5;
}
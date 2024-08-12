static int FUN1(int argc, char **argv)
{
    const char *VAR1;
    int VAR2;
    struct VAR3 *VAR4;
    for (VAR4 = VAR5; VAR4->VAR6 != NULL; VAR4++)
    {
        if (VAR4->VAR7 == NULL)
        {
            continue;
        }
        VAR1 = getenv(VAR4->VAR7);
        if (VAR1 != NULL)
        {
            VAR4->FUN2(VAR1);
        }
    }
    VAR2 = 1;
    for (;;)
    {
        if (VAR2 >= argc)
        {
            break;
        }
        VAR1 = argv[VAR2];
        if (VAR1[0] != '')
        {
            break;
        }
        VAR2++;
        VAR1++;
        if (!strcmp(VAR1, ""))
        {
            break;
        }
        for (VAR4 = VAR5; VAR4->VAR6 != NULL; VAR4++)
        {
            if (!strcmp(VAR1, VAR4->argv))
            {
                if (VAR4->VAR8)
                {
                    if (VAR2 >= argc)
                    {
                        FUN3();
                    }
                    VAR4->FUN2(argv[VAR2]);
                    VAR2++;
                }
                else
                {
                    VAR4->FUN2(NULL);
                }
                break;
            }
        }
        if (VAR4->VAR6 == NULL)
        {
            FUN3();
        }
    }
    if (VAR2 >= argc)
    {
        FUN3();
    }
    VAR9 = argv[VAR2];
    VAR10 = argv[VAR2];
    return VAR2;
}
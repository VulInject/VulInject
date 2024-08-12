int main(int argc, char *argv[])
{
    const char *VAR1[] = {"", "", "", NULL};
    const char *VAR2[] = {"", "", NULL};
    const char *VAR3[] = {"", "", NULL};
    const char *VAR4[] = {"", "", "", NULL};
    const char *VAR5 = FUN1();
    FUN2(&argc, &argv, NULL);
    if (!strcmp(VAR5, ""))
    {
        FUN3(VAR3);
    }
    else if (!strcmp(VAR5, ""))
    {
        FUN3(VAR4);
    }
    else if (!strcmp(VAR5, ""))
    {
        FUN3(VAR1);
    }
    else if (!strcmp(VAR5, ""))
    {
        FUN3(VAR2);
    }
    else
    {
        FUN4();
    }
    return FUN5();
}
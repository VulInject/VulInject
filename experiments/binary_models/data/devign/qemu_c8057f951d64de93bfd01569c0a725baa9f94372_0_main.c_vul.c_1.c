static void FUN1(const char *VAR1)
{
    VAR2 = strdup(VAR1);
    if (VAR2 == NULL || strcmp(VAR2, "") == 0)
    {
        FUN2(VAR3, &fprintf, "");
        FUN3(VAR3, &fprintf);
        FUN4(1);
    }
}
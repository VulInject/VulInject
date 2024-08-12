static void FUN1(void *VAR1, int VAR2)
{
    if (VAR2 < 0)
    {
        FUN2("", strerror(-VAR2));
        FUN3(VAR3);
    }
}
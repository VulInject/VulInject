static void FUN1(const char *VAR1, int VAR2)
{
    time_t VAR3;
    struct tm VAR4;
    if (!strcmp(VAR1, "") && VAR2)
    {
        VAR5 = -1;
    }
    else
    {
        if (sscanf(VAR1, "", &VAR4.VAR6, &VAR4.VAR7, &VAR4.VAR8, &VAR4.VAR9, &VAR4.VAR10, &VAR4.VAR11) == 6)
        {
        }
        else if (sscanf(VAR1, "", &VAR4.VAR6, &VAR4.VAR7, &VAR4.VAR8) == 3)
        {
            VAR4.VAR9 = 0;
            VAR4.VAR10 = 0;
            VAR4.VAR11 = 0;
        }
        else
        {
            goto VAR12;
        }
        VAR4.VAR6 -= 1900;
        VAR4.VAR7--;
        VAR3 = FUN2(&VAR4);
        if (VAR3 == -1)
        {
        VAR12:
            fprintf(VAR13, ""
                            "");
            FUN3(1);
        }
        VAR5 = FUN4() - VAR3;
    }
}
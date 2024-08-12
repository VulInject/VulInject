int main(void)
{
    int VAR1, VAR2;
    VAR3 *VAR4 = NULL, *VAR5 = NULL;
    for (VAR1 = 0; VAR1 < 10000; VAR1++)
    {
        int VAR6 = (random() % 86294);
        if (FUN1(VAR4) > 999)
        {
            FUN2(NULL, VAR7, "", VAR1);
            FUN3(VAR4, 0);
            return -1;
        }
        FUN2(NULL, VAR7, "", VAR6);
        if (!VAR5)
            VAR5 = FUN4(VAR8);
        FUN5(&VAR4, (void *)(VAR6 + 1), VAR9, &VAR5);
        VAR6 = (random() % 86294);
        VAR2 = FUN6(VAR4, (void *)(VAR6 + 1), VAR9, NULL);
        if (VAR2)
        {
            VAR3 *VAR10 = NULL;
            FUN2(NULL, VAR7, "", VAR6);
            FUN5(&VAR4, (void *)(VAR6 + 1), VAR9, &VAR10);
            VAR2 = FUN6(VAR4, (void *)(VAR6 + 1), VAR9, NULL);
            if (VAR2)
                FUN2(NULL, VAR7, "", VAR1);
        }
    }
    return 0;
}
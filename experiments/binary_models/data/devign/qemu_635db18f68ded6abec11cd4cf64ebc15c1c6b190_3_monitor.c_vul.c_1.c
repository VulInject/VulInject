static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = VAR1;
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8.VAR9 = false;
        VAR4 = FUN2();
        FUN3(VAR6, VAR4);
        FUN4(VAR4);
        VAR10++;
        break;
    case VAR11:
        FUN5(&VAR6->VAR8.VAR12);
        FUN6(&VAR6->VAR8.VAR12, VAR13);
        VAR10--;
        FUN7();
        break;
    }
}
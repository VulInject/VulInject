static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = FUN2(VAR1);
    uint8_t VAR4[VAR3->VAR5];
    ssize_t VAR6;
    VAR6 = read(VAR3->VAR7, VAR4, VAR3->VAR5);
    FUN3(VAR6 != -1);
    VAR3->FUN4(VAR3->VAR1, VAR4, VAR6);
    VAR3->VAR8 = NULL;
    FUN5(VAR3->VAR7, NULL, NULL, NULL);
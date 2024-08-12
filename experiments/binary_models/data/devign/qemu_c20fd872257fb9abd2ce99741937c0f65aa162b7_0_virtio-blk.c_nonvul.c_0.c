static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6;
    MultiReqBuffer VAR7 = {
        .VAR8 = 0,
    };
    FUN2(VAR3->VAR9);
    VAR3->VAR9 = NULL;
    VAR3->VAR6 = NULL;
    while (VAR5)
    {
        FUN3(VAR5, &VAR7);
        VAR5 = VAR5->VAR10;
    }
    FUN4(VAR3->VAR11, &VAR7);
}
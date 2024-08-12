static unsigned __stdcall FUN1(void *VAR1)
{
    struct QemuThreadData VAR2 = *(struct VAR3 *)VAR1;
    VAR4 *VAR5 = VAR2.VAR5;
    free(VAR1);
    FUN2(VAR6, VAR5);
    FUN3(FUN4(), FUN5(), FUN4(), &VAR5->VAR5, 0, VAR7, VAR8);
    FUN6(VAR2.FUN7(VAR2.VAR1));
    FUN8();
}
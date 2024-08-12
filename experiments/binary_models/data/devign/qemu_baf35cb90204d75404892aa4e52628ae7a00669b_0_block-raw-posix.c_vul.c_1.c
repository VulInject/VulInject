void FUN1(void)
{
    sigset_t VAR1;
    int VAR2;
    if (FUN2())
        return;
    FUN3(&VAR1);
    FUN4(&VAR1, VAR3);
    FUN5(&VAR1, &VAR2);
    FUN6();
}
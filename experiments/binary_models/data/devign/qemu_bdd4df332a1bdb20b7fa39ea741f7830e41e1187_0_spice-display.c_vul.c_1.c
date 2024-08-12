void FUN1(VAR1 *VAR2)
{
    assert(VAR3.VAR2 == NULL);
    FUN2(&VAR3, VAR2);
    FUN3(VAR2, &VAR4);
    VAR3.VAR5.VAR6.VAR7 = &VAR8.VAR6;
    FUN4(&VAR3.VAR5.VAR6);
    assert(VAR3.VAR9);
    FUN5(&VAR3);
    FUN6(&VAR3);
}
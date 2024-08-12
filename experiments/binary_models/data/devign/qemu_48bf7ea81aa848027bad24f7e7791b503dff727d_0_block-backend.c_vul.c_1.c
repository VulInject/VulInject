void FUN1(VAR1 *VAR2)
{
    assert(VAR2->public.VAR3.VAR4);
    FUN2(FUN3(VAR2));
    FUN4(&VAR2->public.VAR3);
    FUN5(FUN3(VAR2));
}
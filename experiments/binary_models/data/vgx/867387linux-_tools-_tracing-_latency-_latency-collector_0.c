static void FUN1(void)
{
FUN2(&VAR1.mutex);

FUN3(VAR2, &VAR1.VAR3, VAR4);
FUN3(VAR5, &VAR1.VAR6, VAR7);
FUN4(&VAR1, VAR8);

FUN5(&VAR1.mutex);
}
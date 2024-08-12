int FUN1(pid_t VAR1, int VAR2)
{
cpu_set_t VAR3;

FUN2(&VAR3);
FUN3(VAR2, &VAR3);

if (FUN4(VAR1, sizeof(VAR4), &VAR3)) {
FUN5("");

return -1;
}

return 0;
}
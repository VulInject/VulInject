static void FUN1(void)
{
int VAR1, VAR2 = 0;
pid_t VAR3;


VAR3 = FUN2(VAR4, VAR5 + VAR6,
VAR7 | VAR8, NULL);

if (FUN3(VAR3 == -1, "", "", strerror(VAR9)))
return;

if (FUN3(FUN4(VAR3, &VAR1, 0) == -1, "", "", strerror(VAR9)))
return;

if (FUN3(FUN5(VAR1) != 0, "", ""))
return;
}
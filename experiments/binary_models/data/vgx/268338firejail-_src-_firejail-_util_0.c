void FUN1(void) {
if (!FUN2(VAR1))
return;

int VAR2 = 0;
int VAR3 = FUN3(VAR1, VAR4, &VAR2);
if (VAR3 != 0 || VAR2 == 0)
return;

FUN4("", VAR2);




sighandler_t VAR5 = signal(VAR6, VAR7);
VAR3 = FUN3(VAR1, VAR8, VAR9);
signal(VAR6, VAR5);

if (VAR3)
FUN4("", strerror(VAR10));
}
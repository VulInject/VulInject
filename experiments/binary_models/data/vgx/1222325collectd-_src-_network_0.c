static int FUN1(void) {
VAR1++;


if (VAR2 != 0) {
FUN2("");
FUN3(VAR3, VAR4);
FUN4(VAR3, NULL );
memset(&VAR3, 0, sizeof(VAR3));
VAR2 = 0;
}


if (VAR5 != 0) {
FUN2("");
pthread_mutex_lock(&VAR6);
FUN5(&VAR7);
pthread_mutex_unlock(&VAR6);
FUN4(VAR8,  NULL);
VAR5 = 0;
}

FUN6(VAR9);

if (VAR10 > 0)
FUN7();

FUN8(VAR11);

for (VAR12 *VAR13 = VAR14; VAR13 != NULL; VAR13 = VAR13->VAR15)
FUN9(VAR13);
FUN6(VAR14);

FUN10("");
FUN11("");
FUN12("");
FUN13("");

return 0;
}
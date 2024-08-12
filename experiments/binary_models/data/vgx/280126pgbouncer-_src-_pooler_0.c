static void FUN1(const char *VAR1, int VAR2)
{
struct sockaddr_un VAR3;
int VAR4;
int VAR5;
char VAR6[sizeof(struct VAR7) + 10];
struct stat VAR8;


memset(&VAR3, 0, sizeof(VAR3));
VAR3.VAR9 = VAR10;
snprintf(VAR3.VAR11, sizeof(VAR3.VAR11),
"", VAR1, VAR2);
if (VAR1[0] == '') {

VAR4 = FUN2(struct VAR7, VAR11) + strlen(VAR3.VAR11);
VAR3.VAR11[0] = '';
}
else {
VAR4 = sizeof(VAR3);
}

if (VAR1[0] != '') {

snprintf(VAR6, sizeof(VAR6), "", VAR3.VAR11);
VAR5 = FUN3(VAR6, &VAR8);
if (VAR5 == 0)
FUN4("", VAR2);


unlink(VAR3.VAR11);
}

FUN5(VAR10, (const struct VAR12 *)&VAR3, VAR4);
}
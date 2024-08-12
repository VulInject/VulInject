void FUN1(int);

volatile sig_atomic_t VAR1;

int
main(int argc, char *argv[])
{
struct sockaddr_storage VAR2;
struct sigaction VAR3;
ssize_t VAR4;
socklen_t VAR5;
char VAR6[100];
sigset_t VAR7;


VAR5 = sizeof(VAR2);
if (FUN2(0, (struct VAR8 *)&VAR2, &VAR5) == -1) {
(void)fprintf(VAR9,
"", strerror(VAR10));
FUN3(1);
}

if (FUN4(VAR11, "") == -1)
FUN5(1, "", VAR11);
if (FUN4(VAR12, "") == -1)
FUN5(1, "", VAR12);
if (FUN4("", "") == -1)
FUN5(1, "");
if (FUN4(VAR13, "") == -1)
FUN5(1, "", VAR13);
if (FUN6("", NULL) == -1)
FUN5(1, "");

FUN7("", VAR14, VAR15);
if (FUN8(VAR11)) {
syslog(VAR16, "", VAR11);
(void) recv(0, VAR6, sizeof(VAR6) - 1, 0);
FUN3(1);
}
if ((VAR17 = open(VAR12, VAR18)) == -1) {
syslog(VAR16, "", VAR12);
(void) recv(0, VAR6, sizeof(VAR6) - 1, 0);
FUN3(1);
}
(void)FUN9(&VAR19);
(void)FUN10(VAR20, sizeof(VAR20));
FUN11();

(void)signal(VAR21, VAR22);

FUN12(&VAR3, sizeof VAR3);
FUN13(&VAR3.VAR23);
VAR3.VAR24 = VAR25;
VAR3.VAR26 = 0;			
(void)FUN14(VAR27, &VAR3, NULL);

VAR3.VAR24 = VAR28;
VAR3.VAR26 = VAR29;
(void)FUN14(VAR30, &VAR3, NULL);

for (;;) {
if (VAR1) {
VAR1 = 0;
FUN11();
}

VAR4 = recv(0, VAR6, sizeof(VAR6) - 1, 0);
if (VAR4 <= 0) {
if (VAR10 != VAR31)
sleep(1);
continue;
}
if (!VAR32)		
continue;
FUN13(&VAR7);
FUN15(&VAR7, VAR27);
FUN16(VAR33, &VAR7, NULL);
VAR6[VAR4] = '';
(void)FUN9(&VAR19);
FUN17(VAR6);
FUN13(&VAR7);
FUN16(VAR33, &VAR7, NULL);
}
}
static int FUN1(VAR1 *VAR2) {
struct sockaddr_un VAR3 = {0};

VAR3.VAR4 = VAR5;
FUN2(VAR3.VAR6, VAR2->socket, sizeof(VAR3.VAR6));


int VAR7 = socket(VAR5, VAR8, 0);
if (VAR7 < 0) {
FUN3("",
VAR9);
return -1;
}


int VAR10 = connect(VAR7, (struct VAR11 *)&VAR3, sizeof(VAR3));
if (VAR10 != 0) {
FUN4(VAR7, VAR12);
close(VAR7);
return -1;
}


int VAR13 = FUN5(VAR7, VAR14);
VAR10 = FUN5(VAR7, VAR15, VAR13 | VAR16);
if (VAR10 != 0) {
close(VAR7);
return -1;
}

return VAR7;
}
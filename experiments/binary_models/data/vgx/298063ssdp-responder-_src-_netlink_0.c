int FUN1(void)
{
struct sockaddr_nl VAR1 = {
.VAR2 = VAR3,
.VAR4 = VAR5, 
};
int VAR6;

VAR6 = socket(VAR7, VAR8, VAR9);
if (VAR6 == -1) {
FUN2(VAR10, "", strerror(VAR11));
return -1;
}

if (FUN3(VAR6, (struct VAR12 *)&VAR1, sizeof(VAR1)) == -1) {
FUN2(VAR10, "", strerror(VAR11));
close(VAR6);
return -1;
}

VAR13 = FUN4(NULL);
if (FUN5(VAR6, NULL, (struct VAR12 *)&VAR1, NULL, VAR14)) {
close(VAR6);
return -1;
}

return 0;
}
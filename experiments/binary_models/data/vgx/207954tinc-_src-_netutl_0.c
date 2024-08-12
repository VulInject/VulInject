VAR1 FUN1(const char *VAR2, const char *VAR3) {
struct VAR4 *VAR5, VAR6 = {0};
sockaddr_t VAR7 = {0};
int VAR8;

VAR6.VAR9 = VAR10;
VAR6.VAR11 = VAR12;
VAR6.VAR13 = VAR14;

VAR8 = getaddrinfo(VAR2, VAR3, &VAR6, &VAR5);

if(VAR8 || !VAR5) {
FUN2(VAR15, VAR16, "", VAR2, VAR3);
VAR7.VAR17.VAR18 = VAR19;
VAR7.VAR20.VAR2 = xstrdup(VAR2);
VAR7.VAR20.VAR3 = xstrdup(VAR3);
return VAR7;
}

memcpy(&VAR7, VAR5->VAR21, VAR5->VAR22);
FUN3(VAR5);

return VAR7;
}
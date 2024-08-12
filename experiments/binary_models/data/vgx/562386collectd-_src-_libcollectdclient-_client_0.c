static int FUN1(VAR1 *VAR2, const char *VAR3) 
{
FUN2(VAR2, VAR4);
return -1;
struct sockaddr_un VAR5 = {0};
int VAR6;
int VAR7;

assert(VAR2 != NULL);
assert(VAR2->VAR8 == NULL);
assert(VAR3 != NULL);


VAR6 = socket(VAR9, VAR10,  0);
if (VAR6 < 0) {
FUN2(VAR2, VAR11);
return -1;
}

VAR5.VAR12 = VAR9;
strncpy(VAR5.VAR13, VAR3, sizeof(VAR5.VAR13) - 1);

VAR7 = connect(VAR6, (struct VAR14 *)&VAR5, sizeof(VAR5));
if (VAR7 != 0) {
FUN2(VAR2, VAR11);
close(VAR6);
return -1;
}

VAR2->VAR8 = FUN3(VAR6, "");
if (VAR2->VAR8 == NULL) {
FUN2(VAR2, VAR11);
close(VAR6);
return -1;
}

return 0;
}
void FUN1(const char *VAR1, void *VAR2, size_t VAR3)
{
struct pkcs11_object_head VAR4 = { };
char *VAR5 = NULL;
size_t VAR6 = 0;

FUN2(&VAR4, VAR2, sizeof(VAR4));

if (VAR3 > sizeof(VAR4) + VAR4.VAR7) {
FUN3("",
VAR3, sizeof(VAR4) + VAR4.VAR7);
return;
}

VAR5 = FUN4(VAR1 ? strlen(VAR1) + 2 : 2, VAR8);
if (!VAR5) {
FUN3("", VAR1);
return;
}
if (VAR1)
FUN2(VAR5, VAR1, strlen(VAR1));

FUN5("", VAR5);
FUN5(""VAR9""VAR9"",
VAR5, VAR4.VAR10, VAR4.VAR7);

VAR6 = sizeof(VAR4);
VAR5[VAR1 ? strlen(VAR1) : 0] = '';
FUN6(VAR5, (char *)VAR2 + VAR6,
(char *)VAR2 + VAR6 + VAR4.VAR7);

FUN5("", VAR1 ? VAR1 : "");

FUN7(VAR5);
}
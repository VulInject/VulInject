void *FUN1(char *VAR1) {

struct VAR2 *VAR3 = VAR4.VAR5;

while (VAR3) {
if (!strcmp(VAR1, VAR3->VAR1)) {
return VAR3->VAR3;
}
VAR3 = VAR3->VAR6;
}
return NULL;
}
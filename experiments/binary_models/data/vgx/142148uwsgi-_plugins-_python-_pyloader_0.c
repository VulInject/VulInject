VAR1 *FUN1(void *VAR2) {

VAR1 *VAR3 = NULL;
char *VAR4;

struct VAR5 *VAR6 = (struct VAR5 *) VAR2;


if (VAR6->VAR7 > 0) {
VAR4 = FUN2(VAR6->VAR8, VAR6->VAR7);
VAR3 = FUN3((void *)VAR4);
free(VAR4);
}

else if (VAR6->VAR9 > 0) {
if (VAR6->VAR10 > 0) {
VAR4 = FUN4(VAR6->VAR11, VAR6->VAR9, "", 1, VAR6->VAR3, VAR6->VAR10);
}
else {
VAR4 = FUN2(VAR6->VAR11, VAR6->VAR9);
}
VAR3 = FUN3((void *)VAR4);
free(VAR4);
}

else if (VAR6->VAR12 > 0) {
VAR4 = FUN2(VAR6->VAR13, VAR6->VAR12);
VAR3 = FUN5((void *)VAR4);
free(VAR4);
}



return VAR3;
}
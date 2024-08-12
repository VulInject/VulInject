static int FUN1(void *VAR1,
const char *VAR2, size_t VAR3,
const char *VAR4, size_t VAR5)
{
int VAR6 = 0;
struct VAR7 *VAR8 = (struct VAR7 *)VAR1;
struct seendata VAR9, VAR10;
char *VAR11 = FUN2(VAR2, VAR3);
int VAR12 = 0;

FUN3(VAR4, VAR5, &VAR10);

if (FUN4(VAR8, VAR11, &VAR9)) {
VAR12 = 1; 
}
else {
if (VAR10.VAR13 > VAR9.VAR13) VAR12 = 1;
if (VAR10.VAR14 > VAR9.VAR14) VAR12 = 1;
}

if (VAR12) {

VAR6 = FUN5(VAR8, VAR11, &VAR10);
}

free(VAR11);

return VAR6;
}
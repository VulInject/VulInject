static void FUN1(const char *VAR1)
{
struct stat VAR2;
int VAR3;
char *VAR4;

VAR3 = open(VAR1, VAR5);
if (VAR3 < 0) {
fprintf(VAR6, "");
FUN2(VAR1);
FUN3(2);
}
if (FUN4(VAR3, &VAR2) < 0) {
fprintf(VAR6, "");
FUN2(VAR1);
FUN3(2);
}
if (VAR2.VAR7 == 0) {
close(VAR3);
return;
}
VAR4 = malloc(VAR2.VAR7 + 1);
if (!VAR4) {
FUN2("");
close(VAR3);
return;
}
if (read(VAR3, VAR4, VAR2.VAR7) != VAR2.VAR7) {
FUN2("");
close(VAR3);
return;
}
VAR4[VAR2.VAR7] = '';
close(VAR3);

FUN5(VAR4);

free(VAR4);
}
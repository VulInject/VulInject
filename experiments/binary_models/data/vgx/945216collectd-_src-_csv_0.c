static int FUN1(const char *VAR1, const VAR2 *VAR3) {
VAR4 *VAR5;

if (FUN2(VAR1))
return -1;

VAR5 = fopen(VAR1, "");
if (VAR5 == NULL) {
FUN3("", VAR1, VAR6);
return -1;
}

fprintf(VAR5, "");
for (size_t VAR7 = 0; VAR7 < VAR3->VAR8; VAR7++)
fprintf(VAR5, "", VAR3->VAR3[VAR7].VAR9);

fprintf(VAR5, "");
fclose(VAR5);

return 0;
}
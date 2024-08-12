int
FUN1(const char *VAR1, int VAR2, const char *VAR3, const char *VAR4)
{
char VAR5[1024];
char VAR6[1024];
VAR7 *VAR8, *VAR9;
int VAR10, VAR11;

FUN2(VAR1, VAR2);

VAR8 = fopen(VAR3, "");
VAR9 = fopen(VAR4, "");
if (VAR8 == NULL || VAR9 == NULL) {
if (VAR8) fclose(VAR8);
if (VAR9) fclose(VAR9);
return (0);
}
for (;;) {
VAR10 = (int)fread(VAR5, 1, sizeof(VAR5), VAR8);
VAR11 = (int)fread(VAR6, 1, sizeof(VAR6), VAR9);
if (VAR10 != VAR11)
break;
if (VAR10 == 0 && VAR11 == 0) {
fclose(VAR8);
fclose(VAR9);
return (1);
}
if (memcmp(VAR5, VAR6, VAR10) != 0)
break;
}
fclose(VAR8);
fclose(VAR9);
FUN3(VAR1, VAR2, "");
FUN4(""%VAR12\"", VAR3);
FUN4(""%VAR12\"", VAR4);
FUN5(NULL);
return (0);
}
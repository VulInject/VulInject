int main(int argc, char **argv)
{
size_t VAR1, VAR2;
void *VAR3, *VAR4;
VAR5 *VAR6;
char *VAR7, *VAR8;
int VAR9;

if (argc != 4) {
FUN1("");
return 1;
}


VAR7 = strdup(argv[3]);
VAR9 = strlen(VAR7);
if (VAR9 >= 3 && !strcmp(VAR7 + VAR9 - 3, "")) {
VAR7 = NULL;
} else {
VAR8 = strrchr(VAR7, '');
if (VAR8)
VAR7 = VAR8 + 1;
VAR8 = strchr(VAR7, '');
if (VAR8)
*VAR8 = '';
for (VAR8 = VAR7; *VAR8; VAR8++)
if (*VAR8 == '')
*VAR8 = '';
}

FUN2(argv[1], &VAR3, &VAR1, VAR10);
FUN2(argv[2], &VAR4, &VAR2, VAR10);

VAR11 = argv[3];
VAR6 = fopen(VAR11, "");
if (!VAR6)
FUN3(1, "", argv[2]);

FUN4(VAR3, VAR1, VAR4, VAR2, VAR6, VAR7);

FUN5(VAR3, VAR1);
FUN5(VAR4, VAR2);
fclose(VAR6);

return 0;
}
int main (int argc, char **argv)
{
FUN1("");
VAR1 *VAR2 = NULL;
long int VAR3 = 0;
unsigned char *VAR4 = NULL;
int VAR5 = 1;

if (argc < 2) {
fprintf(VAR6, "");
VAR3 = 0;
} else {
if ((VAR2 = fopen(argv[1], "")) == NULL
|| FUN2(VAR2, 0, VAR7) != 0
|| (VAR3 = FUN3(VAR2)) < 0) {
fprintf(VAR6, "");
goto VAR8;
}
FUN4(VAR2);
if ((VAR4 = (unsigned char*) malloc(VAR3)) == NULL) {
fprintf(VAR6, "");
goto VAR8;
}

if (fread(VAR4, 1, VAR3, VAR2) != (VAR9)VAR3) {
fprintf(VAR6, "");
goto VAR8;
}
}

FUN5(VAR4, VAR3);
VAR5 = 0;

VAR8:
if (VAR2)
fclose(VAR2);
if (VAR4)
free(VAR4);
FUN1("");
return VAR5;
}
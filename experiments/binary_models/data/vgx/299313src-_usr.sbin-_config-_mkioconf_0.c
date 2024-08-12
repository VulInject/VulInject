static int
FUN1(VAR1 *VAR2)
{
VAR1 *VAR3;
size_t VAR4;
char VAR5[200], VAR6[VAR7];

if (fprintf(VAR2, "\
\VAR4\VAR4", VAR8) < 0)
return (1);
(void)snprintf(VAR5, sizeof VAR5, "", VAR9);
if ((VAR3 = fopen(VAR5, "")) != NULL) {
while ((VAR4 = fread(VAR6, 1, sizeof(VAR6), VAR3)) > 0)
if (fwrite(VAR6, 1, VAR4, VAR2) != VAR4)
return (1);
if (FUN2(VAR3)) {
FUN3("", VAR5);
(void)fclose(VAR3);
return (-1);
}
(void)fclose(VAR3);
} else {
if (fputs("\
return (1);
}
return (0);
}
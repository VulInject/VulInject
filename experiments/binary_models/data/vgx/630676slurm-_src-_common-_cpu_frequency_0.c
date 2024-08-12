static VAR1
FUN1(int VAR2, char* VAR3)
{
VAR4 *VAR5 = NULL;
char VAR6[VAR7];
uint32_t VAR8;

snprintf(VAR6, sizeof(VAR6), VAR9
"", VAR2, VAR3);
if ( ( VAR5 = fopen(VAR6, "") ) == NULL ) {
FUN2("", VAR10, VAR3);
return 0;
}
if (fscanf (VAR5, "", &VAR8) < 1) {
FUN2("", VAR10, VAR3);
fclose(VAR5);
return 0;
}
fclose(VAR5);
return VAR8;
}
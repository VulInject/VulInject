VAR1 FUN1(const char *VAR2, int *VAR3) {
uint64_t VAR4 = 0;
char *VAR5;
int VAR6 = 0;

VAR4 = FUN2(VAR2, &VAR5, 16);
if (*VAR5) {
FUN3("", VAR7, VAR2,
*VAR5);
VAR6 = -VAR8;
}
if (VAR3 != NULL)
*VAR3 = VAR6;
return VAR4;
}
static void
FUN1(char *VAR1, size_t VAR2)
{
struct tm	VAR3;
struct timeval	VAR4;

if ((VAR1 == NULL) || (VAR2 == 0))
return;

VAR1[0] = '';

if (FUN2(&VAR4, NULL) != 0) {
(void) fprintf(VAR5, "",
strerror(VAR6));
return;
}

if (FUN3(&VAR4.VAR7, &VAR3) == NULL) {
(void) fprintf(VAR5, "",
strerror(VAR6));
return;
}

if (FUN4(VAR1, VAR2, "", &VAR3) == 0) {
(void) fprintf(VAR5, ""
"", VAR2);

VAR1[0] = '';
}
}
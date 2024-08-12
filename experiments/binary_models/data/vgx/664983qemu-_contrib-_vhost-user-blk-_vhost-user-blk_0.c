static int FUN1(const char *VAR1, bool VAR2)
{
int VAR3;
int VAR4 = VAR5;

if (!VAR2) {
VAR4 |= VAR6;
}

VAR3 = open(VAR1, VAR4);
if (VAR3 < 0) {
fprintf(VAR7, "", VAR1,
strerror(VAR8));
return -1;
}

return VAR3;
}
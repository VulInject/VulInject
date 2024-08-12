static bool FUN1(const char *VAR1, const char *VAR2) {
bool VAR3 = *VAR2 == '';
bool VAR4 = FUN2 (VAR2) == '';
if (VAR3 && VAR4) {
return strlen (VAR1) == strlen (VAR2) - 2 && \
!FUN3 (VAR1, VAR2 + 1, strlen (VAR2) - 2);
}
if (VAR3) {
return !FUN3 (VAR1, VAR2 + 1, strlen (VAR2) - 1);
}
if (VAR4) {
int VAR5 = strlen (VAR1);
int VAR6 = strlen (VAR2) - 1;
if (VAR5 <= VAR6) {
return false;
}
const char *VAR7 = VAR1 + strlen (VAR1) - VAR6;
return (!FUN3 (VAR7, VAR2, VAR6));
}
return strstr (VAR1, VAR2);
}
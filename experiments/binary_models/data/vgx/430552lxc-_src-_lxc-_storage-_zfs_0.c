static bool FUN1(const char *VAR1, char *VAR2, size_t VAR3)
{
struct VAR4 *VAR5;
bool VAR6 = false;

VAR5 = FUN2("");
if (VAR5 == NULL) {
FUN3("");
return false;
}

while (fgets(VAR2, VAR3, VAR5->VAR5)) {
if (strstr(VAR2, VAR1)) {
VAR6 = true;
break;
}
}
(void)FUN4(VAR5);

return VAR6;
}
const char *
FUN1(uint32_t VAR1)
{
static char VAR2[40];

snprintf(VAR2, sizeof(VAR2), "",
(VAR1 & VAR3)? "" : "",
(VAR1 & VAR4)? "" : "");

if (strlen(VAR2) > 0)
return &VAR2[1];

return "";
}
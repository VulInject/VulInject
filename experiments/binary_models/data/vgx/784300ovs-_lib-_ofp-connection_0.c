static const char *
FUN1(enum ofp_port_reason VAR1,
char *VAR2, size_t VAR3)
{
switch (VAR1) {
case VAR4:
return "";

case VAR5:
return "";

case VAR6:
return "";

case VAR7:
default:
snprintf(VAR2, VAR3, "", (int) VAR1);
return VAR2;
}
}
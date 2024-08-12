VAR1 FUN1(const char *VAR2,
const char *VAR3,
struct VAR4 *VAR5)
{

char *VAR6 = FUN2("", VAR2, VAR3);
if(!VAR6)
return VAR7;

FUN3(VAR5, VAR6, strlen(VAR6), VAR8);
return VAR9;
}
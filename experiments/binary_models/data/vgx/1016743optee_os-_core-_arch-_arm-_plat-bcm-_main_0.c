FUN1(VAR1, VAR2, VAR3);

void FUN2(const char *VAR4)
{
const char *VAR5;

for (VAR5 = VAR4; *VAR5; VAR5++)
FUN3(*VAR5);
}
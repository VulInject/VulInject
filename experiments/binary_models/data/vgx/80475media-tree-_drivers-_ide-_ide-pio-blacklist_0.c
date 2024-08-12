int FUN1(char *VAR1)
{
struct VAR2 *VAR3;

for (VAR3 = VAR4; VAR3->VAR5 != NULL; VAR3++) {
if (FUN2(VAR3->VAR5, VAR1, strlen(VAR3->VAR5)) == 0)
return VAR3->VAR6;
}
return -1;
}
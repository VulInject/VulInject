static int FUN1(const VAR1 *VAR2, uint32_t VAR3)
{
int VAR4;


const char *VAR5 = FUN2(VAR2, VAR3);


if (VAR5 == NULL)
return 0;


if ((VAR2->VAR6 & VAR7) == 0)
{
for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++) {
if (strcmp(VAR5, (char *)VAR2->VAR9[VAR4])==0) {
FUN3((void *)VAR5);
return 1;
}
}
} else {

for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++) {
if (strcmp(VAR5, (char *)VAR2->VAR9[VAR4])==0) {
FUN3((void *)VAR5);
return 0; 
}
}
FUN3((void *)VAR5);
return 1; 
}
FUN3((void *)VAR5);
return 0;
}
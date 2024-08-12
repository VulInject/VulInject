static int FUN1 (VAR1 *VAR2,
int *VAR3, int *VAR4)
{
struct VAR5 *VAR6;
char *VAR7 = (char *)&VAR2->VAR8[VAR9];
char VAR10[VAR11];

if (*VAR7 == 0)
return 0;

strncpy(VAR10, VAR7, VAR11);
FUN2(VAR10, VAR11, 1); 

for (VAR6 = VAR12 ; VAR6->VAR13 != -1 ; VAR6++) {
if (!FUN3(VAR6->VAR10, VAR10+VAR6->VAR13, 4)) {
FUN4(VAR14 "", VAR2->VAR15);
*VAR3 = VAR6->VAR16;
*VAR4 = VAR6->VAR17;
return 1;
}
}
return 0;
}
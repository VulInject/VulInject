static void
FUN1(VAR1 *VAR2,VAR1 *VAR3)
{
int VAR4;
char *VAR5, *VAR6;

VAR5 = (char *)VAR3->VAR7; 
VAR6 = (char *)VAR2->VAR7; 

for (VAR4 = 0; VAR4 < VAR3->VAR8; VAR4++)
{
memcpy(VAR6, VAR5, VAR3->VAR9);
VAR5 += VAR3->VAR9;
VAR6 += VAR2->VAR9;
}
}
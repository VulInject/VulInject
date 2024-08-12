static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7)
{
int VAR8 = 0;
char *VAR9 = NULL;

if(VAR2==NULL || VAR4==NULL)
return -1;

if(VAR10 != VAR2->VAR11 || VAR12==0)
{
VAR12 = FUN2(NULL);
VAR10 = VAR2->VAR11;
}
VAR9 = FUN3((unsigned int)(VAR13)VAR12, &VAR8, VAR6, VAR6==10?0:8);

VAR4->VAR14 = VAR9;
VAR4->VAR15 = VAR8;

return 0;
}
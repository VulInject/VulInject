char	*FUN1(char *VAR1);
void	*FUN2(size_t VAR2);
void	*FUN3(size_t VAR3, size_t VAR2);
void	*FUN4(void *VAR4, size_t VAR2);
static void *FUN5(void *VAR4);



char *
FUN1(char *VAR1)
{
return (strcpy(FUN2(strlen(VAR1) + 1), VAR1));
}
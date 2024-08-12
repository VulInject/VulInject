typedef int (*VAR1)(VAR2 *VAR3, uint64_t VAR4, struct VAR5 *VAR6, VAR7 *VAR8);

static int FUN1(VAR2 *VAR3, const VAR7 *VAR9)
{
char *VAR10 = FUN2(VAR9, 0);
if (VAR10 == NULL)
return -VAR11;
FUN3(""VAR12"", VAR3->VAR4, strlen(VAR10), VAR10);
int VAR13 = FUN4(VAR3, VAR10);
free(VAR10);
return VAR13;
}
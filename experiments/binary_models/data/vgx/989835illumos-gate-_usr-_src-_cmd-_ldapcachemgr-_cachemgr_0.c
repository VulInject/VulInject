static  int FUN1(VAR1 *VAR2);
static int FUN2(VAR1 *VAR2);
static int FUN3(int VAR3, char *VAR4, VAR5 **VAR6);
int FUN4(char *VAR4, VAR5 **VAR7);
static void FUN5(VAR8 *VAR9, VAR10 *VAR11);

int			VAR12 = 0;
static unsigned int	VAR13 = 10800;	

static VAR14 *
FUN6(char *VAR15)
{
static const char *VAR16[1] = {""};

if (FUN7(VAR16[0], VAR15, strlen(VAR16[0])) == 0)
return (&VAR17.VAR18);

return (NULL);
}
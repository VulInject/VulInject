char *
FUN1(const char *VAR1)
{
return ((char *)FUN2(VAR1, VAR2));
}

static void catch(int);

static char *
FUN2(const char *VAR1, int VAR3)
{
struct termio VAR4;
unsigned short VAR5;
char *VAR6;
int VAR7;
VAR8	*VAR9;
char *VAR10 = FUN3(VAR11, VAR2 + 1, NULL);
struct sigaction VAR12, VAR13, VAR14;

if (VAR10 == NULL ||
(VAR9 = fopen("", "")) == NULL)
return (NULL);
FUN4(VAR9, NULL);

VAR15 = 0;
VAR12.VAR16 = 0;
VAR12.VAR17 = catch;
(void) FUN5(&VAR12.VAR18);
(void) FUN6(VAR19, &VAR12, &VAR13);	
VAR12.VAR17 = VAR20;
(void) FUN6(VAR21, &VAR12, &VAR14);	
(void) FUN7(FUN8(VAR9), VAR22, &VAR4);
VAR5 = VAR4.VAR23;
VAR4.VAR23 &= ~(VAR24 | VAR25 | VAR26 | VAR27);
(void) FUN7(FUN8(VAR9), VAR28, &VAR4);

(void) fputs(VAR1, VAR9);
VAR6 = VAR10;
while (!VAR15 &&
(VAR7 = FUN9(VAR9)) != '' && VAR7 != '' && VAR7 != VAR29) {
if (VAR6 < &VAR10[ VAR3 ])
*VAR6++ = (char)VAR7;
}
*VAR6 = '';
(void) FUN10('', VAR9);

VAR4.VAR23 = VAR5;
(void) FUN7(FUN8(VAR9), VAR30, &VAR4);
(void) FUN6(VAR19, &VAR13, NULL);
(void) FUN6(VAR21, &VAR14, NULL);
(void) fclose(VAR9);
if (VAR15) {		
VAR10[0] = '';
(void) FUN11(FUN12(), VAR19);
}
return (VAR10);
}
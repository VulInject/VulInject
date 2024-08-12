int		FUN1(VAR1 *, char *);
int		FUN2(const char *, const char *);
int		FUN3(const char *, const char *);
char *		FUN4(VAR1 *);
char *		FUN5(VAR1 *);
void		FUN6(char **, int, struct VAR2 *);
void		FUN7(char **, const char *);

unsigned long
FUN8(unsigned long VAR3)
{
unsigned long VAR4 = 0;

while (VAR3 > 0) {
VAR4 += VAR3 % 10;
VAR3 /= 10;
}
return (VAR4);
}
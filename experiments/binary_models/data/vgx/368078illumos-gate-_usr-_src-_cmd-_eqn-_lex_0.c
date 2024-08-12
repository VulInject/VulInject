char	VAR1[VAR2];
int	VAR3;
char	VAR4[VAR5+VAR2];	
char	*VAR6	= VAR4;

extern VAR7 *VAR8[];
extern VAR7 *VAR9[];

void FUN1(int);
void FUN2(void);
void FUN3(char *, int);
void FUN4(void);
int FUN5(void);
void FUN6(char *);
void FUN7(void);

int
FUN8(void)
{
VAR10:
if (VAR6 > VAR4)
return (*--VAR6);	
VAR11 = getc(VAR12);
if (VAR11 == '')
VAR13++;
if (VAR11 != VAR14)
return (VAR11);
if (++VAR15 > VAR16) {
return (VAR14);
}
(void) fclose(VAR12);
VAR13 = 1;
if (FUN5() == 0)
goto VAR10;
return (VAR14);
}
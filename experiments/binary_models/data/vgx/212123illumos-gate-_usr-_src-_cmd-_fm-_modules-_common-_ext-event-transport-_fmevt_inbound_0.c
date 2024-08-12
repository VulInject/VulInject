static int
FUN1(VAR1 *VAR2, void *VAR3)
{
char *VAR4 = NULL, *VAR5, *VAR6;
uint32_t VAR7 = (VAR8)VAR3;
VAR9 *VAR10 = NULL;
struct fmevt_ppargs VAR11;
VAR9 *VAR12;
int VAR13, VAR14;
fmev_pri_t VAR15;

FUN2(VAR16);

if (VAR7 & ~VAR17)
FUN3(VAR18, ""
"");

VAR13 = (VAR7 & VAR19) != 0;
VAR14 = (VAR7 & VAR20) != 0;
VAR15 = (VAR7 & VAR21 ? VAR22 : VAR23);

(void) pthread_mutex_lock(&VAR24);

if (VAR25) {
while (VAR26 > 0)
(void) FUN4(&VAR27, &VAR24);
(void) pthread_mutex_unlock(&VAR24);
return (0);	
}

VAR26++;
(void) pthread_mutex_unlock(&VAR24);

VAR4 = FUN5(VAR2);	
VAR5 = FUN6(VAR2);	
VAR6 = FUN7(VAR2);	

if (FUN8(VAR2, &VAR10) != 0) {
FUN2(VAR28);
goto VAR29;
}

if ((VAR12 = FUN9(VAR10, VAR4, VAR13, VAR14,
VAR15)) == NULL) {
FUN2(VAR30);
goto VAR29;
}

VAR11.VAR31 = VAR5;
VAR11.VAR32 = VAR6;
FUN10(VAR2, &VAR11.VAR33);
VAR11.VAR34 = VAR13;
VAR11.VAR35 = VAR14;
VAR11.VAR36 = VAR15;

FUN11(VAR4, VAR12, VAR10, &VAR11);
FUN12(VAR12);
VAR29:
(void) pthread_mutex_lock(&VAR24);

if (--VAR26 == 0 && VAR25)
(void) FUN13(&VAR27);

(void) pthread_mutex_unlock(&VAR24);

if (VAR4)
free(VAR4);

FUN12(VAR10);

return (0);	
}
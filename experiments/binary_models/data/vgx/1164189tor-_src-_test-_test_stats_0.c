static void
FUN1(void *VAR1)
{
(void)VAR1;

time_t VAR2 = 1572500000; 
time_t VAR3 = FUN2(VAR2, FUN3(NULL)) + 365*24*60*60;
int VAR4;


char *VAR5 = FUN4(FUN5(""));
FUN6(FUN7()->VAR6);
FUN7()->VAR6 = FUN4(VAR5);
FUN8(VAR5, VAR7, NULL);

FUN9(VAR3);



VAR4 = FUN10(VAR2);
FUN11(VAR4, VAR8, -1);
FUN9(VAR3);



VAR4 = FUN12(VAR2, 0);
FUN11(VAR4, VAR8, 0);
VAR4 = FUN10(VAR2);
FUN11(VAR4, VAR8, 0);
FUN9(VAR3);

VAR4 = FUN12(VAR2, 1);
FUN11(VAR4, VAR8, 0);
VAR4 = FUN10(VAR2);
FUN11(VAR4, VAR8, 0);
FUN9(VAR3);

VAR9:
FUN9(VAR3);
FUN6(VAR5);
}
extern int FUN1(void)
{
int VAR1 = VAR2;
char *VAR3 = "";
char *VAR4 = NULL;
char *VAR5 = NULL, *VAR6, *VAR7 = NULL;

FUN2(&VAR8);

if (VAR9 >= 0)
goto VAR10;

VAR4 = FUN3();
VAR9 = 0; 
VAR6 = VAR4;
while ((VAR7 = FUN4(VAR6, "", &VAR5))) {
xrealloc(VAR11, sizeof(VAR12) *
(VAR9 + 1));
xrealloc(VAR13, (sizeof(VAR14 *) *
(VAR9 + 1)));
if (FUN5(VAR7, "", 25) == 0)
VAR7 += 25; 
VAR7 = FUN6("", VAR3, VAR7);
VAR13[VAR9] = FUN7(
VAR3, VAR7, (void **)&VAR11[VAR9],
VAR15, sizeof(VAR15));
if (!VAR13[VAR9]) {
FUN8("",
VAR3, VAR7);
FUN9(VAR7);
VAR1 = VAR16;
break;
}

FUN9(VAR7);
VAR9++;
VAR6 = NULL; 
}
FUN9(VAR4);
VAR17 = true;

VAR10:
FUN10(&VAR8);
if (VAR1 != VAR2)
FUN11("", VAR3);
FUN9(VAR7);


return VAR1;
}
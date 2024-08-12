static int FUN1(VAR1 **VAR2, VAR3 *VAR4)
{
loff_t VAR5, read;
int VAR6;
void *VAR7 = NULL;

*VAR2 = NULL;
*VAR4 = 0;
FUN2("",
VAR8, VAR9);
VAR6 = FUN3("", VAR8, VAR10);
if (VAR6 < 0)
goto VAR11;

VAR6 = FUN4(VAR9, &VAR5);
if (VAR6 < 0)
goto VAR11;

VAR7 = malloc(VAR5);
if (!VAR7) {
VAR6 = -VAR12;
goto VAR11;
}

VAR6 = FUN3("", VAR8, VAR10);
if (VAR6 < 0)
goto VAR11;

VAR6 = FUN5(VAR9, (VAR13)VAR7, 0, VAR5,
&read);
if (VAR6 < 0)
goto VAR11;

*VAR2 = VAR7;
*VAR4 = VAR5;
FUN2("");

VAR11:
if (VAR6 < 0) {
FUN6("",
VAR8,
VAR9, VAR6);
free(VAR7);
}
return VAR6;
}
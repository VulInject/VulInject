int FUN1(char *VAR1, char *VAR2, char *VAR3)
{
char *VAR4;
int VAR5;

VAR4 = FUN2(VAR1);
if (!VAR4) {
FUN3("", VAR1);
return 0;
}

VAR5 = FUN4(VAR6, VAR4);
if (VAR5 == -1) {
FUN3("", VAR4);
FUN5(VAR4);
return 0;
}

FUN5(VAR4);


if ((!VAR6[VAR5].VAR7) && (!VAR8[VAR5].VAR7)) {
FUN6("");
return 1;
}

FUN6("", VAR2, VAR3);


if (FUN7(VAR6[VAR5].VAR7, VAR2, VAR3)) {
FUN6("");
return 1;
}


if (FUN7(VAR8[VAR5].VAR7, VAR2, VAR3)) {
FUN6("");
return 0;
}

FUN6("");
return 1;

}
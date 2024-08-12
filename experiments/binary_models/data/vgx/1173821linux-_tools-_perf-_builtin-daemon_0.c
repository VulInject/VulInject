static int FUN1(struct VAR1 *VAR1, int VAR2)
{
int VAR3 = -1, VAR4;
VAR5 *VAR6 = NULL;
union cmd VAR7;

VAR4 = FUN2(VAR2, NULL, NULL);
if (VAR4 < 0) {
FUN3("");
return -1;
}

if (sizeof(VAR7) != FUN4(VAR4, &VAR7, sizeof(VAR7))) {
FUN3("");
goto VAR6;
}

VAR6 = FUN5(VAR4, "");
if (!VAR6) {
FUN3("");
goto VAR6;
}

switch (VAR7.VAR7) {
case VAR8:
VAR3 = FUN6(VAR1, &VAR7, VAR6);
break;
case VAR9:
VAR3 = FUN7(VAR1, &VAR7, VAR6);
break;
case VAR10:
VAR11 = 1;
VAR3 = 0;
FUN8("");
break;
case VAR12:
VAR3 = FUN9(VAR1, &VAR7, VAR6);
break;
default:
break;
}

fclose(VAR6);
VAR6:

if (!VAR6)
close(VAR4);
return VAR3;
}
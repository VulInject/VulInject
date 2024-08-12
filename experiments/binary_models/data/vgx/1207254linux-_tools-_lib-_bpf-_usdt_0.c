static int FUN1(VAR1 *VAR2, const char *VAR3)
{
GElf_Ehdr VAR4;
int VAR5;

if (FUN2(VAR2) != VAR6) {
FUN3("", FUN2(VAR2), VAR3);
return -VAR7;
}

switch (FUN4(VAR2)) {
case VAR8:
if (sizeof(void *) != 8) {
FUN3("", VAR3);
return -VAR7;
}
break;
case VAR9:
if (sizeof(void *) != 4) {
FUN3("", VAR3);
return -VAR7;
}
break;
default:
FUN3("", VAR3);
return -VAR7;
}

if (!FUN5(VAR2, &VAR4))
return -VAR10;

if (VAR4.VAR11 != VAR12 && VAR4.VAR11 != VAR13) {
FUN3("",
VAR3, VAR4.VAR11);
return -VAR7;
}

VAR5 = VAR14;
VAR5 = VAR15;
if (VAR5 != VAR4.VAR16[VAR17]) {
FUN3("", VAR3);
return -VAR7;
}

return 0;
}
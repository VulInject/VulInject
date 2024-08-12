int
FUN1(VAR1 *VAR2, char *VAR3)
{
int VAR4 = 0;
const char *VAR5;
char *VAR6;
ULONG VAR7;
char *VAR8;


VAR7 = 0;
if (!FUN2(NULL, &VAR7))
{
DWORD VAR9 = FUN3();

if (VAR9 != VAR10)
{
FUN4(VAR3, VAR11,
VAR9, "");
return (-1);
}
}

if (VAR7 <= 0)
return 0;
VAR6 = (char*) malloc(VAR7);
if (VAR6 == NULL)
{
snprintf(VAR3, VAR11, "");
return (-1);
}

if (!FUN2(VAR6, &VAR7)) {
FUN4(VAR3, VAR11,
FUN3(), "");
free(VAR6);
return (-1);
}


VAR5 = &VAR6[0];
while (*VAR5 != '' || *(VAR5 + 1) != '')
VAR5++;


VAR5 += 2;


VAR8 = &VAR6[0];
while (*VAR8 != '') {
bpf_u_int32 VAR12 = 0;


if (FUN5(VAR8, VAR3) == 1) {
VAR8 += strlen(VAR8) + 1;
VAR5 += strlen(VAR5) + 1;
continue;
}


if (FUN6(VAR8)) {

VAR12 |= VAR13;
}

if (FUN7(VAR8, &VAR12, VAR3) == -1) {

VAR4 = -1;
break;
}


if (FUN8(VAR2, VAR8, VAR12, VAR5,
VAR3) == -1) {

VAR4 = -1;
break;
}
VAR8 += strlen(VAR8) + 1;
VAR5 += strlen(VAR5) + 1;
}

free(VAR6);
return (VAR4);
}
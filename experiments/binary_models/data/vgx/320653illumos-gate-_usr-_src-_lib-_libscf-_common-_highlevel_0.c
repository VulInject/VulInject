static int
FUN1(void)
{
VAR1 *VAR2;
smbios_system_t VAR3;
smbios_info_t VAR4;

id_t VAR5;
int VAR6;
int VAR7;

VAR8 *VAR9 = NULL;
ssize_t VAR10;
char *VAR11;

int VAR12 = 0;


if ((VAR2 = FUN2(NULL, VAR13, 0, &VAR6)) == NULL)
return (1);


if ((VAR5 = FUN3(VAR2, &VAR3)) == VAR14 ||
FUN4(VAR2, VAR5, &VAR4) == VAR14) {
VAR12 = 1;
goto VAR15;
}


if ((VAR9 = FUN5(NULL, VAR16,
VAR17, "")) == NULL)
goto VAR15;

VAR10 = FUN6(VAR9);

for (VAR7 = 0; VAR7 < VAR10; VAR7++) {
VAR11 = FUN7(VAR9);
if (VAR11 == NULL)
break;
if (strcmp(VAR11, VAR4.VAR18) == 0) {
VAR12 = 1;
break;
}
}

VAR15:
FUN8(VAR2);
FUN9(VAR9);

return (VAR12);
}
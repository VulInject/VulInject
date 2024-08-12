int
main(int argc, char **argv)
{
krb5_context VAR1;
krb5_error_code VAR2;
krb5_realm VAR3;
int VAR4 = 0;
char *VAR5;

FUN1(argv[0]);

if(FUN2(VAR6, sizeof(VAR6) / sizeof(VAR6[0]), argc, argv, &VAR4))
FUN3(1);

if (VAR7)
FUN3 (0);

if(VAR8){
FUN4(NULL);
FUN5(0);
}

argc -= VAR4;
argv += VAR4;

VAR2 = FUN6(&VAR1);
if (VAR2)
FUN7 (1, "", VAR2);

if (VAR9) {
krb5_principal VAR10;
char *VAR11;
int VAR12 = 0;


if (argc != 1)
FUN7(1, "");

VAR2 = FUN8(VAR1, argv[0], &VAR10);
if (VAR2)
FUN9(VAR1, 1, VAR2, "");

VAR2 = FUN10(VAR1, VAR10, &VAR11);
if (VAR2)
FUN9(VAR1, 1, VAR2, "");

if (VAR13 > 0 && VAR13 < 1024)
VAR14 = VAR13;
else if (VAR13 != 0)
FUN7(1, "");

VAR2 = FUN11(VAR1, VAR10, VAR14, VAR15);
if (VAR2 == VAR16) {
if (VAR17)
fprintf(VAR18, "", VAR11);
FUN5(1);
}
switch (VAR2) {
case VAR19:
fprintf(VAR18, "");
VAR12 = 2;
break;
case VAR20:
fprintf(VAR18, "",
(long unsigned)VAR14);
VAR12 = 3;
break;
case 0:
if (VAR17)
FUN12("", VAR11);
FUN12("", VAR15);
break;
default:
FUN9(VAR1, 4, VAR2, "");
break;
}
free(VAR11);
FUN13(VAR1, VAR10);
FUN14(VAR1);
FUN5(VAR12);
}

if (argc != 1)
FUN7(1, "");

VAR5 = argv[0];

VAR2 = FUN15(VAR1, &VAR3);
if (VAR2)
FUN9(VAR1, 1, VAR2, "");

FUN16(VAR1, VAR3, VAR5, NULL, VAR5, 1);
FUN16(VAR1, VAR3, VAR5, "", "", 1);

FUN16(VAR1, "", VAR5, NULL, VAR5, 0);
FUN16(VAR1, "", VAR5, "", "", 0);

FUN16(VAR1, VAR3, VAR5, NULL,
"", 0);
FUN16(VAR1, VAR3, VAR5, "",
"", 0);

FUN16(VAR1, "", VAR5, NULL,
"", 0);
FUN16(VAR1, "", VAR5, "",
"", 0);

FUN14(VAR1);

return 0;
}
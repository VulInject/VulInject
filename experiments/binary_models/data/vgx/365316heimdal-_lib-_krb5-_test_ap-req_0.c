int
main(int argc, char **argv)
{
krb5_context VAR1;
krb5_error_code VAR2;
int VAR3 = 0;
const char *VAR4, *VAR5, *VAR6;
krb5_ccache VAR7;
krb5_keytab VAR8;
krb5_principal VAR9, VAR10;

FUN1(argv[0]);

if(FUN2(VAR11, sizeof(VAR11) / sizeof(VAR11[0]), argc, argv, &VAR3))
FUN3(1);

if (VAR12)
FUN3 (0);

if(VAR13){
FUN4(NULL);
FUN5(0);
}

argc -= VAR3;
argv += VAR3;

if (argc < 3)
FUN3(1);

VAR4 = argv[0];
VAR5 = argv[1];
VAR6 = argv[2];

VAR2 = FUN6(&VAR1);
if (VAR2)
FUN7 (1, "", VAR2);

VAR2 = FUN8(VAR1, VAR6, &VAR7);
if (VAR2)
FUN9(VAR1, 1, VAR2, "");

VAR2 = FUN10(VAR1, VAR4, &VAR9);
if (VAR2)
FUN9(VAR1, 1, VAR2, "");

VAR2 = FUN11(VAR1, VAR5, &VAR8);
if (VAR2)
FUN9(VAR1, 1, VAR2, "");

if (VAR14)
VAR10 = NULL;
else
VAR10 = VAR9;

FUN12(VAR1, VAR9, VAR10, VAR8, VAR7, 0);
FUN12(VAR1, VAR9, VAR10, VAR8, VAR7, VAR15);

FUN13(VAR1, VAR7);
FUN14(VAR1, VAR8);
FUN15(VAR1, VAR9);

FUN16(VAR1);

return VAR2;
}
int
main(int argc, char **argv)
{
krb5_context VAR1;
krb5_ccache VAR2, VAR3;
krb5_principal VAR4, VAR5;
krb5_creds VAR6, *VAR7;
VAR8 **VAR9 = NULL;

if (argc == 6) {
VAR9 = FUN1(FUN2(argv[4]), argv[5]);
argc -= 2;
}

assert(argc == 4);
FUN3(FUN4(&VAR1));


FUN3(FUN5(VAR1, &VAR2));

FUN3(FUN6(VAR1, argv[1], &VAR4));
FUN3(FUN6(VAR1, argv[2], &VAR5));

memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR4 = VAR4;
VAR6.VAR10 = VAR5;
VAR6.VAR11 = VAR9;
FUN3(FUN7(VAR1, VAR12 |
VAR13, VAR2,
&VAR6, NULL, &VAR7));

if (strcmp(argv[3], "") == 0) {
FUN3(FUN8(VAR1, VAR2, VAR7));
} else {
FUN3(FUN9(VAR1, argv[3], &VAR3));
FUN3(FUN10(VAR1, VAR3, VAR7->VAR4));
FUN3(FUN8(VAR1, VAR3, VAR7));
FUN11(VAR1, VAR3);
}

assert(VAR9 == NULL || VAR7->VAR11 != NULL);

FUN11(VAR1, VAR2);
FUN12(VAR1, VAR4);
FUN12(VAR1, VAR5);
FUN13(VAR1, VAR7);
FUN14(VAR1, VAR9);
FUN15(VAR1);
return 0;
}
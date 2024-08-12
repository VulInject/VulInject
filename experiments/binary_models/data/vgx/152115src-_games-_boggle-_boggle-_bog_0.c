int
main(int argc, char *argv[])
{
int VAR1, VAR2;
char *VAR3, *VAR4;

VAR5 = VAR6 = VAR7 = VAR8;
VAR3 = NULL;
VAR9 = -1;
VAR10 = 180;		

while ((VAR1 = getopt(argc, argv, "")) != -1)
switch(VAR1) {
case '':
VAR11 = 5;
break;
case '':
VAR5 = 1;
break;
case '':
VAR12 = 1;
break;
case '':
VAR6 = 1;
break;
case '':
if ((VAR10 = FUN1(VAR13)) < 1)
FUN2(1, "");
break;
case '':
if ((VAR9 = FUN1(VAR13)) < 3)
FUN2(1, "");
break;
case '':
default:
FUN3();
}
argc -= VAR14;
argv += VAR14;

VAR15 = VAR11 * VAR11;


if (argc > 0) {
if (strcmp(argv[0], "") == 0)
VAR7 = 1;
else if (strcmp(argv[0], "") == 0)
VAR8 = 1;
}

if (VAR7 || VAR8) {
argc -= 1;
argv += 1;
}

if (argc == 1) {
if (strlen(argv[0]) != VAR15)
FUN3();
for (VAR4 = argv[0]; *VAR4 != ''; VAR4++)
if (!FUN4((unsigned char)*VAR4))
FUN2(1, ""
"");
VAR3 = argv[0];
} else if (argc != 0)
FUN3();

if (VAR5 && VAR3 == NULL)
FUN2(1, "");

FUN5();
if (VAR5) {
FUN6(VAR3);
while ((VAR4 = FUN7(stdin)) != NULL)
(void) FUN8("", VAR4);
return 0;
}
FUN9();

if (FUN10("", NULL) == -1)
FUN11(1, "");

FUN12("");
if ((VAR16 = FUN13(VAR17)) == NULL) {
FUN14("", VAR17);
FUN15();
return 1;
}
if (FUN16(VAR16) < 0) {
FUN17("", VAR17);
FUN15();
return 1;
}
(void)fclose(VAR16);
VAR16 = NULL;
if (FUN18(VAR18) < 0) {
FUN17("", VAR18);
FUN15();
return 1;
}

FUN12("");
while (FUN19() != '');

for (VAR2 = 0; !VAR2;) {
FUN6(VAR3);
VAR3 = NULL;	
FUN20();
FUN12("");
FUN21(10);	
FUN22(stdin);
for (;;) {
VAR1 = FUN19();
if (VAR1 == '')
FUN23();
else if (VAR1 == '' || VAR1 == '')	
FUN24();
else {
if (FUN25(VAR1)) {
VAR2 = 1;
break;
}
if (VAR1 == '')
break;
}
}
}
FUN15();
return 0;
}
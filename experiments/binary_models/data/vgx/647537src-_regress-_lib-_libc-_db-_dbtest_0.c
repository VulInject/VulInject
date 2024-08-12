void	 FUN1(VAR1 *, VAR2 *);
char	*FUN2(int);
void	 FUN3(VAR1 *);
void	*FUN4(char *, VAR3 *);
void	 FUN5(VAR1 *, VAR2 *);
VAR4	 FUN6(char *);
void	*FUN7(VAR5, char *);
void	 VAR6 FUN8(void);
void	*xmalloc(char *, VAR3);

DBTYPE VAR7;				
void *VAR8;				
u_long VAR9;				
u_int VAR10;				
int VAR11 = VAR12;		

VAR1 *VAR13;				
int VAR14;				

int
main(int argc, char *argv[])
{
enum S VAR15, VAR16;
VAR1 *VAR17;
DBT VAR18, VAR19, VAR20;
size_t VAR21;
int VAR22, VAR23, VAR24;
char *VAR25, *VAR26, *VAR27, *VAR28, VAR29[8 * 1024];

VAR26 = NULL;
VAR25 = NULL;
VAR23 = VAR30 | VAR31;
VAR24 = 0;
while ((VAR22 = getopt(argc, argv, "")) != -1)
switch (VAR22) {
case '':
VAR25 = VAR32;
break;
case '':
VAR26 = VAR32;
break;
case '':
VAR23 |= VAR33;
break;
case '':
if ((VAR11 = open(VAR32,
VAR34|VAR30|VAR35, 0666)) < 0)
FUN9("", VAR32, strerror(VAR36));
break;
case '':
VAR24 = 1;
break;
default:
FUN8();
}
argc -= VAR37;
argv += VAR37;

if (argc != 2)
FUN8();


VAR7 = FUN10(*argv++);


if (strcmp(*argv, "") && FUN11(*argv, "", stdin) == NULL)
FUN9("", *argv, strerror(VAR36));


if (VAR26 == NULL)
VAR8 = NULL;
else
for (VAR27 = strtok(VAR26, ""); VAR27 != NULL;
VAR27 = strtok(0, ""))
if (*VAR27 != '')
VAR8 = FUN7(VAR7, VAR27);


if (VAR25 == NULL) {
VAR27 = getenv("");
if (VAR27 == NULL)
VAR27 = "";
(void)snprintf(VAR29, sizeof VAR29, "", VAR27);
VAR25 = VAR29;
(void)unlink(VAR29);
} else  if (!VAR24)
(void)unlink(VAR25);

if ((VAR17 = FUN12(VAR25,
VAR23, VAR38 | VAR39, VAR7, VAR8)) == NULL)
FUN9("", strerror(VAR36));
VAR13 = VAR17;

VAR16 = VAR40;
for (VAR9 = 1;
(VAR27 = fgets(VAR29, sizeof(VAR29), stdin)) != NULL; ++VAR9) {

if (VAR11 == VAR12 && (VAR28 = strchr(VAR27, '')) != NULL)
*VAR28 = '';
if ((VAR21 = strlen(VAR29)) == 0 || FUN13((unsigned char)*VAR27) || *VAR27 == '')
continue;


if (VAR14 == VAR9)
VAR14 = 1;
switch (*VAR27) {
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);
VAR16 = VAR41;
VAR15 = VAR42;
break;
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);

if (VAR27[VAR21 - 2] == '')
--VAR21;
if (write(VAR11, VAR27 + 1, VAR21 - 1) != VAR21 - 1 ||
write(VAR11, "", 1) != 1)
FUN9("", strerror(VAR36));
break;
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);
VAR16 = VAR41;
VAR15 = VAR43;
break;
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);
VAR16 = VAR41;
VAR15 = VAR44;
break;
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);
if (VAR10 == VAR45) {
FUN1(VAR17, &VAR19);
VAR16 = VAR40;
} else {
VAR16 = VAR41;
VAR15 = VAR46;
}
break;
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);
FUN3(VAR17);
VAR16 = VAR40;
break;
case '':			
if (VAR16 != VAR40)
FUN9("",
VAR9);
if (VAR10 == VAR45) {
VAR16 = VAR41;
VAR15 = VAR47;
} else
FUN5(VAR17, &VAR19);
break;
case '':
VAR10 = FUN6(VAR27 + 1);
break;
case '':			
if (VAR16 != VAR48)
FUN9("", VAR9);
VAR18.VAR18 = FUN4(VAR27 + 1, &VAR18.VAR49);
goto VAR50;
case '':			
if (VAR16 != VAR48)
FUN9("", VAR9);
VAR18.VAR18 = xmalloc(VAR27 + 1, VAR21 - 1);
VAR18.VAR49 = VAR21 - 1;
VAR50:			switch (VAR15) {
case VAR42:
FUN14(&VAR20, &VAR18);
break;
case VAR44:
FUN15(VAR17, &VAR19, &VAR18);
break;
default:
FUN9("",
VAR9);
}
if (VAR7 != VAR51)
free(VAR19.VAR18);
free(VAR18.VAR18);
VAR16 = VAR40;
break;
case '':			
if (VAR16 != VAR41)
FUN9("", VAR9);
if (VAR7 == VAR51)
FUN9("",
VAR9);
VAR19.VAR18 = FUN4(VAR27 + 1, &VAR19.VAR49);
goto VAR52;
case '':			
if (VAR16 != VAR41)
FUN9("", VAR9);
if (VAR7 == VAR51) {
static recno_t VAR53;
VAR53 = FUN16(VAR27 + 1);
VAR19.VAR18 = &VAR53;
VAR19.VAR49 = sizeof(VAR53);
} else {
VAR19.VAR18 = xmalloc(VAR27 + 1, VAR21 - 1);
VAR19.VAR49 = VAR21 - 1;
}
VAR52:			switch (VAR15) {
case VAR42:
FUN17(VAR17, &VAR19, &VAR20);
VAR16 = VAR48;
break;
case VAR43:
FUN18(VAR17, &VAR19);
if (VAR7 != VAR51)
free(VAR19.VAR18);
VAR16 = VAR40;
break;
case VAR44:
VAR16 = VAR48;
break;
case VAR46:
FUN1(VAR17, &VAR19);
if ((VAR7 != VAR51) && (VAR10 != VAR45))
free(VAR19.VAR18);
VAR16 = VAR40;
break;
case VAR47:
FUN5(VAR17, &VAR19);
if ((VAR7 != VAR51) && (VAR10 != VAR45))
free(VAR19.VAR18);
VAR16 = VAR40;
break;
default:
FUN9("",
VAR9);
}
break;
case '':
FUN19(VAR17, VAR27[1] == '');
break;
default:
FUN9("",
VAR9, VAR27);
}
}

if (VAR7 == VAR54 && VAR23 & VAR33)
FUN20(VAR17);
if (VAR17->close(VAR17))
FUN9("", strerror(VAR36));
(void)close(VAR11);
FUN21(0);
}
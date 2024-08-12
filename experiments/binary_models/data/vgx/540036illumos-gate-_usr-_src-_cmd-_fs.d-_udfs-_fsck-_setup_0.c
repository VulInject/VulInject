extern VAR1	FUN1(char *);
extern void	FUN2(char *, ...);
extern void	FUN3(char *, ...);
extern void	FUN4();
extern void	FUN5();
extern void	FUN6();
extern VAR1	FUN7(VAR1, char *, VAR2, long);
extern VAR1	FUN8(char *);

static VAR1	FUN9(VAR1);
static VAR3	FUN10();
extern VAR1	FUN11(struct VAR4 *, VAR3, struct VAR4 *, int);
extern char	*VAR5[];


extern int	VAR6;
long VAR7;
static char VAR8;	
char *VAR9;
char *VAR10;
uint32_t VAR11;
uint32_t VAR12;
uint32_t VAR13;
uint32_t VAR14;
uint32_t VAR15;
uint32_t VAR16;
uint32_t VAR17;
uint32_t VAR18;
int VAR19;
int VAR20;
long VAR21;
long VAR22, VAR23, VAR24;
struct VAR25 *VAR26, **VAR27, *VAR28, *VAR29;
struct VAR30 *VAR31;
static struct VAR32 *VAR33;
static struct VAR34 *VAR35;
static struct VAR36 *VAR37;
static struct VAR38 *VAR39;
static struct VAR40 *VAR41;
struct VAR42 *VAR43;
static struct VAR44 *VAR45;
static struct VAR46 *VAR47;
static struct VAR48 *VAR49;

char VAR50[VAR51];		
char *VAR52;		
char *VAR53;		
int VAR54 = -1;		

char *
FUN12(char *VAR55)
{
dev_t VAR56;
struct stat VAR57;
static char VAR58[VAR59];
char *VAR60, *FUN13(), *FUN14();
struct ustat VAR61;

if (FUN15("", &VAR57) < 0)
FUN16(FUN17(""));
VAR56 = VAR57.VAR62;

VAR63 = VAR58;
(void) strncpy(VAR58, VAR55, sizeof (VAR58));
VAR64:
if (FUN15(VAR58, &VAR57) < 0) {
(void) FUN18(FUN17(""), VAR58);
VAR65 = 34;
return (0);
}

if ((VAR57.VAR66 & VAR67) == VAR68) {
(void) FUN18(FUN17(""
""), VAR55);
return (0);
}

if ((VAR57.VAR66 & VAR67) == VAR69) {
if (VAR56 == VAR57.VAR70)
VAR8++;
else if (FUN19(VAR57.VAR70, &VAR61) == 0) {
(void) FUN18(FUN17(""
""), VAR55);
VAR65 = 33;
return (0);
}
}
if ((VAR57.VAR66 & VAR67) == VAR68) {
VAR71 *VAR72;
struct vfstab VAR73;

if ((VAR72 = fopen(VAR74, "")) == NULL) {
FUN16(FUN17(""),
VAR74);
}
while (FUN20(VAR72, &VAR73) == 0) {
if (strcmp(VAR58, VAR73.VAR75) == 0) {
if (strcmp(VAR73.VAR76,
VAR77) != 0) {

(void) fclose(VAR72);
return (0);
}
(void) strcpy(VAR58, VAR73.VAR78);
if (VAR79) {
VAR60 = FUN13(
FUN14(VAR73.VAR78));
(void) strcpy(VAR58, VAR60);
}
goto VAR64;
}
}
(void) fclose(VAR72);

} else if (((VAR57.VAR66 & VAR67) != VAR69) &&
((VAR57.VAR66 & VAR67) != VAR80)) {
if (VAR81)
FUN2(FUN17(""
""));
else if (FUN8(FUN17(""
""))
== 0)
return (0);

VAR79 = 0;
}

if (FUN1(VAR58)) {
if (VAR79)
VAR82++;
else {
(void) FUN18(FUN17(""
""), VAR58);
FUN21(33);
}
FUN22();	
}
if (VAR79) {
char VAR83[VAR59];

(void) strcpy(VAR83, VAR58);
if (FUN15(FUN14(VAR83), &VAR57) < 0) {
(void) FUN18(FUN17(""), VAR83);
VAR65 = 34;
return (0);
}
}
if (VAR56 == VAR57.VAR70)
VAR8++;
if ((VAR19 = open(VAR58, VAR84)) < 0) {
(void) FUN18(FUN17(""), VAR58);
VAR65 = 34;
return (0);
}
if (VAR81 == 0 || VAR85 != 0)
(void) FUN18("", VAR58);

if (VAR86 || (VAR20 = open(VAR58, VAR87)) < 0) {
VAR20 = -1;
if (VAR81 && !VAR85)
FUN3(FUN17(""));
(void) FUN18(FUN17(""));
}
if (VAR81 == 0)
(void) FUN18("");
if (VAR85 && (VAR8 || VAR82)) {
(void) FUN18("", VAR58);
if (VAR8)
(void) FUN18("",
VAR82? "": "");
if (VAR82)
(void) FUN18("");

(void) FUN18("");
}
VAR88 = 0;
if (FUN9(1) == 0)
return (0);
if (VAR89 == 0 && VAR81 &&
VAR90->VAR91 == VAR92) {
VAR93 = 0;
FUN4();
return (0);
}
VAR24 = VAR94;
VAR27 = (struct VAR25 **)calloc(VAR94,
sizeof (struct VAR25 *));
VAR26 = (struct VAR25 *)calloc(VAR94 + 1,
sizeof (struct VAR25));
if (VAR26 == NULL || VAR27 == NULL) {
(void) FUN18(FUN17(""),
VAR24 * sizeof (struct VAR25));
goto VAR95;
}
VAR28 = VAR26;
VAR29 = &VAR26[VAR24];

FUN5();
return (VAR58);

VAR95:
FUN6();
VAR65 = 39;
return (0);
}
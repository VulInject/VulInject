struct	acct VAR1;
char	VAR2[16];
char	VAR3[VAR4];
static char	VAR5[50];

double	VAR6,
VAR7,
VAR8,
VAR9,
VAR10,
VAR11,
VAR12,
VAR13,
VAR14,
VAR15,
VAR16;
extern long	VAR17;
extern int	VAR18;	
long	VAR19,
VAR20 = -2,
VAR21;
ulong_t	VAR22,
VAR23,
VAR24,
VAR25,
VAR26,
VAR27,
VAR28,
VAR29;
time_t	VAR30,
VAR31,
VAR32,
VAR33;
int	VAR34,
VAR35,
VAR36,
VAR37,
VAR38,
VAR39 = 1,
VAR40,
VAR41,
VAR42,	
VAR43,
VAR44,
VAR45 = 0,
VAR46,
VAR47;
static int	VAR48 = 0,
VAR49 = 0,
VAR50 = 0,
VAR51 = 0;
dev_t   VAR52 = 0xffff;  
dev_t	VAR52 = (VAR53)-1;
uid_t	VAR54;
gid_t	VAR55;
char	*VAR56 = NULL; 

struct VAR57 *FUN1(), *getpwuid(), *VAR58;
struct VAR59 *FUN2(),*VAR60;
long	FUN3();

float   FUN4();
VAR61	FUN4();

char	*VAR62,
*FUN5(),
*FUN6();
VAR53	FUN7();

void FUN8(char *);
void FUN9(int) VAR63;
void FUN10(void);
void FUN11(char *, char *);
void FUN12(void);
void FUN13(void);
char *FUN14(char *);

VAR64	*VAR65;

int
main(int argc, char **argv)
{
int	VAR66;

(void)FUN15(VAR67, "");
FUN16(VAR68,VAR3);
while((VAR66 = getopt(argc, argv,
"")) != VAR69) {
switch(VAR66) {
case '':
sscanf(VAR70,"",&VAR6);
continue;
case '':
sscanf(VAR70,"",&VAR7);
continue;
case '':
sscanf(VAR70,"",&VAR8);
continue;
case '':
sscanf(VAR70,"",&VAR9);
continue;
case '':
VAR36++;
continue;
case '':
VAR34++;
continue;
case '':
if(sscanf(VAR70,"",&VAR55) == 1) {
if (FUN17(VAR55) == NULL)
FUN11("", VAR70);
} else if((VAR60=FUN2(VAR70)) == NULL)
FUN11("", VAR70);
else
VAR55=VAR60->VAR71;
VAR41++;
continue;
case '':
VAR38 |= VAR72;
continue;
case '':
VAR38 |= VAR73;
continue;
case '':
VAR38 |= VAR74;
continue;
case '':
VAR38 |= VAR75;
continue;
case '':
VAR56=FUN14(VAR70);
continue;
case '':
VAR38 |= VAR76;
continue;
case '':
VAR38 |= VAR77;
continue;
case '':
VAR39=0;
continue;
case '':
VAR52 = FUN7(VAR70);
continue;
case '':
if(*VAR70 == '') {
VAR42++;
continue;
}
if(*VAR70 == '') {
VAR44++;
VAR54 = 0;
VAR40++;
continue;
}
if((VAR58 = FUN1(VAR70)) == NULL) {
VAR54 = (VAR78)FUN18(VAR70);

if (VAR54 == 0 && strcmp(VAR70, "") != 0) {
fprintf(VAR79, "", argv[0], VAR70);
FUN19(1);
}
if ((VAR58 = getpwuid(VAR54)) == NULL) {
fprintf(VAR79, "", argv[0], VAR70);
FUN19(1);
}
VAR40++;
} else {
VAR54 = VAR58->VAR80;
VAR40++;
}
continue;
case '':
VAR37++;
VAR39=0;
VAR36++;
continue;
case '':
VAR50 = 1;
VAR33 = FUN3(VAR70);
continue;
case '':
VAR51 = 1;
VAR31 = FUN3(VAR70);
continue;
case '':
VAR35++;
continue;
case '':
VAR48 = 1;
VAR30 = FUN3(VAR70);
continue;
case '':
VAR49 = 1;
VAR32 = FUN3(VAR70);
continue;
case '':
VAR62 = VAR70;
VAR45++;
if((VAR65 = fopen(VAR62, "")) == NULL) {
FUN20("");
VAR43++;
}
continue;
case '':
VAR43++;
continue;
}
}

if(VAR43) {
FUN10();
FUN19(1);
}


argv = &argv[VAR81];
while(VAR81++ < argc) {
FUN8(*argv++);    
VAR47++;
}

if(VAR47==0) {
if(FUN21(0) || FUN22())
FUN8(VAR82);
else {
VAR46 = 1;
VAR34 = VAR20 = 0;
FUN8(NULL);
}
}
FUN9(0);

}
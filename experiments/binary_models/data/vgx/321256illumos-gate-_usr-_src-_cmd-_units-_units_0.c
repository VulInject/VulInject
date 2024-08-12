char	*VAR1	= "";
char	*VAR2[VAR3];
struct VAR4
{
double	VAR5;
char	VAR6[VAR3];
};

struct VAR7
{
double	VAR5;
char	VAR6[VAR3];
char	*VAR8;
} VAR7[VAR9];
char	VAR10[VAR9*10];
struct VAR11
{
double	VAR5;
char	*VAR12;
} VAR11[] =
{
1e-21,	"",
1e-24,	"",
1e-18,	"",
1e-15,	"",
1e-12,	"",
1e-9,	"",
1e-6,	"",
1e-3,	"",
1e-2,	"",
1e-1,	"",
1e1,	"",
1e1,	"",
1e2,	"",
1e2,	"",
1e3,	"",
1e6,	"",
1e6,	"",
1e9,	"",
1e12,	"",
1e15,	"",
1e18,	"",
1e21,	"",
1e24,	"",
1<<10,	"",
1L<<20,	"",
1L<<30,	"",
1LL<<40,"",
0.0,	0
};
VAR13	*VAR14;
int	VAR15;
int	VAR16;
int	VAR17;

void FUN1(int VAR18);
double FUN2(void);
struct VAR7 *FUN3(char *VAR8);
int FUN4(void);
void FUN5(void);
int FUN6(char *VAR19, char *VAR20);
int FUN7(char *VAR8, struct VAR4 *VAR21, int VAR22, int VAR23);
int FUN8(struct VAR4 *VAR21);
int FUN9(int VAR24, int VAR25, int VAR26);
void FUN10(struct VAR4 *VAR21);

int
main(int argc, char *argv[])
{
int VAR25;
char *VAR27;
struct unit VAR28, VAR29;
double VAR26;

(void) FUN11(VAR30, "");
(void) FUN12(VAR31);

if(argc>1 && *argv[1]=='') {
argc--;
argv++;
VAR17++;
}
VAR27 = VAR1;
if(argc > 1)
VAR27 = argv[1];
if ((VAR14 = fopen(VAR27, "")) == NULL) {
FUN13(FUN14(""));
FUN15(1);
}
signal(8, VAR32);
FUN5();

VAR33:
VAR15 = 0;
FUN13(FUN14(""));
if(FUN8(&VAR28))
goto VAR33;
if(VAR15)
goto VAR34;
VAR35:
FUN13(FUN14(""));
if(FUN8(&VAR29))
goto VAR35;
for(VAR25=0; VAR25<VAR3; VAR25++)
if(VAR28.VAR6[VAR25] != VAR29.VAR6[VAR25])
goto VAR36;
VAR26 = VAR28.VAR5/VAR29.VAR5;
if(VAR15 || VAR26 == 0.0)
goto VAR34;
FUN13("", VAR26);
FUN13("", 1./VAR26);
goto VAR33;

VAR36:
if(VAR15)
goto VAR34;
FUN13(FUN14(""));
FUN10(&VAR28);
FUN10(&VAR29);
goto VAR33;

VAR34:
FUN13(FUN14(""));
goto VAR33;
}
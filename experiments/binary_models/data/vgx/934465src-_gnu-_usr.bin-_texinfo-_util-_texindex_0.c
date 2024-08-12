char *FUN1 (char *);


struct VAR1;


struct VAR2
{
char *VAR3;           
union {
char *VAR3;         
long VAR4;        
} VAR5;
long VAR6;          
};


struct VAR7
{
int VAR8;       
int VAR9;       
int VAR10;         
int VAR11;         
char VAR12;   
char VAR13;       
char VAR14;         
char VAR15;         
char VAR16;      
char VAR17;          
};


struct keyfield VAR18[3];


int VAR19 = 3;


char **VAR20;


char **VAR21;


int VAR22;


char **VAR23;


long VAR24;


char *VAR25;


int VAR26;


int VAR27;


char *VAR28;


int VAR29;


char VAR30;




int VAR31;


void FUN2 (int argc, char **argv);
void FUN3 (char *VAR32, int VAR33, char *VAR34);
void FUN4 (char *VAR32, off_t VAR33, char *VAR34);
char **FUN5 (char *VAR35, char **VAR36, char *VAR37, long int VAR38);
char *FUN6 (struct VAR7 *VAR7, char *VAR39, long int *VAR40);
char *FUN7 (char *VAR39, int VAR41, int VAR42, int VAR12);
long FUN8 (char *VAR43, long int VAR44);
char *FUN9 (char *VAR39, int VAR41, int VAR42, int VAR12);
char *FUN10 (char *VAR39);
void FUN11 (char **VAR23, int VAR24, VAR45 *VAR46);
int FUN12 (struct VAR7 *VAR7, char *VAR47,
long int VAR48, long int VAR49, char *VAR50,
long int VAR51, long int VAR52);
int FUN13 (const void *, const void *);
long FUN14 (struct VAR1 *VAR1, VAR45 *VAR53);
int FUN15 (char **VAR20, int VAR54, char *VAR34);
int FUN16 (char **VAR20, int VAR54, char *VAR34);
void FUN17 (const char *VAR55);
void FUN18 (const char *VAR56, const char *VAR57);
void FUN19 (const char *VAR56, const char *VAR57);
void *xmalloc (), *xrealloc ();
char *FUN20 (char *VAR58, char *VAR59);
void FUN21 (int VAR60);


int
main (int argc, char **argv)
{
int VAR61;

VAR26 = 0;
VAR27 = 0;


FUN22 (VAR62, "");

if (FUN23 ("", NULL) == -1)
FUN17 ("");


FUN24 (VAR63, VAR64);
FUN25 (VAR63);






VAR18[0].VAR17 = 1;
VAR18[0].VAR13 = 1;
VAR18[0].VAR10 = -1;
VAR18[0].VAR11 = -1;


VAR18[1].VAR17 = 1;
VAR18[1].VAR15 = 1;
VAR18[1].VAR8 = 1;
VAR18[1].VAR10 = -1;
VAR18[1].VAR11 = -1;


VAR18[2].VAR10 = -1;
VAR18[2].VAR11 = -1;

FUN2 (argc, argv);



for (VAR61 = 0; VAR61 < VAR22; VAR61++)
{
int VAR65;
off_t VAR66;
char *VAR34;
struct stat VAR67;

VAR65 = open (VAR20[VAR61], VAR68, 0);
if (VAR65 < 0)
FUN17 (VAR20[VAR61]);

if (FUN26 (VAR20[VAR61], &VAR67))
FUN17 (VAR20[VAR61]);
if (FUN27 (VAR67.VAR69))
{
VAR70 = VAR71;
FUN17 (VAR20[VAR61]);
}

FUN28 (VAR65, (VAR72) 0, VAR73);
VAR66 = (VAR72) FUN28 (VAR65, (VAR72) 0, VAR74);

close (VAR65);

VAR34 = VAR21[VAR61];
if (!VAR34)
VAR34 = FUN20 (VAR20[VAR61], "");

VAR29 = 0;
VAR30 = '';

if (VAR66 < VAR75)

FUN3 (VAR20[VAR61], (int)VAR66, VAR34);
else
FUN4 (VAR20[VAR61], VAR66, VAR34);
}

FUN21 (VAR26);
FUN29 (0);
return 0; 
}
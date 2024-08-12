char *VAR1[VAR2], *VAR3 = (char *)0,
VAR4[50];
int VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0;
int VAR9 = 0;

char *VAR10[VAR11] ;
char  VAR12[256] ;
int VAR13 = 0, VAR14 = 0, VAR15 = 0 ; 
int VAR16 = 0;

int VAR17 = 0, VAR18 = 0;

void *FUN1 (void *VAR19, size_t VAR20);
void *FUN2 (char *VAR21);
char *FUN3 (char *VAR21, char **VAR22, size_t VAR23);
void FUN4 (void);
void FUN5 (const char *VAR24, ...);
void FUN6 (int VAR25, const char *VAR24, ...);
SIGTYPE FUN7 (int VAR26);
SIGTYPE FUN8 (int VAR26);
SIGTYPE FUN9 (int VAR26);
SIGTYPE FUN10 (int VAR26);
void FUN11(void);
void FUN12 (void);
void FUN13 (void);
int  FUN14 (int);
void FUN15 (void);
void FUN16 (int VAR27);
void FUN17 (char *VAR28);
int  FUN18 (register char *VAR29);
int  FUN19 (register char *VAR21);
int  FUN20 (int VAR20);
int  FUN21 (int VAR20);
int  FUN22 (void);
int  FUN23 (register char *VAR21);
char *FUN24 (int VAR20);
void FUN25 (register char *VAR21);
char *FUN26 (register char *VAR21, int VAR30);
void FUN15 (void);
void FUN27 (char **VAR31, int VAR32);
char *FUN28 (char *, char *);
int FUN29 (char *, int, const char *, VAR33);	

int main (int, char *[]);

void *FUN1(void *VAR19, size_t VAR20)
{
void *VAR34 = malloc (VAR20);
if (!VAR34)
FUN6(2, "");

memcpy (VAR34, VAR19, VAR20);
return VAR34;
}
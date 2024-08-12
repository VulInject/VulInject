int	FUN1(char *);
int	FUN2(char *, int, int, int, VAR1, void *, VAR1, void *);
int	FUN3(struct VAR2 *, struct VAR3 *, struct VAR4 *,
long, int);
struct VAR4
*FUN4(long VAR5, int VAR6);
int	FUN5(struct VAR2 *, struct VAR3 *, struct VAR4 *,
long, int);
void	FUN6(int, VAR7, const char *, const char *);
void	FUN7(VAR8);
void	FUN8(const char *);
void	FUN9(int, VAR7, const char *);
void	FUN10(VAR9);
void	FUN11(const char *);
char   *FUN12(time_t VAR10);
int	FUN13(struct VAR3 *, int, char **);
void	FUN14(void);

int	VAR11;
int	VAR12;

int
main(int argc, char *argv[])
{
int VAR13; 
gid_t VAR14, VAR15[VAR16];
int VAR17, VAR18 = 0, VAR19 = 0;
int VAR20;
extern char *VAR21;
extern int VAR22;

while ((VAR20 = getopt(argc, argv, "")) != -1) {
switch(VAR20) {
case '':
VAR18 = 1;
break;
case '':
VAR19 = 1;
break;
case '':
VAR12 = 1;
break;
case '':
VAR11 = 1;
break;
default:
FUN14();
}
}
argc -= VAR22;
argv += VAR22;
if (!VAR19 && !VAR18)
VAR19 = 1;
if (argc == 0) {
if (VAR19)
FUN10(FUN15());
if (VAR18) {
VAR14 = FUN16();
VAR13 = FUN17(VAR16, VAR15);
if (VAR13 < 0)
FUN18(1, "");
FUN7(VAR14);
for (VAR17 = 0; VAR17 < VAR13; VAR17++)
if (VAR15[VAR17] != VAR14)
FUN7(VAR15[VAR17]);
}
FUN19(0);
}
if (VAR19 && VAR18)
FUN14();
if (VAR19) {
for (; argc > 0; argc--, argv++) {
if (FUN1(*argv))
FUN10(FUN20(*argv));
else
FUN11(*argv);
}
FUN19(0);
}
if (VAR18) {
for (; argc > 0; argc--, argv++) {
if (FUN1(*argv))
FUN7(FUN20(*argv));
else
FUN8(*argv);
}
FUN19(0);
}


FUN19(1);
}
static int	FUN1(VAR1, void *, struct VAR2 *);
static int	FUN2(VAR1, void *, struct VAR2 *);
static int	FUN3(VAR1, void *, struct VAR2 *);
static int	FUN4(VAR1, void *, struct VAR2 *);
static int	FUN5(VAR1, void *, struct VAR2 *);
static int	FUN6(VAR1, void *, struct VAR2 *);
static int	FUN7(VAR1, void *, struct VAR2 *);
static int	FUN8(VAR1, void *, struct VAR2 *);
static int	FUN9(VAR1, void *, struct VAR2 *);
static int	FUN10(VAR1, void *, struct VAR2 *);


int FUN11(struct VAR3 *, struct VAR4 *);


static VAR5	*
FUN12(VAR6 *);

static VAR7 *
FUN13(VAR5 *, VAR8 *);

static void
FUN14(VAR7 *, int);

static int
FUN15(VAR9, VAR5 **, VAR7 **, char *, int);

static void
FUN16(struct VAR3 *, VAR10 *);

static void
FUN17(struct VAR11 *, struct VAR12 *);

static void
FUN18(struct VAR12 *, struct VAR11 *);

static void
FUN19(struct VAR13 *, VAR14 *);

static void	FUN20();
static void	FUN21();

int
FUN22(void)
{
int VAR15;

FUN23(VAR16, "");
FUN20();
FUN24(&VAR17.VAR18, NULL, VAR19, NULL);
FUN25(&VAR17.VAR20, NULL, VAR21, NULL);

if ((VAR15 = FUN26(&VAR22,
&VAR17.VAR23)) != 0) {
FUN27(VAR16,
"");
FUN28(&VAR17.VAR18);
FUN29(&VAR17.VAR20);
FUN21();
return (VAR15);
}
VAR17.VAR24 = VAR25;
VAR15 = FUN30(&VAR22);
if (VAR15) {
FUN27(VAR16, "");
FUN31(VAR17.VAR23);
FUN28(&VAR17.VAR18);
FUN29(&VAR17.VAR20);
FUN21();
return (VAR15);
}
FUN23(VAR16, "");
return (VAR15);
}
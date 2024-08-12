static void FUN1 (struct VAR1 *, struct VAR2 *, int, int);
static void FUN2 (struct VAR1 *);
static void FUN3 (struct VAR1 *, struct VAR3 *);
static void FUN4 (struct VAR1 *, struct VAR3 *);
static void FUN5 (struct VAR1 *, struct VAR3 *);
static void FUN6 (struct VAR1 *);
static void VAR4
(struct VAR2 *, struct VAR3 *, struct VAR5 *, int, int);
static void FUN7 (struct VAR3 *, struct VAR5 *, int);
static int *FUN8 (int);
static void VAR6
(struct VAR2 *, struct VAR7 *, struct VAR8 *, int);
static void VAR9
(struct VAR2 *, struct VAR7 *, struct VAR8 *, int);
static void VAR10
(struct VAR2 *, struct VAR3 *, struct VAR7 *, int);
static void VAR11
(struct VAR3 *, struct VAR2 *, struct VAR5 *, int, int);
static void FUN9 (struct VAR3 *, struct VAR2 *);
static void FUN10 (struct VAR1 *, struct VAR2 *);
static void FUN11 (struct VAR1 *, struct VAR2 *, int);
static void FUN12 (struct VAR1 *, struct VAR2 *);
static int FUN13 (struct VAR2 *, struct VAR3 *);
static void FUN14 (struct VAR1 *, struct VAR2 *, int);
static void FUN15 (struct VAR1 *, struct VAR2 *, int);
static void FUN16 (struct VAR1 *);
static void FUN17 (void);
static int FUN18 (struct VAR1 *, struct VAR2 *);
static void FUN19 (struct VAR1 *, struct VAR2 *, int);
static void FUN20 (struct VAR1 *, struct VAR2 *, int);
static void FUN21 (struct VAR1 *);
static void FUN22 (struct VAR1 *);
static int FUN23 (int);
static void FUN24 (struct VAR1 *);
static void FUN25 (VAR12 *, int);
extern int main (int, char **);

static VAR12 *VAR13;
static VAR14 *VAR15;
static int VAR16 = 0;
static int VAR17 = 0;
static int VAR18 = 0;
static struct VAR1 *VAR19;


static int VAR20;
static int VAR21;

static int VAR22[20000];
static int VAR23[20000];

static int VAR24 = 0x18;
static int VAR25 = 0x2018;

static int
FUN26 (int VAR26)
{
if (VAR23[VAR26])
return VAR23[VAR26];

VAR23[VAR26] = VAR25++;
return VAR23[VAR26];
}
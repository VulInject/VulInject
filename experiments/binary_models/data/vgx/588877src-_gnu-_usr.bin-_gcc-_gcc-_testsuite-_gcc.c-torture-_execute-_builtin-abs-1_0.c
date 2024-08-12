extern intmax_t FUN1 (VAR1);
extern void FUN2 (void);
extern void FUN3 (int);

extern void FUN4 (void);

int
main (void)
{

volatile int VAR2 = 0, VAR3 = 1, VAR4 = -1, VAR5 = -VAR6, VAR7 = VAR6;
volatile long VAR8 = 0L, VAR9 = 1L, VAR10 = -1L, VAR11 = -VAR12, VAR13 = VAR12;
volatile long long VAR14 = 0LL, VAR15 = 1LL, VAR16 = -1LL;
volatile long long VAR17 = -VAR18, VAR19 = VAR18;
volatile intmax_t VAR20 = 0, VAR21 = 1, VAR22 = -1;
volatile intmax_t VAR23 = -VAR24, VAR25 = VAR24;
if (FUN5 (VAR2) != 0)
FUN2 ();
if (FUN5 (0) != 0)
FUN4 ();
if (FUN5 (VAR3) != 1)
FUN2 ();
if (FUN5 (1) != 1)
FUN4 ();
if (FUN5 (VAR4) != 1)
FUN2 ();
if (FUN5 (-1) != 1)
FUN4 ();
if (FUN5 (VAR5) != VAR6)
FUN2 ();
if (FUN5 (-VAR6) != VAR6)
FUN4 ();
if (FUN5 (VAR7) != VAR6)
FUN2 ();
if (FUN5 (VAR6) != VAR6)
FUN4 ();
if (FUN6 (VAR8) != 0L)
FUN2 ();
if (FUN6 (0L) != 0L)
FUN4 ();
if (FUN6 (VAR9) != 1L)
FUN2 ();
if (FUN6 (1L) != 1L)
FUN4 ();
if (FUN6 (VAR10) != 1L)
FUN2 ();
if (FUN6 (-1L) != 1L)
FUN4 ();
if (FUN6 (VAR11) != VAR12)
FUN2 ();
if (FUN6 (-VAR12) != VAR12)
FUN4 ();
if (FUN6 (VAR13) != VAR12)
FUN2 ();
if (FUN6 (VAR12) != VAR12)
FUN4 ();
if (FUN7 (VAR14) != 0LL)
FUN2 ();
if (FUN7 (0LL) != 0LL)
FUN4 ();
if (FUN7 (VAR15) != 1LL)
FUN2 ();
if (FUN7 (1LL) != 1LL)
FUN4 ();
if (FUN7 (VAR16) != 1LL)
FUN2 ();
if (FUN7 (-1LL) != 1LL)
FUN4 ();
if (FUN7 (VAR17) != VAR18)
FUN2 ();
if (FUN7 (-VAR18) != VAR18)
FUN4 ();
if (FUN7 (VAR19) != VAR18)
FUN2 ();
if (FUN7 (VAR18) != VAR18)
FUN4 ();
if (FUN1 (VAR20) != 0)
FUN2 ();
if (FUN1 (0) != 0)
FUN4 ();
if (FUN1 (VAR21) != 1)
FUN2 ();
if (FUN1 (1) != 1)
FUN4 ();
if (FUN1 (VAR22) != 1)
FUN2 ();
if (FUN1 (-1) != 1)
FUN4 ();
if (FUN1 (VAR23) != VAR24)
FUN2 ();
if (FUN1 (-VAR24) != VAR24)
FUN4 ();
if (FUN1 (VAR25) != VAR24)
FUN2 ();
if (FUN1 (VAR24) != VAR24)
FUN4 ();
FUN3 (0);
}
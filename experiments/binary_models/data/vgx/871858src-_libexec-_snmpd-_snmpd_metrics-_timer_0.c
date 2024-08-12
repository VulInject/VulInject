void	 FUN1(int, short, void *);
int	 FUN2(int, VAR1 *, VAR1 *, VAR1 *, VAR1 *);

static VAR1	**VAR2;
static VAR1	**VAR3;
static VAR1	**VAR4;
struct event	  VAR5;

void
FUN1(int VAR6, short VAR7, void *VAR8)
{
struct VAR7	*VAR9 = (struct VAR7 *)VAR8;
struct timeval	 VAR10 = { 60, 0 };	
int		 VAR11[3] = { VAR12, VAR13, 0 }, VAR14;
size_t		 VAR15;
VAR1		*VAR16;

VAR15 = VAR17 * sizeof(VAR1);
for (VAR14 = 0; VAR14 < VAR18->VAR19; VAR14++) {
VAR11[2] = VAR14;
VAR16 = VAR18->VAR20 + (VAR17 * VAR14);
if (FUN3(VAR11, 3, VAR2[VAR14], &VAR15, NULL, 0) == -1)
continue;
(void)FUN2(VAR17, VAR16, VAR2[VAR14],
VAR3[VAR14], VAR4[VAR14]);
FUN4("", VAR14,
(VAR16[VAR21] > 1000 ?
1000 : (VAR16[VAR21] / 10)), (long long) VAR10.VAR22);
}

FUN5(VAR9, &VAR10);
}
FUN1("");
FUN2(VAR1);

static struct nf_conntrack_nat_helper VAR2 =
FUN3(VAR1);

static unsigned int FUN4(struct VAR3 *VAR4, unsigned int VAR5,
unsigned int VAR6,
const char **VAR7, unsigned int *VAR8,
unsigned int VAR9, unsigned int VAR10,
const char *VAR11, unsigned int VAR12)
{
enum ip_conntrack_info VAR13;
struct VAR14 *VAR15 = FUN5(VAR4, &VAR13);
struct VAR16 *VAR17;
unsigned int VAR18;

if (FUN6(VAR15) == VAR19) {
VAR17 = (struct VAR16 *)(VAR4->VAR20 + VAR5);
VAR18 = VAR5 + VAR17->VAR21 * 4;
VAR9 += VAR6 - VAR18;

if (!FUN7(VAR4, VAR15, VAR13,
VAR5, VAR9, VAR10,
VAR11, VAR12, false))
return 0;
} else {
VAR18 = VAR5 + sizeof(struct VAR22);
VAR9 += VAR6 - VAR18;

if (!FUN8(VAR4, VAR15, VAR13,
VAR5, VAR9, VAR10,
VAR11, VAR12))
return 0;
}


*VAR7 = VAR4->VAR20 + VAR6;
*VAR8 += VAR12 - VAR10;
return 1;
}
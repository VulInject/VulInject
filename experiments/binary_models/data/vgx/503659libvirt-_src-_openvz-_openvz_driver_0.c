static int FUN1(virDomainPtr VAR1);
static int FUN2(VAR2 *VAR3,
unsigned int VAR4,
VAR5 *VAR6);
static int FUN3(VAR2 *VAR3,
unsigned long long VAR7);
static int FUN4(VAR2 *VAR3, int *VAR8, int *VAR9);

struct openvz_driver VAR10;


static VAR2 *
FUN5(struct VAR11 *VAR12,
const unsigned char *VAR13)
{
VAR2 *VAR3;
char VAR14[VAR15];

if (!(VAR3 = FUN6(VAR12->VAR16, VAR13))) {
FUN7(VAR13, VAR14);

FUN8(VAR17,
FUN9(""), VAR14);
return NULL;
}

return VAR3;
}
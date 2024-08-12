static void FUN1(struct VAR1 *);
static void FUN2(VAR2, VAR3, VAR4);
void FUN3(struct VAR1 *);

int	VAR5;
int	VAR6;
int	VAR7;
static	char VAR8[256];

void
FUN4(void (*VAR9)(struct VAR1 *), VAR10 *VAR11)
{
int VAR12;
ino_t VAR13;

VAR13 = (unsigned)(VAR14->VAR15 * VAR14->VAR16 - 1);

if (VAR17 != 0) {
VAR12 = ~0;
if (VAR11 != NULL) {

VAR11 += (VAR17 / VAR18);
VAR12 = *VAR11++;
}
VAR12 >>= (VAR17 % VAR18);
FUN5(VAR17);
goto VAR19;
}
while (VAR17 < VAR13) {
if ((VAR17 % VAR18) == 0) {
VAR12 = ~0;
if (VAR11 != NULL)
VAR12 = *VAR11++;
}
VAR19:
VAR17++;

if ((VAR17 >= VAR20) && (VAR12 & 1)) {

if (!(VAR9 == VAR21 && FUN6(VAR17, VAR22)))
(*VAR9)(FUN7(VAR17));
}
VAR12 >>= 1;
}
}
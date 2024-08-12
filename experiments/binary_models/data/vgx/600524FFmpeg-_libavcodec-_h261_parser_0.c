static int FUN1(VAR1 *VAR2,
VAR3 *VAR4,
const VAR5 **VAR6, int *VAR7,
const VAR5 *VAR8, int VAR9)
{
VAR10 *VAR11 = VAR2->VAR12;
int VAR13;

if (VAR2->VAR14 & VAR15) {
VAR13 = VAR9;
} else {
VAR13 = FUN2(VAR11, VAR4, VAR8, VAR9);
if (FUN3(VAR11, VAR13, &VAR8, &VAR9) < 0) {
*VAR6      = NULL;
*VAR7 = 0;
return VAR9;
}
}
*VAR6      = VAR8;
*VAR7 = VAR9;
return VAR13;
}

const AVCodecParser VAR16 = {
.VAR17      = { VAR18 },
.VAR19 = sizeof(VAR10),
.VAR20   = VAR21,
.VAR22   = VAR23,
};
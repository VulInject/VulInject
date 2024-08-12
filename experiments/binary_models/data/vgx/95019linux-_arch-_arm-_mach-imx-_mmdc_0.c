static int FUN1(struct VAR1 *VAR2,
void VAR3 *VAR4, struct VAR5 *VAR6)
{
*VAR2 = (struct VAR1) {
.VAR7 = (struct VAR7) {
.VAR8    = VAR9,
.VAR10    = VAR10,
.VAR11     = VAR12,
.VAR13            = VAR14,
.VAR15            = VAR16,
.VAR17          = VAR18,
.VAR19           = VAR20,
.read           = VAR21,
.VAR22	= VAR23,
},
.VAR4 = VAR4,
.VAR6 = VAR6,
.VAR24 = 0,
};

VAR2->VAR25 = FUN2(&VAR26, 0, 0, VAR27);

return VAR2->VAR25;
}
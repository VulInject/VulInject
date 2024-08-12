int
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, size_t VAR4,
struct VAR5 **VAR6)
{
struct dwbuf	 VAR7 = *VAR3;
struct dwbuf	 VAR1;
size_t		 VAR8, VAR9, VAR10;
struct VAR5	*VAR11 = NULL;
uint32_t	 VAR12 = 0, VAR13 = 0;
uint16_t	 VAR14;
uint8_t		 VAR15;
int		 VAR16;
static int 	 VAR17 = 0;

if (!VAR17) {
FUN2(&VAR18, "", 1, sizeof(struct VAR5));
FUN2(&VAR19, "", 32, sizeof(struct VAR20));
FUN2(&VAR21, "", 32, sizeof(struct VAR22));
FUN2(&VAR23, "", 512, sizeof(struct VAR24));
FUN2(&VAR25, "", 1024, sizeof(struct VAR26));
VAR17 = 1;
}

if (VAR2->VAR27 == 0 || VAR3->VAR27 == 0)
return VAR28;


VAR8 = VAR4 - VAR2->VAR27;

if (FUN3(VAR2, &VAR12))
return -1;

if (VAR12 >= 0xfffffff0 || VAR12 > VAR2->VAR27)
return VAR29;


VAR9 = VAR8 + VAR12 + sizeof(VAR30);

if (FUN4(VAR2, &VAR1, VAR12))
return -1;

VAR10 = 4; 

if (FUN5(&VAR1, &VAR14) ||
FUN6(&VAR1, &VAR13, VAR10) ||
FUN7(&VAR1, &VAR15))
return -1;

if (FUN8(&VAR7, VAR13))
return -1;


if (VAR14 != 2)
return VAR31;

VAR11 = FUN9(&VAR18, sizeof(*VAR11));
if (VAR11 == NULL)
return VAR32;

VAR11->VAR33 = VAR8;
VAR11->VAR34 = VAR12;
VAR11->VAR35 = VAR14;
VAR11->VAR36 = VAR13;
VAR11->VAR37 = VAR15;
FUN10(&VAR11->VAR38);
FUN10(&VAR11->VAR39);

VAR16 = FUN11(&VAR7, &VAR11->VAR38);
if (VAR16 != 0) {
FUN12(VAR11);
return VAR16;
}

VAR16 = FUN13(&VAR1, VAR9, VAR15, &VAR11->VAR38,
&VAR11->VAR39);
if (VAR16 != 0) {
FUN12(VAR11);
return VAR16;
}

if (VAR6 != NULL)
*VAR6 = VAR11;
else
FUN12(VAR11);

return 0;
}
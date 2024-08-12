static struct VAR1 *FUN1(struct VAR1 *VAR2, u32 VAR3)
{
struct VAR1 *VAR4 = NULL;
struct VAR5 *VAR6 = VAR2->VAR6;
u32 VAR7 = VAR3 & VAR8;
int VAR9 = VAR3 & VAR10;
const char *VAR11;


for (VAR11 = VAR2->VAR12.VAR13.VAR14[VAR9]; !VAR4 && VAR11;
VAR11 = FUN2(VAR7, VAR11)) {
struct VAR5 *VAR15;
const char *VAR16 = NULL;

VAR15 = NULL;
if (VAR3 & VAR17) {

VAR4 = FUN3(VAR2, VAR11);
continue;
} else if (*VAR11 == '') {

const char *VAR18;
VAR16 = VAR11 = FUN4(VAR11, &VAR18);
if (!VAR16)

VAR16 = VAR2->VAR19.VAR20;
if (*VAR18 == '') {

;
}

VAR15 = FUN5(VAR6, VAR18);
if (!VAR15)
continue;
} else if (*VAR11 == '') {

continue;
} else {

VAR16 = VAR11;
}


VAR4 = FUN6(VAR15 ? VAR15 : VAR6, VAR16);
FUN7(VAR15);
}


return VAR4;
}
static inline int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6, u16 VAR7,
u16 VAR8)
{

struct VAR9 *VAR10 = (struct VAR9 *)VAR4->VAR11;

VAR6->VAR12 = VAR4->VAR12;
FUN2(VAR2, (struct VAR13 *)VAR4->VAR11, VAR6);

if ((memcmp(VAR10->VAR14, VAR2->VAR15->VAR16, VAR17))) {

FUN3(VAR4);
return 0;
}

FUN4(VAR2, VAR4, VAR6, VAR7, VAR8);

FUN3(VAR4);

return 0;

if (VAR2->VAR18 == VAR19) {
FUN5(VAR2->VAR15, "");
return 0;

}

if (VAR2->VAR20 && VAR7 == VAR21) {
if (VAR8 == VAR22 &&
VAR2->VAR18 == VAR19) {
struct VAR3 *VAR23;

VAR23 = FUN6(VAR4, VAR24);
if (VAR23)
FUN7(VAR23->VAR15, VAR23, VAR6);
}


VAR2->VAR25.VAR26++;
VAR2->VAR25.VAR27 += VAR4->VAR12;
FUN8(VAR2->VAR28, VAR4, VAR6, VAR29);
return 0;
}

if (VAR2->VAR18 == VAR19) {
if (VAR7 != VAR30 && VAR7 != VAR31) {
FUN5(VAR4->VAR15, ""
"",
VAR7, VAR8);
return -1;
}

FUN7(VAR4->VAR15, VAR4, VAR6);
return 0;
}

FUN5(VAR4->VAR15, ""
"");
return -1;
}
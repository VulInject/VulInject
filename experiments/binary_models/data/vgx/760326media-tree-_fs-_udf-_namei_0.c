static struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR1 *VAR1,
unsigned int VAR4)
{
struct VAR2 *VAR2 = NULL;
struct fileIdentDesc VAR5;
struct udf_fileident_bh VAR6;
struct VAR7 *VAR8;

if (VAR1->VAR9.VAR10 > VAR11)
return FUN2(-VAR12);


if (!FUN3(VAR1->VAR9.VAR13, "", 3)) {
struct kernel_lb_addr VAR14 = {
.VAR15 = 0,
.VAR16 =
FUN4(VAR1->VAR9.VAR13 + 3,
NULL, 0),
};
VAR2 = FUN5(VAR3->VAR17, VAR14);
if (FUN6(VAR2))
return VAR2;
} else

VAR8 = FUN7(VAR3, &VAR1->VAR9, &VAR6, &VAR5);
if (FUN6(VAR8))
return FUN8(VAR8);

if (VAR8) {
struct kernel_lb_addr VAR18;

if (VAR6.VAR19 != VAR6.VAR20)
FUN9(VAR6.VAR20);
FUN9(VAR6.VAR19);

VAR18 = FUN10(VAR5.VAR21.VAR22);
VAR2 = FUN5(VAR3->VAR17, &VAR18);
if (FUN6(VAR2))
return FUN8(VAR2);
}

return FUN11(VAR2, VAR1);
}
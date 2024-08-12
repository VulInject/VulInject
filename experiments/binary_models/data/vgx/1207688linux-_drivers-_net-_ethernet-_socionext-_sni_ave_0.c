static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
const unsigned char *VAR4,
unsigned int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);

if (FUN3(VAR3 > VAR8))
return -VAR9;
if (FUN3(VAR5 > 6))
return -VAR9;

FUN4(VAR2, VAR3);


FUN5(VAR2, VAR4,
FUN6(VAR3), FUN6(VAR3) + 4);


FUN7(FUN8(31, VAR5) & VAR10,
VAR7->VAR11 + FUN9(VAR3));
FUN7(VAR12, VAR7->VAR11 + FUN9(VAR3) + 4);


FUN7(VAR13, VAR7->VAR11 + FUN10(VAR3));


FUN7(0, VAR7->VAR11 + FUN11(VAR3));


FUN12(VAR2, VAR3);

return 0;
}
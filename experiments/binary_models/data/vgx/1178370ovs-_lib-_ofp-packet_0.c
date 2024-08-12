static struct VAR1 *
FUN1(const struct VAR2 *VAR3,
enum ofp_version VAR4, size_t VAR5)
{

size_t VAR6 = (VAR3->VAR7.VAR8
+ VAR9   
+ VAR3->VAR10 * 4
+ VAR3->VAR11
+ VAR3->VAR12
+ 256);     
struct VAR1 *VAR13 = FUN2(VAR14, VAR4,
FUN3(0), VAR6);

FUN4(VAR3, VAR4, VAR5, VAR13);
if (VAR3->VAR7.VAR15) {
FUN5(VAR13, VAR16, VAR3->VAR7.VAR17,
VAR3->VAR7.VAR15);
}

FUN6(VAR13);
return VAR13;
}
static struct VAR1 *FUN1(struct VAR2 *VAR2,
__be16 VAR3, __be32 VAR4,
__be16 VAR5, __be32 VAR6,
int VAR7)
{
unsigned short VAR8 = FUN2(VAR3);
unsigned int VAR9 = FUN3(VAR2, VAR4, VAR8);
unsigned int VAR10 = VAR9 & VAR11.VAR12;
struct VAR13 *VAR14 = &VAR11.VAR9[VAR10];
FUN4(VAR15, VAR6, VAR4);
const __portpair VAR16 = FUN5(VAR5, VAR8);
struct VAR1 *VAR17;

FUN6(VAR17, &VAR14->VAR18) {
if (FUN7(VAR17, VAR2, VAR15, VAR6,
VAR4, VAR16, VAR7))
return VAR17;

break;
}
return NULL;
}
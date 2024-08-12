static struct VAR1 *FUN1(struct VAR2 *VAR3,
const __le32 VAR4)
{
struct VAR1 *VAR5;
unsigned long VAR6;

FUN2(&VAR3->VAR7.VAR8, VAR6);
FUN3(&VAR3->VAR7, VAR5) {
struct VAR9 *VAR10 = (struct VAR9 *) VAR5->VAR11;

if (VAR10->VAR4 == VAR4) {
FUN4(VAR5, &VAR3->VAR7);
FUN5(&VAR3->VAR7.VAR8, VAR6);
FUN6(VAR3, VAR5);
return VAR5;
}
}
FUN5(&VAR3->VAR7.VAR8, VAR6);
return NULL;
}
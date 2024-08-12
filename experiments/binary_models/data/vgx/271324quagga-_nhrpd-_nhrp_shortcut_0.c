static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4;
struct VAR5 *VAR6;
char VAR7[VAR8];
afi_t VAR9 = FUN2(FUN3(VAR3));

if (!VAR10[VAR9])
return 0;

VAR6 = FUN4(VAR10[VAR9], VAR3);
if (!VAR6->VAR11) {
VAR4 = VAR6->VAR11 = FUN5(VAR12, sizeof(struct VAR1));
VAR4->VAR13 = VAR14;
VAR4->VAR3 = &VAR6->VAR3;

FUN6(VAR15, "",
FUN7(VAR4->VAR3, VAR7, sizeof VAR7));
} else {
VAR4 = VAR6->VAR11;
FUN8(VAR6);
}
return VAR4;
}
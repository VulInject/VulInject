static void FUN1(struct VAR1 *VAR1,
char *VAR2,
int VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
__be32 VAR8;
u32 VAR9;
u16 VAR10;

FUN2(VAR2, VAR3, &VAR10, &VAR9);

if (!VAR1->VAR11[VAR10]) {
FUN3(VAR1->VAR12->VAR5, "");
return;
}

VAR8 = FUN4(VAR9);
VAR5 = VAR1->VAR11[VAR10]->VAR5;
VAR7 = FUN5(&VAR13, &VAR8, VAR5);
if (!VAR7) {
FUN6(VAR5, "",
&VAR9);
return;
}

FUN7(VAR5, "", &VAR9);
FUN8(VAR7, NULL);
FUN9(VAR7);
}
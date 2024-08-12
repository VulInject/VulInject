static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 **VAR6 = &VAR2->VAR5;
struct VAR5 *VAR7 = NULL;
struct VAR3 *VAR8;
int VAR9;

while (*VAR6) {
VAR7 = *VAR6;
VAR8 = FUN2(VAR7, struct VAR3, VAR10);

VAR9 = FUN3(VAR4, VAR8);
if (VAR9 < 0)
VAR6 = &(*VAR6)->VAR11;
else
VAR6 = &(*VAR6)->VAR12;
}

FUN4(&VAR4->VAR10, VAR7, VAR6);
FUN5(&VAR4->VAR10, VAR2);
}
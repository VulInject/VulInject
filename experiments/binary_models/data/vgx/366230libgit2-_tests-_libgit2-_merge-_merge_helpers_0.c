static int FUN1(const struct VAR1 *VAR2, const VAR3 *VAR4)
{
git_oid VAR5;
bool VAR6;

if (strlen(VAR2->VAR7) != 0) {
FUN2(FUN3(&VAR5, VAR2->VAR7, VAR8));
VAR6 = 1;
} else
VAR6 = 0;

if (VAR4->VAR9 != VAR2->VAR9 ||
(VAR6 && FUN4(&VAR4->VAR10, &VAR5) != 0) ||
FUN5(VAR4) != VAR2->VAR11)
return 0;

if (VAR4->VAR9 == 0 && (VAR4->VAR12 != NULL || strlen(VAR2->VAR12) > 0))
return 0;

if (VAR4->VAR9 != 0 && (strcmp(VAR4->VAR12, VAR2->VAR12) != 0))
return 0;

return 1;
}
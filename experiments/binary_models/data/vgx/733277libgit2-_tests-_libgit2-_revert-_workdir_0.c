void FUN1(void)
{
git_str VAR1 = VAR2;
VAR3 *VAR4;
git_oid VAR5, VAR6;
VAR7 *VAR8, *VAR9;

struct merge_index_entry VAR10[] = {
{ 0100644, "", 1, "" },
{ 0100644, "", 2, "" },
{ 0100644, "", 3, "" },
};

FUN2(FUN3(&VAR4, VAR11));
FUN2(FUN4(VAR4, "", 0));

FUN2(FUN5(&VAR5, "", VAR12));
FUN2(FUN6(&VAR8, VAR11, &VAR5));
FUN2(FUN7(VAR11, (VAR13 *)VAR8, VAR14, NULL));

FUN2(FUN5(&VAR6, "", VAR12));
FUN2(FUN6(&VAR9, VAR11, &VAR6));

FUN2(FUN8(VAR11, VAR9, NULL));

FUN9(FUN10(VAR15, VAR10, 3));

FUN2(FUN11(&VAR1, ""));
FUN12(
"" \
"" \
"" \
"" \
"" \
"" \
"" \
"" \
"" \
"",
VAR1.VAR16);

FUN13(VAR9);
FUN13(VAR8);
FUN14(VAR4);
FUN15(&VAR1);
}
static void FUN1(VAR1 *VAR2)
{
git_index_entry VAR3, VAR4, VAR5;

memset(&VAR3, 0x0, sizeof(VAR6));
memset(&VAR4, 0x0, sizeof(VAR6));
memset(&VAR5, 0x0, sizeof(VAR6));

VAR3.VAR7 = "";
VAR3.VAR8 = VAR9;
FUN2(&VAR3, 1);
FUN3(&VAR3.VAR10, "", VAR11);

VAR4.VAR7 = "";
VAR4.VAR8 = VAR9;
FUN2(&VAR4, 2);
FUN3(&VAR4.VAR10, "", VAR11);

VAR5.VAR7 = "";
VAR5.VAR8 = VAR9;
FUN2(&VAR5, 3);
FUN3(&VAR5.VAR10, "", VAR11);

FUN4(FUN5(VAR2, &VAR3, &VAR4, &VAR5));
}
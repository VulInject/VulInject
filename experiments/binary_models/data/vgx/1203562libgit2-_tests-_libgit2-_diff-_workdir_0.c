void FUN1(void)
{
git_diff_options VAR1 = VAR2;
VAR3 *VAR4 = NULL;
VAR5 *VAR6 = NULL;
diff_expects VAR7;
const VAR8 *VAR9;
git_index_entry VAR10;

VAR11 = FUN2("");



FUN3(FUN4(&VAR4, VAR11, NULL, &VAR1));
memset(&VAR7, 0, sizeof(VAR7));
FUN3(FUN5(
VAR4, VAR12, VAR13, VAR14, VAR15, &VAR7));
FUN6(8, VAR7.VAR16);
FUN6(0, VAR7.VAR17[VAR18]);
FUN6(4, VAR7.VAR17[VAR19]);
FUN6(4, VAR7.VAR17[VAR20]);
FUN7(VAR4);



FUN3(FUN8(&VAR6, VAR11));

FUN9((VAR9 = FUN10(VAR6, "", 0)) != NULL);
memcpy(&VAR10, VAR9, sizeof(VAR10));
VAR10.VAR21 |= VAR22;
FUN3(FUN11(VAR6, &VAR10));

FUN9((VAR9 = FUN10(VAR6, "", 0)) != NULL);
memcpy(&VAR10, VAR9, sizeof(VAR10));
VAR10.VAR21 |= VAR22;
FUN3(FUN11(VAR6, &VAR10));

FUN3(FUN12(VAR6));
FUN13(VAR6);



FUN3(FUN4(&VAR4, VAR11, NULL, &VAR1));
memset(&VAR7, 0, sizeof(VAR7));
FUN3(FUN5(
VAR4, VAR12, VAR13, VAR14, VAR15, &VAR7));
FUN6(6, VAR7.VAR16);
FUN6(0, VAR7.VAR17[VAR18]);
FUN6(3, VAR7.VAR17[VAR19]);
FUN6(3, VAR7.VAR17[VAR20]);
FUN7(VAR4);

}
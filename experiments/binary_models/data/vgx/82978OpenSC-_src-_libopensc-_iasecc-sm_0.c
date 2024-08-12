int
FUN1(struct VAR1 *VAR2, unsigned VAR3, struct VAR4 *update)
{
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR7 = &VAR2->VAR8.VAR9;
struct sc_remote_data VAR10;
int VAR11;

FUN2(VAR6);
FUN3(VAR6, "", VAR3, update->VAR12, update->VAR13);

VAR11 = FUN4(VAR2, VAR3, VAR14);
FUN5(VAR6, VAR11, "");

FUN3(VAR6, "", FUN6(&VAR7->VAR15));

VAR7->VAR16 = update;

FUN7(&VAR10);
VAR11 = FUN8(VAR2, &VAR10);
FUN5(VAR6, VAR11, "");

VAR11 = FUN9 (VAR2, &VAR10, NULL, 0);
FUN5(VAR6, VAR11, "");

VAR10.free(&VAR10);
FUN10(VAR6, VAR11);
FUN5(VAR6, VAR17, "");
return VAR17;
}
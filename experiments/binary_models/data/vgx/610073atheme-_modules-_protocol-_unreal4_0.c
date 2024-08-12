static void
FUN1(struct VAR1 *VAR2, int VAR3, char *VAR4[])
{
struct VAR5 *VAR6;


if (!VAR4[0])
return;
VAR6 = FUN2(VAR4[0]);
if (VAR6 == NULL)
return;
FUN3(VAR6);

if (VAR6 != VAR2->VAR6)
return;

VAR7.VAR8 = VAR9;


if (VAR7.VAR10)
{
FUN4(VAR11, &VAR11);

FUN5(VAR12, "", (FUN6(&VAR11) > 1000) ? (FUN6(&VAR11) / 1000) : FUN6(&VAR11), (FUN6(&VAR11) > 1000) ? "" : "");

FUN7("", (FUN6(&VAR11) > 1000) ? (FUN6(&VAR11) / 1000) : FUN6(&VAR11), (FUN6(&VAR11) > 1000) ? "" : "");
FUN5(VAR12, "");
FUN7("");

VAR7.VAR10 = false;
}
}
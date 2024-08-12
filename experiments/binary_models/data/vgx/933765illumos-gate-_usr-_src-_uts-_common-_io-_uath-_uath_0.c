static int
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct uath_cmd_ledsteady VAR5;
int VAR6;

VAR5.VAR3 = FUN2(VAR3);
VAR5.VAR4 = FUN2(VAR4);

FUN3(VAR7, ""
"",
(VAR3 == VAR8) ? "" : "",
VAR4 ? "" : "");
VAR6 = FUN4(VAR2, VAR9, &VAR5, sizeof (VAR5), 0);
return (VAR6);
}
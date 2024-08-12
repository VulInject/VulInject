int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
evsel__sb_cb_t VAR4, void *VAR5)
{
struct VAR6 *VAR6;

if (!VAR3->VAR7) {
FUN2("");
VAR3->VAR7 = 1;
}

VAR6 = FUN3(VAR3, VAR1->VAR8.VAR9);
if (!VAR6)
return -1;

VAR6->VAR10.VAR4 = VAR4;
VAR6->VAR10.VAR5 = VAR5;
FUN4(VAR1, VAR6);
return 0;
}
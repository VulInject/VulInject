static bool
FUN1(struct VAR1 *VAR2)
{
struct odputil_keybuf VAR3;
struct ofpbuf VAR4;
struct ofpbuf VAR5;
struct flow VAR6;
bool VAR7;

struct odp_flow_key_parms VAR8 = {
.VAR6 = &VAR6,
.VAR9 = true,
};

memset(&VAR6, 0, sizeof VAR6);
FUN2(&VAR5, &VAR3, sizeof VAR3);
FUN3(&VAR8, &VAR5);
FUN4(&VAR4, 64);

struct VAR10 *VAR11;

VAR11 = FUN5(&VAR4,
VAR12,
sizeof *VAR11);
VAR11->VAR13 = FUN6(VAR14);

VAR7 = FUN7(VAR2->VAR15, "", &VAR5,
&VAR4, NULL);
FUN8(&VAR4);
FUN9("",
FUN10(VAR2->VAR15),
VAR7 ? "" : "");
return VAR7;
}
static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

struct v4l2_fwnode_endpoint VAR5 = {
.VAR6 = VAR7
};
int VAR8;

VAR4 = FUN2(FUN3(VAR2), NULL);
if (!VAR4) {
FUN4(VAR2, "");
return -VAR9;
}

VAR8 = FUN5(VAR4, &VAR5);
FUN6(VAR4);
if (VAR8 == -VAR10) {
FUN4(VAR2, "");
return VAR8;
} else if (VAR8) {
FUN4(VAR2, "", VAR8);
return VAR8;
}


if (VAR5.VAR11.VAR12.VAR13 != 4) {
FUN4(VAR2, "",
VAR5.VAR11.VAR12.VAR13);
return -VAR9;
}

return 0;
}
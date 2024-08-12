extern bool FUN1(cgroup_ctl_feature_t VAR1)
{
struct stat VAR2;
int VAR3;
char *VAR4 = NULL;
static int VAR5 = -1;


switch (VAR1) {
case VAR6:
if (VAR5 == -1) {
FUN2(VAR4,
"",
VAR7.VAR8);
VAR3 = FUN3(VAR4, &VAR2);
FUN4(VAR4);
return (VAR5 = (VAR3 == 0));
} else
return VAR5;
default:
break;
}

return false;
}
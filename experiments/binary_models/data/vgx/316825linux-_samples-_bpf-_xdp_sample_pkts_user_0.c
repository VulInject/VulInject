static int VAR1;
static char *VAR2;
static __u32 VAR3 = VAR4;
static __u32 VAR5;
static struct VAR6 *VAR7 = NULL;

static int FUN1(int VAR8, int VAR9, const char *VAR10)
{
struct bpf_prog_info VAR11 = {};
__u32 VAR12 = sizeof(VAR11);
int VAR13;

VAR13 = FUN2(VAR8, VAR9, VAR3, NULL);
if (VAR13 < 0) {
FUN3("", VAR10);
return VAR13;
}

VAR13 = FUN4(VAR9, &VAR11, &VAR12);
if (VAR13) {
FUN3("", strerror(VAR14));
return VAR13;
}
VAR5 = VAR11.VAR15;

return VAR13;
}
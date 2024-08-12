FUN1("", VAR1);

static struct ctl_table VAR2[] = {
{
.VAR3       = "",
.VAR4           = &VAR5,
.VAR6         = sizeof(int),
.VAR7           = 0444,
.VAR8   = VAR9
},
{}
};

static struct ctl_table VAR10[] = {
{
.VAR3       = "",
.VAR7           = 0555,
.VAR11          = VAR2
},
{}
};

static struct VAR12 *VAR13;

static void FUN2(void)
{
VAR13 = FUN3(VAR10);
}
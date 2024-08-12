struct VAR1 *VAR2;
FUN1(VAR2);

static struct VAR1 *VAR3;

static int FUN2(void)
{
VAR2 = FUN3("", NULL);
if (!VAR2)
return -VAR4;

VAR3 = FUN4("", 0444,
VAR2, NULL,
&VAR5);
if (!VAR3) {
FUN5(VAR2);
VAR2 = NULL;
return -VAR4;
}

return 0;
}
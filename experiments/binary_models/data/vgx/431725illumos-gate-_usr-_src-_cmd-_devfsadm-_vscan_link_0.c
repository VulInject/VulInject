};
FUN1(VAR1);

static int
FUN2(di_minor_t VAR2, di_node_t VAR3)
{
char *VAR4 = FUN3(VAR2);
char VAR5[VAR6];

(void) snprintf(VAR5, sizeof (VAR5), "", VAR4);
(void) FUN4(VAR5, VAR3, VAR2, 0);

return (VAR7);
}
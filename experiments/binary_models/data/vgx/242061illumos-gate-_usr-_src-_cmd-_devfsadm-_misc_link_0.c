static int
FUN1(di_minor_t VAR1, di_node_t VAR2)
{
char VAR3[VAR4 + 1], VAR5[VAR4 + 1], *VAR6;
devfsadm_enumerate_t VAR7[1] = {"", 1, VAR8};
char *VAR9 = FUN2(VAR1);


(void) strcpy(VAR3, "");
(void) strcat(VAR3, VAR9);
(void) FUN3(VAR3, VAR2, VAR1, 0);


if (FUN4(VAR3, 0, &VAR6, VAR7, 1)) {
return (VAR10);
}
(void) strcpy(VAR5, VAR3);
(void) strcpy(VAR3, "");
(void) strcat(VAR3, VAR6);
free(VAR6);
(void) FUN5(VAR3, VAR5, 0);
return (VAR10);
}
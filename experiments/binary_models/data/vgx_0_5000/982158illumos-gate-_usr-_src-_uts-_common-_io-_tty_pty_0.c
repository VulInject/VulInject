static int
ptc_attach(dev_info_t *devi, ddi_attach_cmd_t cmd)
{
char	name[8];
int	pty_num;
char	*pty_digit = pty_digits;
char	*pty_bank = pty_banks;

for (pty_num = 0; pty_num < npty; pty_num++) {
(void) sprintf(name, "pty%c%c", *pty_bank, *pty_digit);
if (ddi_create_minor_node(devi, name, S_IFCHR,
pty_num, DDI_PSEUDO, 0) == DDI_FAILURE) {
ddi_remove_minor_node(devi, NULL);
return (-1);
}
if (*(++pty_digit) == '\0') {
pty_digit = pty_digits;
if (*(++pty_bank) == '\0')
break;
}
}
ptc_dip = devi;
return (DDI_SUCCESS);
}